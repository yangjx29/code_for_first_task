int main () {
    int n;
    int qOLhaJ [(590 - 580)] [3];
    double  d [45] [3];
    int kbIf5v;
    kbIf5v = (278 - 278);
    double  eSJtCvH1ZAk2;
    cin >> n;
    {
        int t;
        t = (706 - 706);
        for (; n > t;) {
            {
                if ((643 - 643)) {
                    return (817 - 817);
                }
            }
            cin >> qOLhaJ[t][(811 - 811)] >> qOLhaJ[t][(360 - 359)] >> qOLhaJ[t][(108 - 106)];
            t = t + (803 - 802);
        }
    }
    for (int uRYmcbn = (448 - 448);
    uRYmcbn < n; uRYmcbn = uRYmcbn + (93 - 92)) {
        int CB1lZw;
        CB1lZw = uRYmcbn + (333 - 332);
        for (; CB1lZw < n;) {
            d[kbIf5v][(415 - 415)] = uRYmcbn;
            d[kbIf5v][(408 - 407)] = CB1lZw;
            d[kbIf5v][(737 - 735)] = sqrt ((qOLhaJ[uRYmcbn][(572 - 572)] - qOLhaJ[CB1lZw][(598 - 598)]) * (qOLhaJ[uRYmcbn][(239 - 239)] - qOLhaJ[CB1lZw][(440 - 440)]) + (qOLhaJ[uRYmcbn][(565 - 564)] - qOLhaJ[CB1lZw][(19 - 18)]) * (qOLhaJ[uRYmcbn][(768 - 767)] - qOLhaJ[CB1lZw][(794 - 793)]) + (qOLhaJ[uRYmcbn][(235 - 233)] - qOLhaJ[CB1lZw][2]) * (qOLhaJ[uRYmcbn][2] - qOLhaJ[CB1lZw][2]));
            kbIf5v = kbIf5v + (78 - 77);
            CB1lZw = CB1lZw +(74 - 73);
        }
    }
    for (int uRYmcbn = (979 - 979);
    uRYmcbn < kbIf5v - 1; uRYmcbn = uRYmcbn + 1) {
        int CB1lZw;
        CB1lZw = 0;
        for (; kbIf5v - 1 - uRYmcbn > CB1lZw;) {
            if (d[CB1lZw +1][2] > d[CB1lZw][2]) {
                eSJtCvH1ZAk2 = d[CB1lZw][2];
                d[CB1lZw][2] = d[CB1lZw +1][2];
                d[CB1lZw +1][2] = eSJtCvH1ZAk2;
                eSJtCvH1ZAk2 = d[CB1lZw][0];
                d[CB1lZw][0] = d[CB1lZw +1][0];
                d[CB1lZw +1][0] = eSJtCvH1ZAk2;
                eSJtCvH1ZAk2 = d[CB1lZw][1];
                d[CB1lZw][1] = d[CB1lZw +1][1];
                d[CB1lZw +1][1] = eSJtCvH1ZAk2;
            }
            CB1lZw = CB1lZw +1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        int t;
        t = 0;
        for (; t < kbIf5v;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%0.2lf\n", qOLhaJ[(int) d[t][0]][0], qOLhaJ[(int) d[t][0]][1], qOLhaJ[(int) d[t][0]][2], qOLhaJ[(int) d[t][1]][0], qOLhaJ[(int) d[t][1]][1], qOLhaJ[(int) d[t][1]][2], d[t][2]);
            t = t + 1;
        }
    }
    return 0;
}

