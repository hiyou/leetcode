﻿using System;
using System.Collections.Generic;
using System.Text;
using Hotel.Model;

namespace Hotel.IDAL
{
    public interface IRoomStation
    {
        List<RoomStation> GetRoomStationAll();
    }
}
