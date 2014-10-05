using System;
using System.Collections.Generic;
using System.Text;
using Hotel.IDAL;
using Hotel.Model;

namespace Hotel.BLL
{
    public class RoomTypeBLL
    {
        private static readonly IRoomType iroomType = Hotel.DALFactory.DataAccess.CreateRoomType();

       //��ѯȫ��
        public List<RoomType> GetRoomTypeAll()
        {
            return iroomType.GetRoomTypeAll();
        }

        //����������ѯ
        public RoomType GetRoomTypeById(int id)
        {
            return iroomType.GetRoomTypeById(id);
        }

        //����
        public bool InsertRoom(RoomType room)
        {
            return iroomType.InsertRoom(room);
        }

        //ɾ��
        public bool DeleteById(int id)
        {
            return iroomType.DeleteById(id);
        }

        
        //�޸�
        public bool UpdateRoom(string name, string spic, string pic, string content, decimal price, string area, int isAddBed, decimal addBedPrice, int id)
        {
            return iroomType.UpdateRoom(name, spic, pic, content, price, area, isAddBed, addBedPrice,id);
        }


        //��ѯȫ��2 DropDown
        public List<RoomType> GetRoomTypeAllByDDL()
        {
            return iroomType.GetRoomTypeAllByDDL();
        }
    }
}
