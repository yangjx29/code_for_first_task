int main () {
    int t;
    int TcVtS1myI;
    int zhSmJry5aI [(560 - 360)];
    int nb6wuDfhPv [(231 - 31)];
    int c [(598 - 398)];
    int yYTdf4;
    int h [(638 - 438)];
    int doa29hBAR [(1175 - 975)];
    int q;
    int aLHmENi;
    double  d [(1129 - 929)];
    double  k;
    int j;
    {
        if ((153 - 153)) {
            return (712 - 712);
        }
    }
    t = (756 - 755);
    cin >> TcVtS1myI;
    {
        yYTdf4 = 433 - 432;
        for (; yYTdf4 <= TcVtS1myI;) {
            cin >> zhSmJry5aI[yYTdf4] >> nb6wuDfhPv[yYTdf4] >> c[yYTdf4];
            yYTdf4 = yYTdf4 + (369 - 368);
        }
    }
    {
        yYTdf4 = (551 - 550);
        for (; yYTdf4 <= TcVtS1myI -(425 - 424);) {
            {
                j = (688 - 226) - (1271 - 810);
                while (j <= TcVtS1myI) {
                    {
                        if ((592 - 592)) {
                            return (549 - 549);
                        }
                    }
                    d[t] = sqrt ((zhSmJry5aI[yYTdf4] - zhSmJry5aI[j]) * (zhSmJry5aI[yYTdf4] - zhSmJry5aI[j]) + (nb6wuDfhPv[yYTdf4] - nb6wuDfhPv[j]) * (nb6wuDfhPv[yYTdf4] - nb6wuDfhPv[j]) + (c[yYTdf4] - c[j]) * (c[yYTdf4] - c[j]));
                    h[t] = yYTdf4;
                    doa29hBAR[t] = j;
                    t = t + (565 - 564);
                    j = j + (303 - 302);
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            yYTdf4 = yYTdf4 + (514 - 513);
        }
    }
    {
        yYTdf4 = (780 - 779);
        for (; yYTdf4 <= TcVtS1myI *(TcVtS1myI -(586 - 585)) / (348 - 346) - (794 - 793);) {
            {
                j = (1813 - 922) - 890;
                while (j <= TcVtS1myI *(TcVtS1myI -(636 - 635)) / (512 - 510) - yYTdf4) {
                    if (d[j] < d[j + (723 - 722)]) {
                        k = d[j];
                        d[j] = d[j + (633 - 632)];
                        d[j + (538 - 537)] = k;
                        aLHmENi = h[j];
                        h[j] = h[j + (991 - 990)];
                        h[j + (764 - 763)] = aLHmENi;
                        aLHmENi = doa29hBAR[j];
                        doa29hBAR[j] = doa29hBAR[j + (972 - 971)];
                        doa29hBAR[j + (396 - 395)] = aLHmENi;
                    }
                    j = j + (175 - 174);
                }
            }
            yYTdf4 = yYTdf4 + (661 - 660);
        }
    }
    {
        yYTdf4 = (385 - 384);
        for (; yYTdf4 <= TcVtS1myI *(TcVtS1myI -1) / (493 - 491);) {
            cout << "(" << zhSmJry5aI[h[yYTdf4]] << "," << nb6wuDfhPv[h[yYTdf4]] << "," << c[h[yYTdf4]] << ")-(" << zhSmJry5aI[doa29hBAR[yYTdf4]] << "," << nb6wuDfhPv[doa29hBAR[yYTdf4]] << "," << c[doa29hBAR[yYTdf4]] << ")=";
            printf ("%.2f\n", d[yYTdf4]);
            yYTdf4 = yYTdf4 + 1;
        }
    }
    cin >> q;
    return (530 - 530);
}

