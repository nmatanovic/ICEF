// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxStyles.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinsdxStatusBarPainter.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinsForm.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "dxStatusBar.hpp"
#include <DB.hpp>
#include "cxSplitter.hpp"
#include <ExtCtrls.hpp>
#include "dxNavBar.hpp"
#include "dxNavBarBase.hpp"
#include "dxNavBarCollns.hpp"
#include "dxSkinsdxNavBar2Painter.hpp"
#include <ActnList.hpp>
#include <ImgList.hpp>
#include "cxContainer.hpp"
#include "cxDBLabel.hpp"
#include "cxLabel.hpp"
#include <DBCtrls.hpp>
#include "cxDrawTextUtils.hpp"
#include "dxBkgnd.hpp"
#include "dxPrnDev.hpp"
#include "dxPrnPg.hpp"
#include "dxPSCompsProvider.hpp"
#include "dxPSCore.hpp"
#include "dxPScxEditorProducers.hpp"
#include "dxPScxExtEditorProducers.hpp"
#include "dxPScxPageControlProducer.hpp"
#include "dxPSEdgePatterns.hpp"
#include "dxPSEngn.hpp"
#include "dxPSFillPatterns.hpp"
#include "dxPSGlbl.hpp"
#include "dxPSPDFExport.hpp"
#include "dxPSPDFExportCore.hpp"
#include "dxPSPrVwAdv.hpp"
#include "dxPSPrVwRibbon.hpp"
#include "dxPSPrVwStd.hpp"
#include "dxPSUtl.hpp"
#include "dxSkinsdxBarPainter.hpp"
#include "dxWrap.hpp"
#include "dxPScxCommon.hpp"
#include "dxPScxGrid6Lnk.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxNavBarStyles.hpp"
#include <ADODB.hpp>

// ---------------------------------------------------------------------------
class TUserModel;

// ---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published: // IDE-managed Components

	TDataSource *DataSourceProjekti;
	TDataSource *DataSourceStavke;
	TPanel *PanelF;
	TPanel *PanelG;
	TSplitter *Splitter1;
	TPanel *PanelP;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TPanel *PanelS;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridLevel *cxGrid2Level1;
	TActionList *ActionList1;
	TAction *Action_NovProjekt;
	TAction *Action_ZatvoriOtvori;
	TAction *Action_ObrisiProjekt;
	TAction *Action_NovaStavka;
	TAction *Action_ObrisiStavku;
	TPanel *Panel1;
	TdxNavBar *dxNavBar1;
	TdxNavBarGroup *dxNavBar1Group1;
	TdxNavBarGroup *dxNavBar1Group2;
	TdxNavBarGroup *dxNavBar1Group3;
	TdxNavBarItem *dxNavBar1Item1;
	TdxNavBarItem *dxNavBar1Item2;
	TdxNavBarItem *dxNavBar1Item3;
	TdxNavBarItem *dxNavBar1Item4;
	TdxNavBarItem *dxNavBar1Item6;
	TcxLookAndFeelController *cxLookAndFeelController1;
	TcxImageList *cxImageList1;
	TPanel *PanelSC;
	TDBText *DBText1;
	TAction *Action_Kategorije;
	TdxNavBarItem *dxNavBar1Item7;
	TcxGridDBColumn *cxGrid1DBTableView1ID;
	TcxGridDBColumn *cxGrid1DBTableView1NAZIV_PROJEKTA;
	TcxGridDBColumn *cxGrid1DBTableView1ZSIC_PROCENT;
	TcxGridDBColumn *cxGrid1DBTableView1ZSEF_PROCENT;
	TcxGridDBColumn *cxGrid1DBTableView1OTVOREN_DATUM;
	TcxGridDBColumn *cxGrid1DBTableView1ZATVOREN_DATUM;
	TcxGridDBColumn *cxGrid2DBTableView1ZSIC_FOND;
	TcxGridDBColumn *cxGrid2DBTableView1ZSEF_FOND;
	TcxGridDBColumn *cxGrid2DBTableView1UPLATA;
	TcxGridDBColumn *cxGrid2DBTableView1TROSAK;
	TcxGridDBColumn *cxGrid2DBTableView1BRUTO_NAKNADA;
	TcxGridDBColumn *cxGrid2DBTableView1NETO_NAKNADA;
	TcxGridDBColumn *cxGrid2DBTableView1DATUM;
	TcxGridDBColumn *cxGrid2DBTableView1STAVKATIP;
	TcxGridDBColumn *cxGrid2DBTableView1KOMENTAR;
	TLabel *Label1;
	TLabel *Label2;
	TAction *Action_Print;
	TdxNavBarItem *dxNavBar1Item5;
	TAction *Action_Koeficijenti;
	TdxNavBarGroup *dxNavBar1Group4;
	TdxNavBarItem *dxNavBar1Item8;
	TAction *Action_BackupRucno;
	TdxNavBarGroup *dxNavBar1Group5;
	TdxNavBarItem *dxNavBar1Item9;
	TAction *Action_Ljudi;
	TdxNavBarGroup *dxNavBar1Group6;
	TdxNavBarItem *dxNavBar1Item10;
	TcxGridDBColumn *cxGrid1DBTableView1ZATVOREN;
	TdxNavBarStyleItem *dxNavBar1StyleItem1;
	TAction *Action_BackupRestore;
	TdxNavBarItem *dxNavBar1Item11;
	TADOTable *ADOTableUsers;
	TADOConnection *ADOConnectionUsers;
	TDBText *DBText2;
	TLabel *Label3;
	TLabel *Label4;

	void __fastcall Action_NovProjektExecute(TObject *Sender);
	void __fastcall Action_ZatvoriOtvoriExecute(TObject *Sender);
	void __fastcall Action_ObrisiProjektExecute(TObject *Sender);
	void __fastcall Action_NovaStavkaExecute(TObject *Sender);
	void __fastcall Action_ObrisiStavkuExecute(TObject *Sender);
	void __fastcall Action_KategorijeExecute(TObject *Sender);
	void __fastcall cxGrid2DBTableView1DataControllerSummaryAfterSummary(TcxDataSummary *ASender);
	void __fastcall Action_PrintExecute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Action_KoeficijentiExecute(TObject *Sender);
	void __fastcall Action_BackupRucnoExecute(TObject *Sender);
	void __fastcall Action_LjudiExecute(TObject *Sender);
	void __fastcall Action_BackupRestoreExecute(TObject *Sender);
	void __fastcall DataSourceProjektiStateChange(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);

private: // User declarations

	TUserModel *m_UserModel;

	bool __fastcall LogujSe();

	double m_Total;

public: // User declarations

	bool __fastcall JelAdminLogovan();
	__fastcall TForm1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
