<%@ Page Language="C#" MasterPageFile="~/Admin/MasterPage.master" AutoEventWireup="true"  EnableEventValidation="false" CodeFile="BillToHotel.aspx.cs" Inherits="Admin_BillToHotel" Title="Untitled Page" %>



<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
  <script type="text/javascript">    
    function ChangProvice()
    {
        document.getElementById("<%=ddlProvice.ClientID%>").length=0;
        if(document.getElementById("<%=ddlCountry.ClientID%>").value=="����")  
        {      
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("��ʢ��","��ʢ��"));
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("ŦԼ","ŦԼ"));
        }
        if(document.getElementById("<%=ddlCountry.ClientID%>").value=="����")    
        {    
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("����","����"));
        }
        if(document.getElementById("<%=ddlCountry.ClientID%>").value=="�¹�")      
        {  
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("����","����"));
        }
        if(document.getElementById("<%=ddlCountry.ClientID%>").value=="�й���½")     
        {   
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("�Ϻ�","�Ϻ�"));
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("����","����"));
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("ɽ��","ɽ��"));
            document.getElementById("<%=ddlProvice.ClientID%>").add(new Option("����","����"));
        }
            
    }      

    function CheckForm()
    {
         if(document.getElementById("<%=txtName.ClientID%>").value=="")
         {
            alert("��������Ϊ�գ�");
            document.getElementById("<%=txtName.ClientID%>").focus();
            return false;
         }
         if(document.getElementById("<%=txtIdentityNo.ClientID%>").value=="")
         {
            alert("֤�����벻��Ϊ�գ�");
            document.getElementById("<%=txtIdentityNo.ClientID%>").focus();
            return false;
         }
         if(document.getElementById("<%=txtAddress.ClientID%>").value=="")
         {
            alert("��ϸ��ַ����Ϊ�գ�");
            document.getElementById("<%=txtAddress.ClientID%>").focus();
            return false;
         }
         if(document.getElementById("<%=txtTel.ClientID%>").value=="")
         {
            alert("�绰����Ϊ�գ�");
            document.getElementById("<%=txtTel.ClientID%>").focus();
            return false;
         }
         return true;
    }
    </script>
    <script language="javascript" type="text/javascript" src="../My97DatePicker/WdatePicker.js" charset="gb2312"></script>
    <asp:UpdatePanel ID="UpdatePanel1" runat="server">
        <ContentTemplate>
        <div style="width: 95%; height: 290px; text-align:left" id="pnlMain" runat="server">
            <!--ͷ-->
            <table border="0" cellpadding="0" cellspacing="0">
                <tr>
                    
                    <td style="width: 179px; height: 13px; background-image: url(../img/main/main/main_leftUp.JPG); font-weight: bold; font-size: 12px; ">
                        &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; 
                        �¿���ס�Ǽ�</td>
                    <td style="background-image: url(../img/main/main/main_centerUp.JPG); width: 625px;
                        height: 13px">
                        <asp:Label ID="Label1" runat="server" Height="25px"></asp:Label></td>
                    <td style="width: 12px; height: 13px; background-image: url(../img/main/main/main_rightUp.JPG);">
                        </td>
                </tr>
            </table>
            <!--�м�-->
             <table border="0" cellpadding="0" cellspacing="0">
                <tr>
                    <!--��-->
                    <td style="width: 9px; background-image: url(../img/main/main/main_leftCenter.JPG); height: 454px;"> </td><%--464--%>
                   
                    <!--����-->
                    <td style="width: 780px; height: 440px; background-color: #f1f5f4;" valign="top"><%--450--%>
                        <p>&nbsp;</p>
                        <table width="100%">
                            <tr>
                                <td align="center">
                                    <span style="font-size:17px;">�¿���ס�Ǽ�</span>
                                </td>
                            </tr>
                            <tr>
                                <td style="font-weight: bold; font-size: 20pt;" align="center">
                                    <!--������Ϣ-->
                                    <table border="2" id="msg" cellpadding="0" cellspacing="0" style="width: 99%;height: 25px">
                                        <tr>
                                            <td>
                                                ��������
                                            </td>
                                            <td style="width: 110px; height: 20px">
                                                <asp:TextBox ID="txtName" runat="server" Height="20px" Width="110px" Font-Size="9pt" /><%--Width="85px"--%>
             <%--                                   <asp:ImageButton ID="ImageButton1" runat="server" Height="11px" Style="top: 1px" Width="18px" />--%>
                                            </td>
                                            <td>
                                                ֤������</td>
                                            <td style="width: 149px; height: 20px">
                                                <asp:DropDownList ID="ddlCertificateType" runat="server" Width="148px" Font-Size="9pt">
                                                    <asp:ListItem Text="���֤" Value="���֤"></asp:ListItem>
                                                    <asp:ListItem Text="ѧ��֤" Value="ѧ��֤"></asp:ListItem>
                                                    <asp:ListItem Text="����֤" Value="����֤"></asp:ListItem>
                                                    <asp:ListItem Text="��ʻ֤" Value="��ʻ֤"></asp:ListItem>
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                </asp:DropDownList>
                                            </td>
                                            <td>
                                                ֤������</td>
                                            <td style="width: 158px; height: 20px">
                                                <asp:TextBox ID="txtIdentityNo" runat="server" Height="20px" Width="151px" Font-Size="9pt" />
                                             </td>
                                            <td>
                                                �Ա�</td>
                                            <td style="width: 39px; height: 20px" colspan="2">
                                                <asp:RadioButtonList ID="rdolistSex" runat="server" RepeatDirection="Horizontal" RepeatLayout="table">
                                                    <asp:ListItem Text='��' Value="��" Selected="True"></asp:ListItem>
                                                    <asp:ListItem Text='Ů' Value="Ů"></asp:ListItem>
                                                </asp:RadioButtonList>
                                            </td>                                           
                                            
                                        </tr>
                                        <tr>
                                            <td>
                                                ��������</td>
                                            <td style="width: 110px; height:20px">
                                                <asp:DropDownList ID="ddlCountry" runat="server" Height="20px" Width="110px" onchange="ChangProvice();" Font-Size="9pt">
                                                    <asp:ListItem Text="�й���½" Value="�й���½"></asp:ListItem>
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                    <asp:ListItem Text="�¹�" Value="�¹�"></asp:ListItem>
                                                </asp:DropDownList></td>
                                            <td>
                                                ʡ�е���</td>
                                            <td style="width: 149px; height: 20px">                                           
                                                <asp:DropDownList ID="ddlProvice" runat="server" Width="148px">
                                                    <asp:ListItem Text="�Ϻ�" Value="�Ϻ�"></asp:ListItem>
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                    <asp:ListItem Text="ɽ��" Value="ɽ��"></asp:ListItem>
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                </asp:DropDownList>
                                            </td>
                                            <td>
                                                ��ϸ��ַ</td>
                                            <td  colspan="4"  style="height: 20px">
                                                <asp:TextBox ID="txtAddress" runat="server"  Height="20px" Width="100%" Font-Size="9pt" />
                                            </td>

                                            
                                        </tr>
                                        <tr style="color: #000000">
                                            <td>
                                                ��������</td>
                                            <td style="width: 110px; height: 20px">
                                                <asp:DropDownList ID="ddlCustomerType" runat="server" Width="110px" Font-Size="9pt">
                                                    <asp:ListItem Text="ɢ��" Value="ɢ��"></asp:ListItem>
                                                    <asp:ListItem Text="�Ŷ�" Value="�Ŷ�"></asp:ListItem>
                                                    <asp:ListItem Text="�ڲ�" Value="�ڲ�"></asp:ListItem>
                                                    <asp:ListItem Text="Э�鵥λ" Value="Э�鵥λ"></asp:ListItem>
                                                </asp:DropDownList></td>
                                            <td align="left">
                                                ��&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Դ</td>
                                            <td style="width: 149px; height: 20px">
                                                <asp:DropDownList ID="ddlCustomerResource" runat="server" Height="20px" Width="148px" Font-Size="9pt">
                                                    <asp:ListItem Text="����" Value="����"></asp:ListItem>
                                                    <asp:ListItem Text="ҵ��Ա����" Value="ҵ��Ա����"></asp:ListItem>
                                                    <asp:ListItem Text="�μӻ�չ" Value="�μӻ�չ"></asp:ListItem>
                                                </asp:DropDownList></td>
                                            <td>
                                                &nbsp;��ע��Ϣ
                                            </td>
                                            <td colspan="4" style="height: 20px">
                                                <asp:TextBox ID="txtCustomerMark" runat="server"  Height="20px" Width="100%" Font-Size="9pt" />
                                             </td>
                                        </tr>
                                        
                                        
                                        <tr style="color: #000000">
                                            <td>
                                                ��&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;��</td>
                                            <td style="width: 110px; height: 20px">
                                                  <asp:TextBox ID="txtTel" runat="server" Height="20px" Width="110px" Font-Size="9pt" />
                                            </td>
                                            
                                            <td style="width: 149px; height: 20px" colspan="2" align="left">
                                                <%--<asp:RadioButton ID="rdoCommon" runat="server"  Text="��ͨ" onclick="IsCommon();" Checked="true" GroupName="a" OnCheckedChanged="rdoCommon_CheckedChanged" />
                                                <asp:RadioButton ID="rdoCustomer" runat="server"  Text="��Ա" onclick="IsMember();"  GroupName="a" />--%>
                                                <asp:RadioButtonList ID="rdolistUserType" runat="server" AutoPostBack="true" RepeatDirection="Horizontal" RepeatLayout="table" OnSelectedIndexChanged="rdolistUserType_SelectedIndexChanged">
                                                    <asp:ListItem Text='��ͨ' Value="��ͨ" Selected="True"></asp:ListItem>
                                                    <asp:ListItem Text='��Ա' Value="��Ա"></asp:ListItem>
                                                </asp:RadioButtonList>
                                            </td>
                                            
                                            <td colspan="5" style=" display:none" id="memberId"  runat="server">
                                                ����
                                                <asp:TextBox ID="txtCardNo" runat="server"  Height="20px" Width="120" Font-Size="9pt" />
                                                ����
                                                <asp:TextBox ID="txtPwd" runat="server"  Height="20px" Width="100" TextMode="Password" Font-Size="9pt" />
                                                <asp:Button  ID="Button4" runat="server" Text="��&nbsp;&nbsp;ѯ" Height="20" CssClass="btn" OnClick="Button4_Click" />
                                             </td>
                                        </tr>
                                        
 
                                    </table>
                                    <!--�ͷ���Ϣ-->
                                    <table width="100%">
                                        <tr>
                                            <td>
                                                <asp:Panel ID="Panel1" runat="server" Height="170px" ScrollBars="Both" Width="703">
                                                 <asp:GridView  CssClass="GridBody" BackColor="White" ID="GridView1" Width="684" runat="server" AutoGenerateColumns="False" EditRowStyle-Width="5px" Height="24px" OnRowDataBound="GridView1_RowDataBound" >
                                                    <Columns>
                                                    
                                                        <asp:TemplateField HeaderText="NO" Visible="False">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblId" runat="server" Text='<%# Eval("RoomId") %>'></asp:Label>
                                                            </ItemTemplate>
                                                        </asp:TemplateField>
                                                    
                                                        <asp:TemplateField HeaderText="NO">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblNo" runat="server" Text='<%# GetNo() %>'  Width="40px" ></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem" />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                    
                                                        <asp:TemplateField HeaderText="����">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblRoomNum" runat="server" Text='<%# Eval("RoomNum") %>' Width="100"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead"   />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="����">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblRoomType" runat="server" Text='<%# Eval("RoomType.Name") %>' Width="110"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem" />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="��סʱ��">
                                                            <ItemTemplate>
                                                                <asp:TextBox ID="txtBeginTime" runat="server" Width="120" ReadOnly="true" Text='<%# GetCurrentTime() %>'></asp:TextBox>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"  />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText=" �˷�ʱ��">
                                                            <ItemTemplate>
                                                                <asp:TextBox ID="txtEndTime" runat="server" Width="140" Text='<%# GetEndTime()%>' CssClass="Wdate" onFocus="new WdatePicker(this,'%Y-%M-%D %h:%m:%s',true,'default')" ></asp:TextBox><%----%>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem" />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText=" ����۸�">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblOldPrice" runat="server" Text='<%# Eval("RoomType.Price","{0:F2}") %>' Width="100"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="�Ӵ�����">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblAddBedPrice" runat="server" Text='<%# Eval("RoomType.AddBedPrice","{0:F2}") %>' Width="100"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="�Ӵ�����">
                                                            <ItemTemplate>
                                                                <asp:DropDownList ID="ddlAddBedPriceCount" runat="server" Width="100" AutoPostBack="true" OnSelectedIndexChanged="ddlAddBedPriceCount_SelectedIndexChanged">
                                                                    <asp:ListItem Text="��" Value="0"></asp:ListItem>
                                                                    <asp:ListItem Text="1" Value="1"></asp:ListItem>
                                                                    <asp:ListItem Text="2" Value="2"></asp:ListItem>
                                                                    <asp:ListItem Text="3" Value="3"></asp:ListItem>
                                                                </asp:DropDownList>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="�Ӵ��ܷ���">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblAddBedPriceSun" runat="server" Text='0.00' Width="100"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText=" �ۿ���">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblDiscount" runat="server" Text='���ۿ�' Width="80"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem" />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        <asp:TemplateField HeaderText="�ۿۺ��">
                                                            <ItemTemplate>
                                                                <asp:Label ID="lblNewPrice" runat="server" Text='<%# Eval("RoomType.Price","{0:F2}") %>' Width="110"></asp:Label>
                                                            </ItemTemplate>
                                                            <ItemStyle CssClass="GridItem"   />
                                                            <HeaderStyle CssClass="GridHead" />
                                                        </asp:TemplateField>
                                                        
                                                        
                                                        <asp:TemplateField ShowHeader="False" HeaderText="����">
                                                            <ItemTemplate>
                                                                <asp:LinkButton ID="lnkbtnDel" runat="server" CssClass="btn" CommandArgument='<%# GetNo() %>' OnCommand="lnkbtn_Command" Width="60">ɾ��</asp:LinkButton>
                                                            </ItemTemplate>
                                                            <HeaderStyle CssClass="GridHead"/>
                                                        </asp:TemplateField>
                                                        
                                                    </Columns>
                                                    <EditRowStyle Width="5px" />
                                                    <AlternatingRowStyle CssClass="GridLine" HorizontalAlign="Center" />   
                                                </asp:GridView>
                                                </asp:Panel>
                                            </td>
                                            <td width="110" valign="middle">
                                                <asp:Button ID="Button1" runat="server" Text="��ӷ���" CssClass="btn" OnClick="Button1_Click" /><br /><br />
                                                <asp:Button ID="Button2" runat="server" Text="�۸�ϼ�"  CssClass="btn" OnClick="Button2_Click" />
                                            </td>
                                        </tr>
                                    </table>
                                    <!--������Ϣ-->
                                    <table border="1" id="msg" cellpadding="0" cellspacing="0" style="width: 99%; height: 24px;">
                                        <tr>                                        
                                            <td style="height: 25px; width: 92px;">
                                                <asp:DropDownList id="ddlMoneyType" runat="server" Width="90px" Height="25px">
                                                    <asp:ListItem Text="�ֽ�" Value="�ֽ�"></asp:ListItem>
                                                    <asp:ListItem Text="֧Ʊ" Value="֧Ʊ"></asp:ListItem>
                                                    <asp:ListItem Text="���п�" Value="���п�"></asp:ListItem>
                                                </asp:DropDownList>
                                             </td>
                                             
                                            <td style="height: 11px; width: 152px;" colspan="3" >
                                                Ӧ�ս��<asp:TextBox ID="txtYinShouMoney" runat="server" Height="16px" Width="70px"  />
                                            </td>
                                                
                                            <td style="height: 11px; width: 126px;" colspan="3" >
                                                Ѻ��<asp:TextBox ID="txtDeposit" runat="server" Height="16px" Width="70px" Text="1000"  />
                                            </td>

                                            <td style=" height: 11px; width: 200px;" colspan="2">
                                                ����˵��<asp:TextBox ID="txtPayMark" runat="server" Width="121px"></asp:TextBox>
                                            </td>
                                            
                                            <td style="width: 142px; height: 11px">
                                                ʵ�ս��<asp:TextBox ID="txtShiShouMoney" runat="server" Width="70px"></asp:TextBox>
                                            </td>
                                            
                                        </tr>
                                       <tr>
                                            <td  height="22" colspan="10" align="right" style="text-align:right">
                                                �ܹ�˾����˹̹����Ƶ�&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                                ����Ա��<%=user.UserName%>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                                ʱ�䣺<%=DateTime.Now%>
                                            </td>
                                        </tr>
                                    </table>
                                    <!--������Ϣ--><br />
                                    <table  cellpadding="0" cellspacing="0" style="width: 99%; height: 24px;">
                                        <tr>
                                            <td align="center">
                                                <asp:Button ID="Button3" runat="server" Text="ȷ���Ǽ�" CssClass="btn" OnClick="Button3_Click" OnClientClick="return CheckForm();" />
                                                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                                <input id="Reset1" type="reset" value="��&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;��" class="btn" />
                                            </td>
                                        </tr>
                                        <tr>
                                            <td align="right">
                                                <asp:Label ID="lblErrNote" runat="server" Text="" ForeColor="red"></asp:Label>
                                            </td>
                                        </tr>
                                    </table>
                                </td>
                            </tr>
                        </table>
                    </td>
                    <!--��-->
                   <td style="width: 10px; background-image: url(../img/main/main/main_rightCenter.JPG); height: 454px;"></td><%--464--%>
                </tr>
            </table>
            
            <!--β-->
            <table border="0" cellpadding="0" cellspacing="0">
                <tr>
                    <td style="width: 19px; background-image: url(../img/main/main/main_leftFoot.JPG); height: 6px;">
                    </td>
                    <td style="width: 775px; background-image: url(../img/main/main/main_centerFoot.JPG); height: 6px;">
                        <asp:Label ID="Label2" runat="server" Height="17px"></asp:Label></td>
                    <td style="width: 15px; background-image: url(../img/main/main/main_rightFoot.JPG); height: 6px;">
                    </td>
                </tr>
            </table>
        </div>
        
        <asp:Panel id="pnlOk" runat="server" Width="700px" Height="200px" Visible="false">
