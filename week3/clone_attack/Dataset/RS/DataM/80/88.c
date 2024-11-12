int main () {
    int JRNpIUSVD9 [(532 - 519)] = {(952 - 952), (250 - 219), (394 - 365), (173 - 142), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Month1 [(1005 - 992)] = {(889 - 889), (371 - 340), 28, (834 - 803), (226 - 196), (587 - 556), (397 - 367), (965 - 934), (1023 - 992), (826 - 796), (951 - 920), 30, (112 - 81)};
    int VSErUJca;
    int YqswXumT;
    int day1;
    int year2;
    int XOzbYKPx2GDt;
    int IVdSU0HQyF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int t9O28VDhTZHU;
    int VNj4c3R;
    t9O28VDhTZHU = (156 - 156);
    cin >> VSErUJca >> YqswXumT >> day1;
    if ((VSErUJca % (709 - 705) == (670 - 670) && !((251 - 251) == VSErUJca % (896 - 796))) || (VSErUJca % (448 - 48) == (109 - 109))) {
        for (VNj4c3R = YqswXumT; VNj4c3R <= (65 - 53); VNj4c3R = VNj4c3R +1)
            t9O28VDhTZHU = t9O28VDhTZHU + JRNpIUSVD9[VNj4c3R];
        t9O28VDhTZHU = t9O28VDhTZHU - day1;
    }
    else {
        for (VNj4c3R = YqswXumT; 12 >= VNj4c3R; VNj4c3R = VNj4c3R +1)
            t9O28VDhTZHU = t9O28VDhTZHU + Month1[VNj4c3R];
        t9O28VDhTZHU = t9O28VDhTZHU - day1;
    }
    cin >> year2 >> XOzbYKPx2GDt >> IVdSU0HQyF;
    {
        VNj4c3R = VSErUJca +1;
        while (VNj4c3R < year2) {
            if ((!((926 - 926) != VNj4c3R % (747 - 743)) && !((112 - 112) == VNj4c3R % (532 - 432))) || (VNj4c3R % 400 == (898 - 898)))
                t9O28VDhTZHU = t9O28VDhTZHU + 366;
            else
                t9O28VDhTZHU = t9O28VDhTZHU + (438 - 73);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VNj4c3R = VNj4c3R +1;
        };
    }
    if ((year2 % (610 - 606) == (771 - 771) && year2 % (482 - 382) != (854 - 854)) || (year2 % 400 == (918 - 918))) {
        {
            VNj4c3R = 1;
            while (VNj4c3R < XOzbYKPx2GDt) {
                t9O28VDhTZHU = t9O28VDhTZHU + JRNpIUSVD9[VNj4c3R];
                VNj4c3R = VNj4c3R +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        t9O28VDhTZHU = t9O28VDhTZHU + IVdSU0HQyF;
    }
    else {
        {
            VNj4c3R = 1;
            while (VNj4c3R < XOzbYKPx2GDt) {
                t9O28VDhTZHU = t9O28VDhTZHU + Month1[VNj4c3R];
                VNj4c3R = VNj4c3R +1;
            };
        }
        t9O28VDhTZHU = t9O28VDhTZHU + IVdSU0HQyF;
    }
    if (VSErUJca != year2)
        cout << t9O28VDhTZHU;
    else if ((VSErUJca % 4 == (208 - 208) && VSErUJca % 100 != 0) || (VSErUJca % 400 == 0))
        cout << t9O28VDhTZHU - 366;
    else
        cout << t9O28VDhTZHU - 365;
    return 0;
}

