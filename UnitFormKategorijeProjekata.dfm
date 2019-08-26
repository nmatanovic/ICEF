object FormKategorijeProjekata: TFormKategorijeProjekata
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMaximize]
  Caption = 'Kategorije projekata'
  ClientHeight = 551
  ClientWidth = 866
  Color = clWhite
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 866
    Height = 41
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Panelddd'
    ParentColor = True
    ShowCaption = False
    TabOrder = 0
    DesignSize = (
      866
      41)
    object cxDBNavigator1: TcxDBNavigator
      Left = 554
      Top = 0
      Width = 207
      Height = 41
      Buttons.OnButtonClick = cxDBNavigator1ButtonsButtonClick
      Buttons.ConfirmDelete = False
      Buttons.Images = Form1.cxImageList1
      Buttons.First.Visible = False
      Buttons.PriorPage.Visible = False
      Buttons.Prior.Visible = False
      Buttons.Next.Visible = False
      Buttons.NextPage.Visible = False
      Buttons.Last.Visible = False
      Buttons.Insert.Visible = False
      Buttons.Append.Hint = 'Dodaj novog'
      Buttons.Append.ImageIndex = 0
      Buttons.Append.Visible = True
      Buttons.Delete.Hint = 'Obri'#353'i trenutno selektovanog'
      Buttons.Delete.ImageIndex = 2
      Buttons.Edit.Hint = 'Izmeni podatke trenutno selektovanog'
      Buttons.Edit.ImageIndex = 1
      Buttons.Edit.Visible = True
      Buttons.Post.Visible = False
      Buttons.Cancel.Visible = False
      Buttons.Refresh.Visible = False
      Buttons.SaveBookmark.Visible = False
      Buttons.GotoBookmark.Visible = False
      Buttons.Filter.Visible = False
      DataSource = DataSource1
      InfoPanel.Font.Charset = DEFAULT_CHARSET
      InfoPanel.Font.Color = clDefault
      InfoPanel.Font.Height = -11
      InfoPanel.Font.Name = 'Tahoma'
      InfoPanel.Font.Style = []
      Anchors = [akTop, akRight]
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
    end
    object cxButton1: TcxButton
      Left = 777
      Top = 10
      Width = 75
      Height = 25
      Anchors = [akTop, akRight]
      Caption = 'Zatvori'
      TabOrder = 1
      OnClick = cxButton1Click
    end
    object cxLabel1: TcxLabel
      Left = 16
      Top = 10
      Caption = 'cxLabel1'
      ParentFont = False
      Style.Font.Charset = DEFAULT_CHARSET
      Style.Font.Color = clWindowText
      Style.Font.Height = -15
      Style.Font.Name = 'Tahoma'
      Style.Font.Style = [fsBold]
      Style.IsFontAssigned = True
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 41
    Width = 866
    Height = 504
    Align = alClient
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 1
    object Splitter1: TSplitter
      Left = 353
      Top = 0
      Height = 504
      ResizeStyle = rsLine
      ExplicitLeft = 248
      ExplicitTop = 24
      ExplicitHeight = 539
    end
    object cxGrid1: TcxGrid
      Left = 356
      Top = 0
      Width = 510
      Height = 504
      Align = alClient
      TabOrder = 0
      object cxGrid1DBTableView1: TcxGridDBTableView
        NavigatorButtons.ConfirmDelete = False
        DataController.DataSource = DataSource1
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsCustomize.ColumnFiltering = False
        OptionsCustomize.ColumnGrouping = False
        OptionsCustomize.ColumnHidingOnGrouping = False
        OptionsCustomize.ColumnMoving = False
        OptionsData.Deleting = False
        OptionsData.DeletingConfirmation = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsSelection.CellSelect = False
        OptionsSelection.HideFocusRectOnExit = False
        OptionsSelection.UnselectFocusedRecordOnExit = False
        OptionsView.NoDataToDisplayInfoText = '<Nema zapisa>'
        OptionsView.GroupByBox = False
        OptionsView.Indicator = True
        object cxGrid1DBTableView1NAZIV: TcxGridDBColumn
          DataBinding.FieldName = 'NAZIV'
          Width = 319
        end
        object cxGrid1DBTableView1ZSIC: TcxGridDBColumn
          DataBinding.FieldName = 'ZSIC'
        end
        object cxGrid1DBTableView1ZSEF: TcxGridDBColumn
          DataBinding.FieldName = 'ZSEF'
        end
      end
      object cxGrid1Level1: TcxGridLevel
        GridView = cxGrid1DBTableView1
      end
    end
    object Panel4: TPanel
      Left = 0
      Top = 0
      Width = 353
      Height = 504
      Align = alLeft
      Caption = 'Panel4'
      TabOrder = 1
      object cxDBVerticalGrid1: TcxDBVerticalGrid
        Left = 1
        Top = 1
        Width = 351
        Height = 464
        Align = alClient
        LookAndFeel.SkinName = 'Office2007Blue'
        OptionsView.ScrollBars = ssVertical
        OptionsView.RowHeaderWidth = 151
        OptionsBehavior.AlwaysShowEditor = True
        TabOrder = 0
        DataController.DataSource = DataSource1
        Version = 1
        object cxDBVerticalGrid1NAZIV: TcxDBEditorRow
          Properties.DataBinding.FieldName = 'NAZIV'
          ID = 0
          ParentID = -1
          Index = 0
          Version = 1
        end
        object cxDBVerticalGrid1ZSIC: TcxDBEditorRow
          Properties.Caption = 'ZSIC %'
          Properties.EditPropertiesClassName = 'TcxSpinEditProperties'
          Properties.EditProperties.AssignedValues.MinValue = True
          Properties.EditProperties.MaxValue = 100.000000000000000000
          Properties.DataBinding.FieldName = 'ZSIC'
          ID = 1
          ParentID = -1
          Index = 1
          Version = 1
        end
        object cxDBVerticalGrid1ZSEF: TcxDBEditorRow
          Properties.Caption = 'ZSEF %'
          Properties.EditPropertiesClassName = 'TcxSpinEditProperties'
          Properties.EditProperties.AssignedValues.MinValue = True
          Properties.EditProperties.MaxValue = 100.000000000000000000
          Properties.DataBinding.FieldName = 'ZSEF'
          ID = 2
          ParentID = -1
          Index = 2
          Version = 1
        end
      end
      object cxDBNavigator2: TcxDBNavigator
        Left = 1
        Top = 465
        Width = 350
        Height = 38
        Buttons.Images = Form1.cxImageList1
        Buttons.First.Visible = False
        Buttons.PriorPage.Visible = False
        Buttons.Prior.Visible = False
        Buttons.Next.Visible = False
        Buttons.NextPage.Visible = False
        Buttons.Last.Visible = False
        Buttons.Insert.Visible = False
        Buttons.Append.Visible = False
        Buttons.Delete.Visible = False
        Buttons.Edit.Visible = False
        Buttons.Post.Hint = 'Zapamti'
        Buttons.Post.ImageIndex = 4
        Buttons.Post.Visible = True
        Buttons.Cancel.Hint = 'Otka'#382'i izmenu'
        Buttons.Cancel.ImageIndex = 5
        Buttons.Refresh.Visible = False
        Buttons.SaveBookmark.Visible = False
        Buttons.GotoBookmark.Visible = False
        Buttons.Filter.Visible = False
        DataSource = DataSource1
        InfoPanel.Font.Charset = DEFAULT_CHARSET
        InfoPanel.Font.Color = clDefault
        InfoPanel.Font.Height = -11
        InfoPanel.Font.Name = 'Tahoma'
        InfoPanel.Font.Style = []
        Align = alBottom
        ParentShowHint = False
        ShowHint = True
        TabOrder = 1
      end
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 545
    Width = 866
    Height = 6
    Align = alBottom
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 2
  end
  object DataSource1: TDataSource
    AutoEdit = False
    DataSet = DataModule1.ADOTableKategorije
    OnStateChange = DataSource1StateChange
    Left = 416
    Top = 160
  end
end
