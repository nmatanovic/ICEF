// ---------------------------------------------------------------------------

#ifndef UnitModelsH
#define UnitModelsH

#include <DBClient.hpp>

class TRecordModel : public TClientDataSet
{
private:
	TDataSet *m_DataSetStore;
	UnicodeString m_FieldNames;

	int m_NumberOfFields;

public:
	TRecordModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TRecordModel();
	//
	virtual __fastcall bool CopyFieldsFromStoreAtRecNo();
	virtual __fastcall void CopyFieldsToStoreAtRecNo();
	virtual __fastcall bool LoadByCurrentRecNo();
	virtual __fastcall bool LoadByField(const UnicodeString KeyField, const Variant &KeyValue);
	virtual __fastcall bool InitStructure();
	virtual __fastcall bool IsValid();
	virtual __fastcall void SetFieldVar(const UnicodeString FieldName, const Variant &v);
	virtual __fastcall Variant GetFieldVar(const UnicodeString FieldName);
	virtual __fastcall UnicodeString GetFieldStr(const UnicodeString FieldName);
	virtual __fastcall int GetFieldInt(const UnicodeString FieldName);
	virtual __fastcall double GetFieldDouble(const UnicodeString FieldName);
	virtual __fastcall bool GetFieldBool(const UnicodeString FieldName);
	virtual __fastcall bool Append();
};

// ---------------------------------------------------------------------------
class TStavkaTipModel : public TRecordModel
{

public:
	TStavkaTipModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TStavkaTipModel();

	bool __fastcall JeKoeficijent()
	{
		return this->FieldByName("JE_KOEF")->AsBoolean;
	}

};

// ---------------------------------------------------------------------------
class TStavkaModel : public TRecordModel
{

public:
	TStavkaModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TStavkaModel();

};
// ---------------------------------------------------------------------------

class TProjektModel : public TRecordModel
{

public:
	TProjektModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TProjektModel();

};
// ---------------------------------------------------------------------------

class TKategorijaModel : public TRecordModel
{

public:
	TKategorijaModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TKategorijaModel();

};


class TUserModel : public TRecordModel
{

public:
	TUserModel(TDataSet *pDataSetStore);
	virtual __fastcall ~TUserModel();
	//
	bool __fastcall JeAdmin()
	{
		return this->FieldByName("ADMIN")->AsBoolean;
	}

};


#endif
