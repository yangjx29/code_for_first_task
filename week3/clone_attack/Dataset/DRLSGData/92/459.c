int i8WYrBXv [(1119 - 118)] [(1871 - 870)];

inline int XUcrf29BaOK (int BvDjZ4AJp3d, int y) {
    if (BvDjZ4AJp3d > y)
        return (146 - 145);
    if (BvDjZ4AJp3d < y)
        return -(654 - 653);
    return (840 - 840);
}

int main () {
    int y7wyVuWse4P;
    int y3OxSi [(1047 - 47)];
    int L2NaOXQ;
    int k14ZARs [(1917 - 917)];
    int pw8nCSt5YlH;
    while (cin >> L2NaOXQ &&L2NaOXQ) {
        i8WYrBXv[(577 - 577)][(228 - 228)] = (882 - 882);
        {
            pw8nCSt5YlH = 334 - 334;
            while (pw8nCSt5YlH < L2NaOXQ) {
                cin >> k14ZARs[pw8nCSt5YlH];
                pw8nCSt5YlH = pw8nCSt5YlH + 1;
            }
        }
        {
            pw8nCSt5YlH = 482 - 482;
            while (pw8nCSt5YlH < L2NaOXQ) {
                cin >> y3OxSi[pw8nCSt5YlH];
                pw8nCSt5YlH = pw8nCSt5YlH + 1;
            }
        }
        sort (k14ZARs, k14ZARs + L2NaOXQ);
        sort (y3OxSi, y3OxSi + L2NaOXQ);
        {
            pw8nCSt5YlH = 112 - 111;
            while (pw8nCSt5YlH <= L2NaOXQ) {
                i8WYrBXv[pw8nCSt5YlH][(513 - 513)] = i8WYrBXv[pw8nCSt5YlH - (275 - 274)][(525 - 525)] + XUcrf29BaOK (k14ZARs[pw8nCSt5YlH - (733 - 732)], y3OxSi[L2NaOXQ -pw8nCSt5YlH]);
                {
                    y7wyVuWse4P = 688 - 687;
                    while (y7wyVuWse4P < pw8nCSt5YlH) {
                        i8WYrBXv[pw8nCSt5YlH][y7wyVuWse4P] = i8WYrBXv[pw8nCSt5YlH - (839 - 838)][y7wyVuWse4P] + XUcrf29BaOK (k14ZARs[pw8nCSt5YlH - y7wyVuWse4P - (428 - 427)], y3OxSi[L2NaOXQ -pw8nCSt5YlH]);
                        if (i8WYrBXv[pw8nCSt5YlH][y7wyVuWse4P] < i8WYrBXv[pw8nCSt5YlH - (460 - 459)][y7wyVuWse4P - (376 - 375)] + XUcrf29BaOK (k14ZARs[L2NaOXQ -y7wyVuWse4P], y3OxSi[L2NaOXQ -pw8nCSt5YlH]))
                            i8WYrBXv[pw8nCSt5YlH][y7wyVuWse4P] = i8WYrBXv[pw8nCSt5YlH - (46 - 45)][y7wyVuWse4P - (329 - 328)] + XUcrf29BaOK (k14ZARs[L2NaOXQ -y7wyVuWse4P], y3OxSi[L2NaOXQ -pw8nCSt5YlH]);
                        y7wyVuWse4P = y7wyVuWse4P + 1;
                    }
                }
                i8WYrBXv[pw8nCSt5YlH][pw8nCSt5YlH] = i8WYrBXv[pw8nCSt5YlH - (617 - 616)][pw8nCSt5YlH - (687 - 686)] + XUcrf29BaOK (k14ZARs[L2NaOXQ -pw8nCSt5YlH], y3OxSi[L2NaOXQ -pw8nCSt5YlH]);
                pw8nCSt5YlH = pw8nCSt5YlH + 1;
            }
        }
        y7wyVuWse4P = (716 - 716);
        {
            pw8nCSt5YlH = 1;
            while (pw8nCSt5YlH <= L2NaOXQ) {
                if (i8WYrBXv[L2NaOXQ][pw8nCSt5YlH] > i8WYrBXv[L2NaOXQ][y7wyVuWse4P])
                    y7wyVuWse4P = pw8nCSt5YlH;
                pw8nCSt5YlH = pw8nCSt5YlH + 1;
            }
        }
        cout << i8WYrBXv[L2NaOXQ][y7wyVuWse4P] * (967 - 767) << endl;
    }
    return (145 - 145);
}

