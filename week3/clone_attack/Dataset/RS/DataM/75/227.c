int main () {
    int jQvDAf2 = (182 - 182), EcOkfob0 = (981 - 981);
    int XN5qDkn4gb = (1608 - 608), Max_h = (567 - 567), Max = (893 - 893);
    char HCRb6OaDVH [(10603 - 603)], gemTZ0 [(10064 - 64)];
    int XuMWVp3a [(10789 - 789)], y [(10104 - 104)];
    int WuLarqQCMAX = (113 - 113), ub0co3ArI = (327 - 327), FgGqzthZi = (620 - 620);
    int comma = -(138 - 137);
    cin >> HCRb6OaDVH;
    cin >> gemTZ0;
    {
        WuLarqQCMAX = 376 - 376;
        while (WuLarqQCMAX <= (10652 - 653)) {
            if (HCRb6OaDVH[WuLarqQCMAX] == '\0' || HCRb6OaDVH[WuLarqQCMAX] == ',') {
                if (WuLarqQCMAX -comma == (67 - 65))
                    XuMWVp3a[jQvDAf2] = HCRb6OaDVH[WuLarqQCMAX -(718 - 717)] - '0';
                else if (WuLarqQCMAX -comma == (833 - 830))
                    XuMWVp3a[jQvDAf2] = (HCRb6OaDVH[WuLarqQCMAX -(151 - 149)] - '0') * (631 - 621) + HCRb6OaDVH[WuLarqQCMAX -(681 - 680)] - '0';
                else if (WuLarqQCMAX -comma == (520 - 516))
                    XuMWVp3a[jQvDAf2] = (HCRb6OaDVH[WuLarqQCMAX -(313 - 310)] - '0') * (641 - 541) + (HCRb6OaDVH[WuLarqQCMAX -(673 - 671)] - '0') * (903 - 893) + HCRb6OaDVH[WuLarqQCMAX -(416 - 415)] - '0';
                comma = WuLarqQCMAX;
                jQvDAf2 = jQvDAf2 + 1;
                if (HCRb6OaDVH[WuLarqQCMAX] == '\0')
                    break;
            }
            WuLarqQCMAX = WuLarqQCMAX +1;
        };
    }
    comma = -(894 - 893);
    jQvDAf2 = (963 - 963);
    {
        WuLarqQCMAX = 876 - 876;
        while (WuLarqQCMAX <= (10586 - 587)) {
            if (gemTZ0[WuLarqQCMAX] == ',' || gemTZ0[WuLarqQCMAX] == '\0') {
                if (WuLarqQCMAX -comma == (84 - 82))
                    y[jQvDAf2] = gemTZ0[WuLarqQCMAX -(519 - 518)] - '0';
                else if (WuLarqQCMAX -comma == (982 - 979))
                    y[jQvDAf2] = (gemTZ0[WuLarqQCMAX -(605 - 603)] - '0') * (379 - 369) + gemTZ0[WuLarqQCMAX -(149 - 148)] - '0';
                else if (WuLarqQCMAX -comma == (193 - 189))
                    y[jQvDAf2] = (gemTZ0[WuLarqQCMAX -(658 - 655)] - '0') * (598 - 498) + (gemTZ0[WuLarqQCMAX -2] - '0') * (718 - 708) + gemTZ0[WuLarqQCMAX -(728 - 727)] - '0';
                comma = WuLarqQCMAX;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (gemTZ0[WuLarqQCMAX] == '\0')
                    break;
                jQvDAf2++;
            }
            WuLarqQCMAX++;
        };
    }
    {
        WuLarqQCMAX = 905 - 905;
        while (WuLarqQCMAX <= jQvDAf2 - (626 - 625)) {
            if (XuMWVp3a[WuLarqQCMAX] < XN5qDkn4gb)
                XN5qDkn4gb = XuMWVp3a[WuLarqQCMAX];
            if (y[WuLarqQCMAX] > Max_h)
                Max_h = y[WuLarqQCMAX];
            WuLarqQCMAX++;
        };
    }
    for (WuLarqQCMAX = XN5qDkn4gb; WuLarqQCMAX <= Max_h; WuLarqQCMAX = WuLarqQCMAX +1) {
        EcOkfob0 = (193 - 193);
        for (ub0co3ArI = (16 - 16); ub0co3ArI <= jQvDAf2 - (434 - 433); ub0co3ArI++) {
            if (XuMWVp3a[ub0co3ArI] <= WuLarqQCMAX &&y[ub0co3ArI] > WuLarqQCMAX)
                EcOkfob0 = EcOkfob0 +1;
        }
        if (EcOkfob0 > Max)
            Max = EcOkfob0;
    }
    cout << jQvDAf2 << " " << Max << endl;
    return 0;
}

