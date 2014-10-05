using System;
using System.Collections.Generic;
using System.Text;
using Hotel.IDAL;
using Hotel.Model;

namespace Hotel.BLL
{
    public class WineBarBLL
    {
        private static readonly IWineBar ibar = Hotel.DALFactory.DataAccess.CreateWineBar();

        //��ѯȫ��
        public List<WineBar> GetWineBarAll()
        {
            return ibar.GetWineBarAll();
        }

        //����������ѯ
        public WineBar GetWineBarById(int id)
        {
            return ibar.GetWineBarById(id);

        }

        //����
        public bool InsertWineBar(WineBar bar)
        {
            return ibar.InsertWineBar(bar);
        }

        //ɾ��
        public bool DeleteById(int id)
        {
            return ibar.DeleteById(id);
        }

        //�޸�
        public bool Update(string name, string spic, string pic, string content, int id)
        {
            return ibar.Update(name, spic, pic, content, id);
        }
    }
}
