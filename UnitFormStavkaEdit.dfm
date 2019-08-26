object FormStavkaEdit: TFormStavkaEdit
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Stavka'
  ClientHeight = 562
  ClientWidth = 372
  Color = clWhite
  DoubleBuffered = True
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
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 372
    Height = 87
    Align = alTop
    BevelEdges = []
    BevelOuter = bvNone
    Caption = 'Panel1'
    Padding.Left = 10
    Padding.Top = 5
    Padding.Right = 10
    Padding.Bottom = 10
    ParentColor = True
    ShowCaption = False
    TabOrder = 0
    object DBText1: TDBText
      Left = 10
      Top = 25
      Width = 352
      Height = 17
      Align = alTop
      DataField = 'ID'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ExplicitLeft = 160
      ExplicitTop = 24
      ExplicitWidth = 65
    end
    object DBText2: TDBText
      Left = 10
      Top = 42
      Width = 352
      Height = 35
      Align = alClient
      DataField = 'NAZIV_PROJEKTA'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      ExplicitLeft = 56
      ExplicitTop = 48
      ExplicitWidth = 65
      ExplicitHeight = 17
    end
    object cxLabel9: TcxLabel
      Left = 10
      Top = 5
      Align = alTop
      Caption = 'Dodavanje stavke za projekat:'
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 498
    Width = 372
    Height = 64
    Align = alBottom
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 1
    object cxButton1: TcxButton
      Left = 201
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
      Left = 282
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
  object Panel3: TPanel
    Left = 0
    Top = 87
    Width = 372
    Height = 411
    Align = alClient
    BevelOuter = bvNone
    BorderStyle = bsSingle
    Caption = 'Panel3'
    Ctl3D = False
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 2
    object cxDBDateEdit1: TcxDBDateEdit
      Left = 204
      Top = 16
      DataBinding.DataField = 'DATUM'
      DataBinding.DataSource = DataSourceStavka
      Properties.DateButtons = [btnToday]
      Properties.DateOnError = deToday
      Properties.InputKind = ikStandard
      Properties.ReadOnly = False
      Properties.ShowTime = False
      TabOrder = 0
      Width = 116
    end
    object cxLabel1: TcxLabel
      Left = 24
      Top = 17
      Caption = 'Datum'
    end
    object GridPanel1: TGridPanel
      Left = 24
      Top = 70
      Width = 350
      Height = 323
      BevelOuter = bvNone
      Caption = 'GridPanel1'
      ColumnCollection = <
        item
          Value = 36.208216381730040000
        end
        item
          Value = 63.791783618269960000
        end>
      ControlCollection = <
        item
          Column = 0
          Control = LabelUplata
          Row = 0
        end
        item
          Column = 1
          Control = EditUplata
          Row = 0
        end
        item
          Column = 0
          Control = LabelTrosak
          Row = 1
        end
        item
          Column = 1
          Control = EditTrosak
          Row = 1
        end
        item
          Column = 0
          Control = LabelBrutoNaknada
          Row = 2
        end
        item
          Column = 1
          Control = EditBrutoNaknada
          Row = 2
        end
        item
          Column = 0
          Control = LabelNetoNaknada
          Row = 3
        end
        item
          Column = 1
          Control = EditNetoNaknada
          Row = 3
        end
        item
          Column = 0
          Control = LabelFondZSIC
          Row = 4
        end
        item
          Column = 1
          Control = EditFondZSIC
          Row = 4
        end
        item
          Column = 0
          Control = LabelFondZSEF
          Row = 5
        end
        item
          Column = 1
          Control = EditFondZSEF
          Row = 5
        end
        item
          Column = 0
          Control = Label1
          Row = 7
        end
        item
          Column = 1
          Control = EditKomentar
          Row = 7
        end
        item
          Column = 0
          Control = cxLabel2
          Row = 6
        end
        item
          Column = 1
          Control = UplatiNaComboBox
          Row = 6
        end>
      ParentColor = True
      RowCollection = <
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 100.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 28.000000000000000000
        end>
      ShowCaption = False
      TabOrder = 2
      DesignSize = (
        350
        323)
      object LabelUplata: TcxLabel
        Left = 0
        Top = 0
        Align = alLeft
        Caption = 'Uplata'
      end
      object EditUplata: TcxDBCurrencyEdit
        Left = 126
        Top = 2
        Anchors = [akLeft]
        DataBinding.DataField = 'UPLATA'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        TabOrder = 1
        Width = 170
      end
      object LabelTrosak: TcxLabel
        Left = 0
        Top = 28
        Align = alLeft
        Caption = 'Tro'#353'ak'
      end
      object EditTrosak: TcxDBCurrencyEdit
        Left = 126
        Top = 30
        Anchors = [akLeft]
        DataBinding.DataField = 'TROSAK'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        TabOrder = 3
        Width = 170
      end
      object LabelBrutoNaknada: TcxLabel
        Left = 0
        Top = 56
        Align = alLeft
        Caption = 'Bruto naknada'
      end
      object EditBrutoNaknada: TcxDBCurrencyEdit
        Left = 126
        Top = 58
        Anchors = [akLeft]
        DataBinding.DataField = 'BRUTO_NAKNADA'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        TabOrder = 5
        OnExit = EditBrutoNaknadaExit
        Width = 170
      end
      object LabelNetoNaknada: TcxLabel
        Left = 0
        Top = 84
        Align = alLeft
        Caption = 'Neto naknada'
      end
      object EditNetoNaknada: TcxDBCurrencyEdit
        Left = 126
        Top = 86
        Anchors = [akLeft]
        DataBinding.DataField = 'NETO_NAKNADA'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        TabOrder = 7
        OnExit = EditNetoNaknadaExit
        Width = 170
      end
      object LabelFondZSIC: TcxLabel
        Left = 0
        Top = 112
        Align = alLeft
        Caption = 'Fond ZSIC'
        Enabled = False
      end
      object EditFondZSIC: TcxDBCurrencyEdit
        Left = 126
        Top = 114
        Anchors = [akLeft]
        DataBinding.DataField = 'ZSIC_FOND'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        Properties.ReadOnly = True
        TabOrder = 9
        Width = 170
      end
      object LabelFondZSEF: TcxLabel
        Left = 0
        Top = 140
        Align = alLeft
        Caption = 'Fond ZSEF'
        Enabled = False
      end
      object EditFondZSEF: TcxDBCurrencyEdit
        Left = 126
        Top = 142
        Anchors = [akLeft]
        DataBinding.DataField = 'ZSEF_FOND'
        DataBinding.DataSource = DataSourceStavka
        Properties.DisplayFormat = '#,##0.00'
        Properties.Nullable = False
        Properties.ReadOnly = True
        TabOrder = 11
        Width = 170
      end
      object Label1: TLabel
        Left = 0
        Top = 196
        Width = 55
        Height = 100
        Align = alLeft
        Caption = 'Komentar'
        Layout = tlCenter
        ExplicitHeight = 16
      end
      object EditKomentar: TcxDBMemo
        Left = 126
        Top = 201
        Anchors = [akLeft]
        DataBinding.DataField = 'KOMENTAR'
        DataBinding.DataSource = DataSourceStavka
        Properties.MaxLength = 254
        TabOrder = 12
        Height = 89
        Width = 203
      end
      object cxLabel2: TcxLabel
        Left = 0
        Top = 168
        Align = alLeft
        Caption = 'Kome:'
      end
      object UplatiNaComboBox: TcxDBLookupComboBox
        Left = 126
        Top = 170
        Anchors = [akLeft]
        DataBinding.DataField = 'KOMENTAR'
        DataBinding.DataSource = DataSourceStavka
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
        TabOrder = 14
        Width = 203
      end
    end
    object ComboBoxStavkaTip: TcxDBLookupComboBox
      Left = 24
      Top = 43
      DataBinding.DataField = 'STAVKATIP'
      DataBinding.DataSource = DataSourceStavka
      Properties.DropDownListStyle = lsFixedList
      Properties.KeyFieldNames = 'STAVKA_TIP'
      Properties.ListColumns = <
        item
          FieldName = 'STAVKA_TIP'
        end
        item
          FieldName = 'KOEFICIJENT'
        end>
      Properties.ListOptions.AnsiSort = True
      Properties.ListOptions.ShowHeader = False
      Properties.ListOptions.SyncMode = True
      Properties.ListSource = DataSourceStavkaTip
      Properties.OnChange = ComboBoxStavkaTipPropertiesChange
      TabOrder = 3
      Width = 296
    end
  end
  object DataSourceStavka: TDataSource
    DataSet = DataModule1.ADOTableStavkeProjekta
    Left = 120
    Top = 464
  end
  object DataSourceStavkaTip: TDataSource
    DataSet = DataModule1.ADOTableStavkaTip
    Left = 32
    Top = 464
  end
  object DataSource1: TDataSource
    DataSet = DataModule1.ADOTableProjekti
    Left = 32
    Top = 416
  end
  object DataSourceLjudi: TDataSource
    DataSet = DataModule1.ADOQueryLjudi
    Left = 288
    Top = 472
  end
end
