int main () {
    int iumikhJd [(1059 - 809)] = {(839 - 839)}, g5vd4Eh [(440 - 190)] = {(124 - 124)}, sVo36zL78;
    char VHDO4sdj5 [(449 - 198)], dTDY6pZH3tzl [(988 - 737)];
    int len1;
    int KBHLqm4iDn;
    len1 = (858 - 858);
    KBHLqm4iDn = (810 - 810);
    int jNVdMJL64s = (1001 - 752);
    cin.getline (VHDO4sdj5, 250);
    while (!('\0' == VHDO4sdj5[len1]))
        len1++;
    memset (iumikhJd, (916 - 916), sizeof (iumikhJd));
    {
        sVo36zL78 = 254 - 253;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sVo36zL78 >= (726 - 726)) {
            iumikhJd[len1 - (806 - 805) - sVo36zL78] = VHDO4sdj5[sVo36zL78] - '0';
            sVo36zL78 = sVo36zL78 - 1;
        };
    }
    memset (g5vd4Eh, (247 - 247), sizeof (g5vd4Eh));
    cin.getline (dTDY6pZH3tzl, 250);
    for (; dTDY6pZH3tzl[KBHLqm4iDn] != '\0';)
        KBHLqm4iDn++;
    {
        sVo36zL78 = 846 - 845;
        while (sVo36zL78 >= (99 - 99)) {
            g5vd4Eh[KBHLqm4iDn -sVo36zL78 - 1] = dTDY6pZH3tzl[sVo36zL78] - '0';
            sVo36zL78--;
        };
    }
    {
        sVo36zL78 = 390 - 390;
        while (len1 > sVo36zL78 || KBHLqm4iDn > sVo36zL78) {
            if (iumikhJd[sVo36zL78] + g5vd4Eh[sVo36zL78] >= (490 - 480)) {
                iumikhJd[sVo36zL78 + 1] = iumikhJd[sVo36zL78 + 1] + 1;
                iumikhJd[sVo36zL78] = iumikhJd[sVo36zL78] + g5vd4Eh[sVo36zL78] - 10;
            }
            else
                iumikhJd[sVo36zL78] = iumikhJd[sVo36zL78] + g5vd4Eh[sVo36zL78];
            sVo36zL78++;
        };
    }
    while (iumikhJd[jNVdMJL64s] == 0)
        jNVdMJL64s--;
    {
        sVo36zL78 = jNVdMJL64s;
        while (sVo36zL78 >= 0) {
            cout << iumikhJd[sVo36zL78];
            sVo36zL78--;
        };
    }
    if (jNVdMJL64s < 0)
        cout << 0 << endl;
    return 0;
}

