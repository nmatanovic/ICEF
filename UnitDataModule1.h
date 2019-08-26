// ---------------------------------------------------------------------------

#ifndef UnitDataModule1H
#define UnitDataModule1H
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBClient.hpp>
// ---------------------------------------------------------------------------
class TRecordModel;

// ---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published: // IDE-managed Components

	TADOConnection *ADOConnection1;
	TADOTable *ADOTableProjekti;
	TADOTable *ADOTableStavkeProjekta;
	TADOTable *ADOTableStavkaTip;
	TDataSource *DataSourceProjektiMaster;
	TADOTable *ADOTableSISTEM;
	TADOTable *ADOTableKategorije;
	TAutoIncField *ADOTableStavkeProjektaID;
	TIntegerField *ADOTableStavkeProjektaPROJEKT_ID;
	TFloatField *ADOTableStavkeProjektaZSIC_FOND;
	TFloatField *ADOTableStavkeProjektaZSEF_FOND;
	TIntegerField *ADOTableStavkeProjektaZSIC_PROCENT;
	TIntegerField *ADOTableStavkeProjektaZSEF_PROCENT;
	TFloatField *ADOTableStavkeProjektaUPLATA;
	TFloatField *ADOTableStavkeProjektaTROSAK;
	TFloatField *ADOTableStavkeProjektaBRUTO_NAKNADA;
	TFloatField *ADOTableStavkeProjektaNETO_NAKNADA;
	TDateTimeField *ADOTableStavkeProjektaDATUM;
	TWideStringField *ADOTableStavkeProjektaSTAVKATIP;
	TFloatField *ADOTableStavkeProjektaSTAVKATIPKOEF;
	TIntegerField *ADOTableStavkeProjektaSTIGLO_SA_PRJEKTA_ID;
	TIntegerField *ADOTableStavkeProjektaTRANSID;
	TWideStringField *ADOTableStavkeProjektaKOMENTAR;
	TADOQuery *ADOQuery1;
	TIntegerField *ADOTableProjektiID;
	TWideStringField *ADOTableProjektiNAZIV_PROJEKTA;
	TIntegerField *ADOTableProjektiZSIC_PROCENT;
	TIntegerField *ADOTableProjektiZSEF_PROCENT;
	TDateTimeField *ADOTableProjektiOTVOREN_DATUM;
	TDateTimeField *ADOTableProjektiZATVOREN_DATUM;
	TIntegerField *ADOTableProjektiZSIC_ZSEF;
	TWideStringField *ADOTableProjektiKATEGORIJA_NAZIV;
	TWideStringField *ADOTableKategorijeNAZIV;
	TIntegerField *ADOTableKategorijeZSIC;
	TIntegerField *ADOTableKategorijeZSEF;
	TWideStringField *ADOTableStavkaTipSTAVKA_TIP;
	TFloatField *ADOTableStavkaTipKOEFICIJENT;
	TBooleanField *ADOTableStavkaTipJE_TROSAK;
	TBooleanField *ADOTableStavkaTipJE_UPLATA;
	TBooleanField *ADOTableStavkaTipJE_KOEF;
	TADOTable *ADOTableLjudi;
	TAutoIncField *ADOTableLjudiID;
	TWideStringField *ADOTableLjudiMATBROJ;
	TWideStringField *ADOTableLjudiPREZIME;
	TWideStringField *ADOTableLjudiIME;
	TWideStringField *ADOTableLjudiADRESA;
	TWideStringField *ADOTableLjudiTELEFON;
	TWideStringField *ADOTableLjudiEMAIL;
	TWideStringField *ADOTableLjudiTEKUCI_RACUN;
	TADOQuery *ADOQueryLjudi;
	TBooleanField *ADOTableLjudiNA_PROJEKTU;
	TBooleanField *ADOTableLjudiNA_STAVKAMA;
	TBooleanField *ADOTableProjektiZATVOREN;
	TWideStringField *ADOTableProjektiVODJA;

	void __fastcall DataModuleCreate(TObject *Sender);
	void __fastcall ADOTableLjudiAfterPost(TDataSet *DataSet);

private: // User declarations

	TRecordModel *m_ZSEF_PRO;
	TRecordModel *m_ZSIC_PRO;
	UnicodeString m_StrAktivnaBazaIme;

public: // User declarations

	__fastcall UnicodeString GetAktivnaBazaIme()
	{
		return m_StrAktivnaBazaIme;
	}
	__fastcall UnicodeString GetOrigBazaIme();
	__fastcall void SetAktivnoNeAktivno(bool bS);
	__fastcall void AktivirajBazu(const UnicodeString &_strImeBaze);
	__fastcall void AktivirajBackUpBazu(const UnicodeString &_strImeBaze);
	__fastcall void RestorujBackUpBazu(const UnicodeString &_strImeBaze);
	__fastcall int GetTransID();
	__fastcall bool DodajStavku(TRecordModel *pRMProjekt, TRecordModel *pRMStavka);
	__fastcall bool ObrisiProjektCurrentRecNo();
	__fastcall bool ObrisiStavkuCurrentRecNo();
	__fastcall bool ProjektJeZatvorenCurrentRecNo();
	__fastcall bool ImaStavki();
	__fastcall bool ZatvoriOtvoriProjektCurrentRecNo();
	__fastcall bool NapraviBackupBaze(bool bAuto);
	__fastcall TDataModule1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
// ---------------------------------------------------------------------------
#endif
