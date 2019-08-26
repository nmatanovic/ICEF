object DataModule1: TDataModule1
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 476
  Width = 836
  object ADOConnection1: TADOConnection
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 64
    Top = 24
  end
  object ADOTableProjekti: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Projekti'
    Left = 64
    Top = 80
    object ADOTableProjektiID: TIntegerField
      FieldName = 'ID'
    end
    object ADOTableProjektiNAZIV_PROJEKTA: TWideStringField
      FieldName = 'NAZIV_PROJEKTA'
      Size = 100
    end
    object ADOTableProjektiZSIC_PROCENT: TIntegerField
      FieldName = 'ZSIC_PROCENT'
    end
    object ADOTableProjektiZSEF_PROCENT: TIntegerField
      FieldName = 'ZSEF_PROCENT'
    end
    object ADOTableProjektiOTVOREN_DATUM: TDateTimeField
      FieldName = 'OTVOREN_DATUM'
    end
    object ADOTableProjektiZATVOREN_DATUM: TDateTimeField
      FieldName = 'ZATVOREN_DATUM'
    end
    object ADOTableProjektiZSIC_ZSEF: TIntegerField
      FieldName = 'ZSIC_ZSEF'
    end
    object ADOTableProjektiKATEGORIJA_NAZIV: TWideStringField
      FieldName = 'KATEGORIJA_NAZIV'
      Size = 100
    end
    object ADOTableProjektiZATVOREN: TBooleanField
      FieldName = 'ZATVOREN'
    end
    object ADOTableProjektiVODJA: TWideStringField
      FieldName = 'VODJA'
      Size = 40
    end
  end
  object ADOTableStavkeProjekta: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'PROJEKT_ID'
    MasterFields = 'ID'
    MasterSource = DataSourceProjektiMaster
    TableName = 'Stavke'
    Left = 64
    Top = 144
    object ADOTableStavkeProjektaID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object ADOTableStavkeProjektaPROJEKT_ID: TIntegerField
      FieldName = 'PROJEKT_ID'
    end
    object ADOTableStavkeProjektaZSIC_FOND: TFloatField
      FieldName = 'ZSIC_FOND'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaZSEF_FOND: TFloatField
      FieldName = 'ZSEF_FOND'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaZSIC_PROCENT: TIntegerField
      FieldName = 'ZSIC_PROCENT'
    end
    object ADOTableStavkeProjektaZSEF_PROCENT: TIntegerField
      FieldName = 'ZSEF_PROCENT'
    end
    object ADOTableStavkeProjektaUPLATA: TFloatField
      FieldName = 'UPLATA'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaTROSAK: TFloatField
      FieldName = 'TROSAK'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaBRUTO_NAKNADA: TFloatField
      FieldName = 'BRUTO_NAKNADA'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaNETO_NAKNADA: TFloatField
      FieldName = 'NETO_NAKNADA'
      DisplayFormat = '#,##0.00'
      currency = True
    end
    object ADOTableStavkeProjektaDATUM: TDateTimeField
      FieldName = 'DATUM'
    end
    object ADOTableStavkeProjektaSTAVKATIP: TWideStringField
      FieldName = 'STAVKATIP'
      Size = 10
    end
    object ADOTableStavkeProjektaSTAVKATIPKOEF: TFloatField
      FieldName = 'STAVKATIPKOEF'
    end
    object ADOTableStavkeProjektaSTIGLO_SA_PRJEKTA_ID: TIntegerField
      FieldName = 'STIGLO_SA_PRJEKTA_ID'
    end
    object ADOTableStavkeProjektaTRANSID: TIntegerField
      FieldName = 'TRANSID'
    end
    object ADOTableStavkeProjektaKOMENTAR: TWideStringField
      FieldName = 'KOMENTAR'
      Size = 255
    end
  end
  object ADOTableStavkaTip: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'StavkaTip'
    Left = 64
    Top = 288
    object ADOTableStavkaTipSTAVKA_TIP: TWideStringField
      FieldName = 'STAVKA_TIP'
      Size = 10
    end
    object ADOTableStavkaTipKOEFICIJENT: TFloatField
      FieldName = 'KOEFICIJENT'
    end
    object ADOTableStavkaTipJE_TROSAK: TBooleanField
      FieldName = 'JE_TROSAK'
    end
    object ADOTableStavkaTipJE_UPLATA: TBooleanField
      FieldName = 'JE_UPLATA'
    end
    object ADOTableStavkaTipJE_KOEF: TBooleanField
      FieldName = 'JE_KOEF'
    end
  end
  object DataSourceProjektiMaster: TDataSource
    DataSet = ADOTableProjekti
    Left = 280
    Top = 72
  end
  object ADOTableSISTEM: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'sistem'
    Left = 64
    Top = 376
  end
  object ADOTableKategorije: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'KategorijePro'
    Left = 64
    Top = 224
    object ADOTableKategorijeNAZIV: TWideStringField
      FieldName = 'NAZIV'
      Size = 100
    end
    object ADOTableKategorijeZSIC: TIntegerField
      FieldName = 'ZSIC'
    end
    object ADOTableKategorijeZSEF: TIntegerField
      FieldName = 'ZSEF'
    end
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 296
    Top = 208
  end
  object ADOTableLjudi: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    AfterPost = ADOTableLjudiAfterPost
    TableName = 'TableLjudi'
    Left = 184
    Top = 376
    object ADOTableLjudiID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object ADOTableLjudiMATBROJ: TWideStringField
      DisplayLabel = 'Mati'#269'ni broj'
      FieldName = 'MATBROJ'
      Size = 13
    end
    object ADOTableLjudiPREZIME: TWideStringField
      DisplayLabel = 'Prezime'
      FieldName = 'PREZIME'
      Required = True
      Size = 15
    end
    object ADOTableLjudiIME: TWideStringField
      DisplayLabel = 'Ime'
      FieldName = 'IME'
      Required = True
      Size = 15
    end
    object ADOTableLjudiADRESA: TWideStringField
      DisplayLabel = 'Adresa'
      FieldName = 'ADRESA'
      Size = 100
    end
    object ADOTableLjudiTELEFON: TWideStringField
      DisplayLabel = 'Telefon'
      FieldName = 'TELEFON'
      Size = 100
    end
    object ADOTableLjudiEMAIL: TWideStringField
      DisplayLabel = 'e-mail'
      FieldName = 'EMAIL'
      Size = 30
    end
    object ADOTableLjudiTEKUCI_RACUN: TWideStringField
      DisplayLabel = 'Broj teku'#263'eg ra'#269'una'
      FieldName = 'TEKUCI _RACUN'
      Size = 50
    end
    object ADOTableLjudiNA_PROJEKTU: TBooleanField
      DisplayLabel = 'Je na projektu'
      FieldName = 'NA_PROJEKTU'
      Visible = False
    end
    object ADOTableLjudiNA_STAVKAMA: TBooleanField
      DisplayLabel = 'Je u stavkama'
      FieldName = 'NA_STAVKAMA'
      Visible = False
    end
  end
  object ADOQueryLjudi: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT PREZIME + " " +  IME,NA_PROJEKTU  FROM TableLjudi')
    Left = 296
    Top = 376
  end
end
