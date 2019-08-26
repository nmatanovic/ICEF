// ---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitModels.h"
#include <vcl.h>
// ---------------------------------------------------------------------------

#pragma package(smart_init)

TRecordModel::TRecordModel(TDataSet *pDataSetStore) : TClientDataSet(NULL)
{
	m_DataSetStore = pDataSetStore;
	m_FieldNames = "";
	m_NumberOfFields = 0;
}

__fastcall TRecordModel::~TRecordModel()
{
}

bool __fastcall TRecordModel::InitStructure()
{
	this->FieldDefs->Clear();
	this->FieldDefs->Assign(m_DataSetStore->FieldDefs);

	for (int i = 0; i < this->FieldDefs->Count; i++)
	{
		TField *pFDef = this->FieldDefs->operator[](i)->CreateField(this);
		pFDef->Required = m_DataSetStore->FindField(pFDef->FieldName)->Required;
		pFDef->DisplayLabel = m_DataSetStore->FindField(pFDef->FieldName)->DisplayLabel;
		m_FieldNames += pFDef->FieldName + ";";
	}

	m_FieldNames.SetLength(m_FieldNames.Length() - 1);
	m_NumberOfFields = this->FieldDefs->Count;

	this->CreateDataSet();
}

bool __fastcall TRecordModel::CopyFieldsFromStoreAtRecNo()
{
	if (-1 == m_DataSetStore->RecNo)
		return false;

	for (int i = 0; i < m_NumberOfFields; i++)
	{
		TField *pDestF = this->FieldByNumber(i + 1);

		if (pDestF->CanModify)
			pDestF->Value = m_DataSetStore->FieldByName(pDestF->FieldName)->Value;
	}

	return true;
}

void __fastcall TRecordModel::CopyFieldsToStoreAtRecNo()
{
	for (int i = 0; i < m_NumberOfFields; i++)
	{
		TField *pSrcF = this->FieldByNumber(i + 1);

		if (pSrcF->CanModify)
			m_DataSetStore->FieldByName(pSrcF->FieldName)->Value = pSrcF->Value;
	}
}

bool __fastcall TRecordModel::LoadByCurrentRecNo()
{
	if (-1 == m_DataSetStore->RecNo)
		return false;

	this->Edit();
	CopyFieldsFromStoreAtRecNo();
	this->Post();

	return true;
}

bool __fastcall TRecordModel::LoadByField(const UnicodeString KeyField, const Variant &KeyValue)
{
	Variant LookupResults = m_DataSetStore->Lookup(KeyField, KeyValue, m_FieldNames);

	if (LookupResults.IsNull())
		return false;

	this->Edit();
	for (int i = 0; i < m_NumberOfFields; i++)
	{
		Variant v = LookupResults.GetElement(i);
		TField *pF = this->FieldByNumber(i + 1);

		if (v.IsNull())
			continue;

		if (pF->CanModify)
			pF->Value = v;

	}
	this->Post();

	return true;
}

void __fastcall TRecordModel::SetFieldVar(const UnicodeString FieldName, const Variant &v)
{
	TDataSetState state = this->State;

	if (dsEdit != state)
		this->Edit();

	this->FieldByName(FieldName)->AsVariant = v;

	if (dsEdit != state)
		this->Post();
}

Variant __fastcall TRecordModel::GetFieldVar(const UnicodeString FieldName)
{
	return this->FieldByName(FieldName)->Value;
}

UnicodeString __fastcall TRecordModel::GetFieldStr(const UnicodeString FieldName)
{
	return this->FieldByName(FieldName)->AsString;
}


int __fastcall TRecordModel::GetFieldInt(const UnicodeString FieldName)
{
	return this->FieldByName(FieldName)->AsInteger;
}

double __fastcall TRecordModel::GetFieldDouble(const UnicodeString FieldName)
{
	return this->FieldByName(FieldName)->AsFloat;
}

bool __fastcall TRecordModel::GetFieldBool(const UnicodeString FieldName)
{
	return this->FieldByName(FieldName)->AsBoolean;
}

bool __fastcall TRecordModel::IsValid()
{
	throw Exception("Not implemented...");
}

bool __fastcall TRecordModel::Append()
{
	try
	{
		m_DataSetStore->Append();
		CopyFieldsToStoreAtRecNo();
		m_DataSetStore->Post();
	}
	catch (...)
	{
		m_DataSetStore->Cancel();

		return false;
	}
	return true;
}

// -----------------------------------------------------------------------------
TProjektModel::TProjektModel(TDataSet *pDataSetStore) : TRecordModel(pDataSetStore)
{
}

__fastcall TProjektModel::~TProjektModel()
{
}

// -----------------------------------------------------------------------------
TKategorijaModel::TKategorijaModel(TDataSet *pDataSetStore) : TRecordModel(pDataSetStore)
{
}

__fastcall TKategorijaModel::~TKategorijaModel()
{
}

// -----------------------------------------------------------------------------
TStavkaTipModel::TStavkaTipModel(TDataSet *pDataSetStore) : TRecordModel(pDataSetStore)
{
}

__fastcall TStavkaTipModel::~TStavkaTipModel()
{
}

// -----------------------------------------------------------------------------
TStavkaModel::TStavkaModel(TDataSet *pDataSetStore) : TRecordModel(pDataSetStore)
{
}

__fastcall TStavkaModel::~TStavkaModel()
{
}

// -----------------------------------------------------------------------------
TUserModel::TUserModel(TDataSet *pDataSetStore) : TRecordModel(pDataSetStore)
{
}

__fastcall TUserModel::~TUserModel()
{
}
