object FormProjektEdit: TFormProjektEdit
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Projekat'
  ClientHeight = 419
  ClientWidth = 412
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object Panel2: TPanel
    Left = 0
    Top = 355
    Width = 412
    Height = 64
    Align = alBottom
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 0
    object cxButton1: TcxButton
      Left = 245
      Top = 24
      Width = 75
      Height = 25
      Align = alCustom
      Anchors = [akTop, akRight]
      Caption = 'Zapamti'
      TabOrder = 0
      OnClick = cxButton1Click
    end
    object cxButton2: TcxButton
      Left = 331
      Top = 24
      Width = 75
      Height = 25
      Align = alCustom
      Anchors = [akTop, akRight]
      Caption = 'Otka'#382'i'
      TabOrder = 1
      OnClick = cxButton2Click
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 412
    Height = 65
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Panel1'
    Padding.Left = 10
    Padding.Top = 10
    Padding.Right = 10
    Padding.Bottom = 10
    ParentColor = True
    ShowCaption = False
    TabOrder = 1
    object Label1: TLabel
      Left = 10
      Top = 10
      Width = 392
      Height = 16
      Align = alTop
      Caption = 'Kreiranje novog projekta:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ExplicitWidth = 167
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 65
    Width = 412
    Height = 290
    Align = alClient
    BevelOuter = bvNone
    BorderStyle = bsSingle
    Caption = 'Panel3'
    Ctl3D = False
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 2
    object GridPanel1: TGridPanel
      Left = 7
      Top = 64
      Width = 393
      Height = 194
      BevelOuter = bvNone
      Caption = 'GridPanel1'
      ColumnCollection = <
        item
          Value = 50.000000000000000000
        end
        item
          Value = 50.000000000000000000
        end>
      ControlCollection = <
        item
          Column = 0
          Control = cxLabel
          Row = 0
        end
        item
          Column = 1
          Control = cxDBSpinEdit1
          Row = 0
        end
        item
          Column = 0
          Control = cxLabel2
          Row = 1
        end
        item
          Column = 1
          Control = cxDBTextEdit1
          Row = 1
        end
        item
          Column = 0
          Control = cxLabel3
          Row = 2
        end
        item
          Column = 1
          Control = cxDBSpinEdit2
          Row = 2
        end
        item
          Column = 0
          Control = cxLabel4
          Row = 3
        end
        item
          Column = 1
          Control = cxDBSpinEdit3
          Row = 3
        end
        item
          Column = 0
          Control = cxLabel5
          Row = 4
        end
        item
          Column = 1
          Control = cxDBDateEdit1
          Row = 4
        end
        item
          Column = 0
          Control = cxLabel6
          Row = 5
        end
        item
          Column = 1
          Control = RukovodilacCombo
          Row = 5
        end>
      ParentColor = True
      RowCollection = <
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 26.000000000000000000
        end>
      ShowCaption = False
      TabOrder = 0
      DesignSize = (
        393
        194)
      object cxLabel: TcxLabel
        Left = 0
        Top = 0
        Align = alLeft
        Caption = 'Broj'
      end
      object cxDBSpinEdit1: TcxDBSpinEdit
        Left = 198
        Top = 1
        Anchors = []
        DataBinding.DataField = 'ID'
        DataBinding.DataSource = DataSourceProjekt
        Properties.AssignedValues.MinValue = True
        Properties.MaxValue = 10000.000000000000000000
        TabOrder = 1
        Width = 193
      end
      object cxLabel2: TcxLabel
        Left = 0
        Top = 26
        Align = alLeft
        Caption = 'Naziv'
      end
      object cxDBTextEdit1: TcxDBTextEdit
        Left = 198
        Top = 27
        Anchors = []
        DataBinding.DataField = 'NAZIV_PROJEKTA'
        DataBinding.DataSource = DataSourceProjekt
        TabOrder = 3
        Width = 193
      end
      object cxLabel3: TcxLabel
        Left = 0
        Top = 52
        Align = alLeft
        Caption = 'ZSEF Procent'
      end
      object cxDBSpinEdit2: TcxDBSpinEdit
        Left = 198
        Top = 53
        Anchors = []
        DataBinding.DataField = 'ZSEF_PROCENT'
        DataBinding.DataSource = DataSourceProjekt
        Properties.MaxValue = 100.000000000000000000
        Properties.ReadOnly = True
        TabOrder = 5
        Width = 193
      end
      object cxLabel4: TcxLabel
        Left = 0
        Top = 78
        Align = alLeft
        Caption = 'ZSIC Procent'
      end
      object cxDBSpinEdit3: TcxDBSpinEdit
        Left = 198
        Top = 79
        Anchors = []
        DataBinding.DataField = 'ZSIC_PROCENT'
        DataBinding.DataSource = DataSourceProjekt
        Properties.MaxValue = 100.000000000000000000
        Properties.ReadOnly = True
        TabOrder = 7
        Width = 193
      end
      object cxLabel5: TcxLabel
        Left = 0
        Top = 104
        Align = alLeft
        Caption = 'Datum otvoren'
      end
      object cxDBDateEdit1: TcxDBDateEdit
        Left = 198
        Top = 105
        Anchors = []
        DataBinding.DataField = 'OTVOREN_DATUM'
        DataBinding.DataSource = DataSourceProjekt
        Properties.DateButtons = [btnToday]
        Properties.DateOnError = deToday
        Properties.ReadOnly = False
        TabOrder = 9
        Width = 193
      end
      object cxLabel6: TcxLabel
        Left = 0
        Top = 130
        Align = alLeft
        Caption = 'Rukovodilac'
      end
      object RukovodilacCombo: TcxDBLookupComboBox
        Left = 196
        Top = 131
        Anchors = [akLeft]
        DataBinding.DataField = 'VODJA'
        DataBinding.DataSource = DataSourceProjekt
        Properties.DropDownListStyle = lsFixedList
        Properties.KeyFieldNames = 'Expr1000'
        Properties.ListColumns = <
          item
            FieldName = 'Expr1000'
          end>
        Properties.ListOptions.AnsiSort = True
        Properties.ListOptions.ShowHeader = False
        Properties.ListOptions.SyncMode = True
        Properties.ListSource = DataSourceLjudi
        Properties.OnChange = cxDBLookupComboBox1PropertiesChange
        TabOrder = 11
        Width = 195
      end
    end
    object cxDBLookupComboBox1: TcxDBLookupComboBox
      Left = 8
      Top = 26
      DataBinding.DataField = 'KATEGORIJA_NAZIV'
      DataBinding.DataSource = DataSourceProjekt
      Properties.DropDownListStyle = lsFixedList
      Properties.KeyFieldNames = 'NAZIV'
      Properties.ListColumns = <
        item
          FieldName = 'NAZIV'
        end>
      Properties.ListSource = DataSourceKategorije
      Properties.OnChange = cxDBLookupComboBox1PropertiesChange
      TabOrder = 1
      Width = 390
    end
    object cxLabel1: TcxLabel
      Left = 8
      Top = 7
      Caption = 'Preuzmi koeficijente iz kategorije:'
    end
  end
  object DataSourceProjekt: TDataSource
    DataSet = DataModule1.ADOTableProjekti
    Left = 40
    Top = 328
  end
  object DataSourceKategorije: TDataSource
    DataSet = DataModule1.ADOTableKategorije
    Left = 120
    Top = 328
  end
  object DataSourceLjudi: TDataSource
    DataSet = DataModule1.ADOQueryLjudi
    Left = 32
    Top = 384
  end
end