<BR /><FIELDSET style="WIDTH: 300px">
<TABLE width="100%"><TBODY><TR><TD style="FONT-WEIGHT: 100; FONT-SIZE: 14px" align=left>
&nbsp;&nbsp;&nbsp;&nbsp;��ʾ��Ϣ </TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG height=1 alt="" src="Images/img/103.gif" width="100%" /> </TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG src="Images/img/succ.gif" align=top />&nbsp;&nbsp;&nbsp;&nbsp;�����ɹ��� </TD></TR><TR><TD align=right>
<asp:Button id="Button5" runat="server" CssClass="btn" CausesValidation="false" Text=" ȷ �� " PostBackUrl="~/Admin/RoomNumberManager.aspx" >
</asp:Button> </TD></TR></TBODY></TABLE></FIELDSET></asp:Panel> 

        <asp:Panel id="pnlErr" runat="server" Width="700px" Height="200px" Visible="false">
<BR /><FIELDSET style="WIDTH: 300px">
<TABLE width="100%"><TBODY><TR><TD style="FONT-WEIGHT: 100; FONT-SIZE: 14px" align=left>
&nbsp;&nbsp;&nbsp;&nbsp;����ʧ��</TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG height=1 alt="" src="Images/img/103.gif" width="100%" /> </TD></TR><TR><TD align=left>&nbsp;&nbsp;&nbsp;&nbsp;
<IMG src="Images/img/err.gif" align=top />&nbsp;&nbsp;&nbsp;&nbsp;���ݿ��쳣������ϵ����Ա�� </TD></TR><TR><TD align=right>
<asp:Button id="Button6" runat="server" CssClass="btn" CausesValidation="false" Text=" ȷ �� "  OnClientClick="window.history.go(-1);"/>
</TD></TR></TBODY></TABLE></FIELDSET></asp:Panel> 

        </ContentTemplate>
    </asp:UpdatePanel>
    
</asp:Content>

