int main () {
    int L7QZk6C;
    int y;
    int z;
    int t8PrqxmM;
    int i;
    int x034uBFAL;
    int cnt = (279 - 279);
    struct   {
        int L7QZk6C;
        int y;
        int z;
    }
    zuobiao [10];
    struct   {
        int x1;
        int y1;
        int z1;
        int x2;
        int y2;
        int HkLV2BEOhScd;
        int jjcPXKHY;
        int num2;
        double  OuMmXhp1;
    }
    OuMmXhp1 [(268 - 218)];
    cin >> t8PrqxmM;
    for (i = (140 - 140); t8PrqxmM > i; i = i + 1) {
        cin >> L7QZk6C >> y >> z;
        zuobiao[i].L7QZk6C = L7QZk6C;
        zuobiao[i].y = y;
        zuobiao[i].z = z;
    }
    for (i = (123 - 123); i < t8PrqxmM - (908 - 907); i++)
        for (x034uBFAL = i + (109 - 108); t8PrqxmM > x034uBFAL; x034uBFAL = x034uBFAL + 1) {
            OuMmXhp1[cnt].x1 = zuobiao[i].L7QZk6C;
            OuMmXhp1[cnt].y1 = zuobiao[i].y;
            OuMmXhp1[cnt].z1 = zuobiao[i].z;
            OuMmXhp1[cnt].x2 = zuobiao[x034uBFAL].L7QZk6C;
            OuMmXhp1[cnt].y2 = zuobiao[x034uBFAL].y;
            OuMmXhp1[cnt].HkLV2BEOhScd = zuobiao[x034uBFAL].z;
            OuMmXhp1[cnt].jjcPXKHY = i;
            OuMmXhp1[cnt].num2 = x034uBFAL;
            OuMmXhp1[cnt].OuMmXhp1 = sqrt ((zuobiao[i].L7QZk6C - zuobiao[x034uBFAL].L7QZk6C) * (zuobiao[i].L7QZk6C - zuobiao[x034uBFAL].L7QZk6C) + (zuobiao[i].y - zuobiao[x034uBFAL].y) * (zuobiao[i].y - zuobiao[x034uBFAL].y) + (zuobiao[i].z - zuobiao[x034uBFAL].z) * (zuobiao[i].z - zuobiao[x034uBFAL].z));
            cnt = cnt + 1;
        }
    {
        i = 247 - 247;
        while (i < (t8PrqxmM - (530 - 529)) * t8PrqxmM / (643 - 641) - (773 - 772)) {
            for (x034uBFAL = i + (61 - 60); x034uBFAL < (t8PrqxmM - (803 - 802)) * t8PrqxmM / (537 - 535); x034uBFAL = x034uBFAL + 1) {
                if (OuMmXhp1[i].OuMmXhp1 < OuMmXhp1[x034uBFAL].OuMmXhp1) {
                    OuMmXhp1[(840 - 790)] = OuMmXhp1[i];
                    OuMmXhp1[i] = OuMmXhp1[x034uBFAL];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    OuMmXhp1[x034uBFAL] = OuMmXhp1[(939 - 889)];
                }
                if (!(OuMmXhp1[x034uBFAL].OuMmXhp1 != OuMmXhp1[i].OuMmXhp1) && OuMmXhp1[i].jjcPXKHY > OuMmXhp1[x034uBFAL].jjcPXKHY) {
                    OuMmXhp1[(86 - 36)] = OuMmXhp1[i];
                    OuMmXhp1[i] = OuMmXhp1[x034uBFAL];
                    OuMmXhp1[x034uBFAL] = OuMmXhp1[(148 - 98)];
                }
                if (!(OuMmXhp1[x034uBFAL].OuMmXhp1 != OuMmXhp1[i].OuMmXhp1) && OuMmXhp1[i].jjcPXKHY == OuMmXhp1[x034uBFAL].jjcPXKHY && OuMmXhp1[i].num2 > OuMmXhp1[x034uBFAL].num2) {
                    OuMmXhp1[(968 - 918)] = OuMmXhp1[i];
                    OuMmXhp1[i] = OuMmXhp1[x034uBFAL];
                    OuMmXhp1[x034uBFAL] = OuMmXhp1[(596 - 546)];
                };
            }
            i = i + 1;
        };
    }
    cout << fixed;
    for (x034uBFAL = 0; x034uBFAL < t8PrqxmM * (t8PrqxmM - 1) / (200 - 198); x034uBFAL++)
        cout << "(" << OuMmXhp1[x034uBFAL].x1 << "," << OuMmXhp1[x034uBFAL].y1 << "," << OuMmXhp1[x034uBFAL].z1 << ")-(" << OuMmXhp1[x034uBFAL].x2 << "," << OuMmXhp1[x034uBFAL].y2 << "," << OuMmXhp1[x034uBFAL].HkLV2BEOhScd << ")=" << setprecision ((433 - 431)) << OuMmXhp1[x034uBFAL].OuMmXhp1 << endl;
    return 0;
}

