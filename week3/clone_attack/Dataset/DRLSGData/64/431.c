int main () {
    int eSJYwHP5l8q;
    eSJYwHP5l8q = (449 - 449);
    int yILhSkVaoi;
    int j;
    int a2pTrR;
    int ExgQf3;
    double  m;
    double  PTIgeb83jf [(690 - 590)];
    int r7j8CdRTl [(53 - 43)];
    int PWI9zyYgG [(894 - 884)];
    int z [(343 - 333)];
    double  l [(117 - 107)] [10];
    scanf ("%d", &ExgQf3);
    {
        yILhSkVaoi = (961 - 961);
        while (yILhSkVaoi < ExgQf3) {
            scanf ("%d %d %d", &r7j8CdRTl[yILhSkVaoi], &PWI9zyYgG[yILhSkVaoi], &z[yILhSkVaoi]);
            yILhSkVaoi = yILhSkVaoi + (368 - 367);
        }
    }
    {
        yILhSkVaoi = (26 - 26);
        while (yILhSkVaoi < ExgQf3 -(162 - 161)) {
            {
                j = yILhSkVaoi + (976 - 975);
                while (ExgQf3 > j) {
                    l[yILhSkVaoi][j] = sqrt ((r7j8CdRTl[yILhSkVaoi] - r7j8CdRTl[j]) * (r7j8CdRTl[yILhSkVaoi] - r7j8CdRTl[j]) + (PWI9zyYgG[yILhSkVaoi] - PWI9zyYgG[j]) * (PWI9zyYgG[yILhSkVaoi] - PWI9zyYgG[j]) + (z[yILhSkVaoi] - z[j]) * (z[yILhSkVaoi] - z[j]));
                    PTIgeb83jf[eSJYwHP5l8q] = l[yILhSkVaoi][j];
                    eSJYwHP5l8q = eSJYwHP5l8q + (74 - 73);
                    j = j + (177 - 176);
                }
            }
            yILhSkVaoi = yILhSkVaoi + (100 - 99);
        }
    }
    for (yILhSkVaoi = (524 - 524); yILhSkVaoi < ExgQf3 *ExgQf3; yILhSkVaoi++) {
        j = (584 - 584);
        while (j < ExgQf3 *(ExgQf3 -(838 - 837)) / (698 - 696) - (435 - 434)) {
            if (PTIgeb83jf[j] < PTIgeb83jf[j + (939 - 938)]) {
                m = PTIgeb83jf[j];
                PTIgeb83jf[j] = PTIgeb83jf[j + (188 - 187)];
                PTIgeb83jf[j + (259 - 258)] = m;
            }
            j = j + (273 - 272);
        }
    }
    {
        a2pTrR = (207 - 207);
        while (a2pTrR < ExgQf3 *(ExgQf3 -(569 - 568)) / (41 - 39)) {
            for (; PTIgeb83jf[a2pTrR] == PTIgeb83jf[a2pTrR - (586 - 585)];) {
                a2pTrR = a2pTrR + (550 - 549);
            }
            {
                yILhSkVaoi = (519 - 519);
                while (yILhSkVaoi < ExgQf3 -1) {
                    {
                        j = yILhSkVaoi + 1;
                        while (j < ExgQf3) {
                            if (l[yILhSkVaoi][j] == PTIgeb83jf[a2pTrR]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", r7j8CdRTl[yILhSkVaoi], PWI9zyYgG[yILhSkVaoi], z[yILhSkVaoi], r7j8CdRTl[j], PWI9zyYgG[j], z[j], PTIgeb83jf[a2pTrR]);
                            }
                            j++;
                        }
                    }
                    yILhSkVaoi++;
                }
            }
            a2pTrR = a2pTrR + 1;
        }
    }
    return (708 - 708);
}

