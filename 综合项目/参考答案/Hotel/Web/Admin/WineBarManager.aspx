﻿<%@ Page Language="C#" MasterPageFile="~/Admin/MasterPage.master" AutoEventWireup="true" CodeFile="WineBarManager.aspx.cs" Inherits="Admin_WineBarManager" Title="Untitled Page" %>



<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">

<br />

<asp:GridView ID="GridView1" runat="server" CssClass="GridBody" DataKeyNames="Id" AutoGenerateColumns="False" BackColor="White" DataSourceID="ObjectDataSource1" Width="95%" AllowPaging="True" OnRowDataBound="GridView1_RowDataBound"  OnPreRender="GridView1_PreRender">
    <Columns>
    
        <asp:BoundField DataField="Id" HeaderText="Id" SortExpression="Id" Visible="false" />
        
        <asp:TemplateField HeaderText="名称" SortExpression="Name">
            <EditItemTemplate>
                <asp:TextBox ID="TextBox1" runat="server" Text='<%# Bind("Name") %>'></asp:TextBox>
            </EditItemTemplate>
            <ItemTemplate>
                <asp:Label ID="Label1" runat="server" Text='<%# Bind("Name") %>'></asp:Label>
            </ItemTemplate>                   
            <HeaderStyle CssClass="GridHead" />
        </asp:TemplateField>        
      
        
        <asp:TemplateField HeaderText="加入时间" SortExpression="Sj">
            <EditItemTemplate>
                <asp:TextBox ID="TextBox5" runat="server" Text='<%# Bind("Sj") %>'></asp:TextBox>
            </EditItemTemplate>
            <ItemTemplate>
                <asp:Label ID="Label5" runat="server" Text='<%# Bind("Sj") %>'></asp:Label>
            </ItemTemplate>           
            <HeaderStyle CssClass="GridHead" />
        </asp:TemplateField>
        
        <asp:TemplateField ShowHeader="False" HeaderText="删除">
            <ItemTemplate>
                <asp:LinkButton ID="lnkbtnDelete" runat="server" CausesValidation="False" CommandName="Delete"
                    Text="删除"></asp:LinkButton>
            </ItemTemplate>        
            <HeaderStyle CssClass="GridHead" />
        </asp:TemplateField>
        
        <asp:TemplateField HeaderText="详细">
            <ItemTemplate>
                <asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl='<%# Eval("Id", "WineBarById.aspx?id={0}") %>'
                    Text="详细"></asp:HyperLink>
            </ItemTemplate>          
            <HeaderStyle CssClass="GridHead" />
        </asp:TemplateField>
        
        
    </Columns>
      <AlternatingRowStyle CssClass="GridLine" HorizontalAlign="Center" />    
</asp:GridView>

<asp:ObjectDataSource ID="ObjectDataSource1" runat="server" SelectMethod="GetWineBarAll"
    TypeName="Hotel.BLL.WineBarBLL" DeleteMethod="DeleteById">
    <DeleteParameters>
        <asp:Parameter Name="id" Type="Int32" />
    </DeleteParameters>
</asp:ObjectDataSource>



<asp:Panel id="pnlNoFile" runat="server" Width="700px" Height="200px" Visible="false">
<BR /><FIELDSET style="WIDTH: 300px">
<TABLE width="100%"><TBODY><TR><TD style="FONT-WEIGHT: 100; FONT-SIZE: 14px" align=left>
&nbsp;&nbsp;&nbsp;&nbsp;提示信息 </TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG height=1 alt="" src="../Admin/Images/img/103.gif" width="100%" /> </TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG src="../Admin/Images/img/infod.gif" align=top />&nbsp;&nbsp;&nbsp;&nbsp;暂无信息！ </TD></TR><TR><TD align=right>
<asp:Button id="Button1" runat="server" CssClass="btn" CausesValidation="false" Text=" 确 定 " PostBackUrl="~/Admin/Index.aspx">
</asp:Button> </TD></TR></TBODY></TABLE></FIELDSET></asp:Panel> 



</asp:Content>

