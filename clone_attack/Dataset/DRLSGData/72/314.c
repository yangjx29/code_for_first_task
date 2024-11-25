int main () {
    int c [(514 - 113)];
    int lKutZ7s1J9 [(546 - 523)] [23];
    int UhIFsCqP4;
    int n;
    int Ao78d0BxTue;
    int u45WpqP;
    int ZyMfvc;
    int F4tIrLjd [(690 - 289)];
    u45WpqP = (137 - 137);
    n = (640 - 640);
    Ao78d0BxTue = (411 - 411);
    cin >> Ao78d0BxTue >> n;
    UhIFsCqP4 = (662 - 662);
    ZyMfvc = (494 - 494);
    {
        ZyMfvc = 602 - 602;
        while (ZyMfvc <= n + (1001 - 1000)) {
            lKutZ7s1J9[(316 - 316)][ZyMfvc] = (556 - 556);
            lKutZ7s1J9[Ao78d0BxTue +(160 - 159)][ZyMfvc] = (756 - 756);
            ZyMfvc = ZyMfvc +1;
        }
    }
    {
        UhIFsCqP4 = (936 - 936);
        for (; UhIFsCqP4 <= Ao78d0BxTue +(379 - 378);) {
            lKutZ7s1J9[UhIFsCqP4][(627 - 627)] = (132 - 132);
            lKutZ7s1J9[UhIFsCqP4][n + (585 - 584)] = (814 - 814);
            UhIFsCqP4 = UhIFsCqP4 +1;
        }
    }
    {
        UhIFsCqP4 = (75 - 74);
        while (UhIFsCqP4 <= Ao78d0BxTue) {
            {
                ZyMfvc = (358 - 357);
                while (ZyMfvc <= n) {
                    cin >> lKutZ7s1J9[UhIFsCqP4][ZyMfvc];
                    ZyMfvc++;
                }
            }
            UhIFsCqP4 = UhIFsCqP4 +1;
        }
    }
    {
        UhIFsCqP4 = 95 - 94;
        while (UhIFsCqP4 <= Ao78d0BxTue) {
            {
                ZyMfvc = 565 - 564;
                while (ZyMfvc <= n) {
                    if (lKutZ7s1J9[UhIFsCqP4][ZyMfvc] >= lKutZ7s1J9[UhIFsCqP4 +1][ZyMfvc] && lKutZ7s1J9[UhIFsCqP4][ZyMfvc] >= lKutZ7s1J9[UhIFsCqP4 -1][ZyMfvc] && lKutZ7s1J9[UhIFsCqP4][ZyMfvc] >= lKutZ7s1J9[UhIFsCqP4][ZyMfvc +1] && lKutZ7s1J9[UhIFsCqP4][ZyMfvc] >= lKutZ7s1J9[UhIFsCqP4][ZyMfvc -1]) {
                        F4tIrLjd[u45WpqP] = UhIFsCqP4 -1;
                        c[u45WpqP] = ZyMfvc -1;
                        u45WpqP = u45WpqP + 1;
                    }
                    ZyMfvc++;
                }
            }
            UhIFsCqP4++;
        }
    }
    {
        UhIFsCqP4 = 0;
        for (; UhIFsCqP4 < u45WpqP;) {
            cout << F4tIrLjd[UhIFsCqP4] << " " << c[UhIFsCqP4] << endl;
            UhIFsCqP4++;
        }
    }
    return 0;
}

