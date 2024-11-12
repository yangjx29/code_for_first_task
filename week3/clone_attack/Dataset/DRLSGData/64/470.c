int main () {
    int n;
    int OkVl65Q3;
    int j;
    int x;
    int y;
    int zr9SijpkUC;
    int mnRbO1;
    mnRbO1 = (927 - 927);
    struct   {
        int x;
        int y;
        int zr9SijpkUC;
    }
    kTmsp9 [10];
    struct   {
        int r0gbWCT;
        int y1;
        int kmStby;
        int x2;
        int y2;
        int z2;
        int TnrYazCf;
        int XgtcblG;
        double  wEz1MLvYiR6n;
    }
    wEz1MLvYiR6n [(419 - 369)];
    cin >> n;
    {
        OkVl65Q3 = (804 - 804);
        for (; OkVl65Q3 < n;) {
            cin >> x >> y >> zr9SijpkUC;
            kTmsp9[OkVl65Q3].x = x;
            kTmsp9[OkVl65Q3].y = y;
            kTmsp9[OkVl65Q3].zr9SijpkUC = zr9SijpkUC;
            OkVl65Q3 = OkVl65Q3 +(516 - 515);
        }
    }
    {
        OkVl65Q3 = (563 - 563);
        for (; OkVl65Q3 < n - (687 - 686);) {
            {
                j = OkVl65Q3 +(781 - 780);
                for (; j < n;) {
                    wEz1MLvYiR6n[mnRbO1].r0gbWCT = kTmsp9[OkVl65Q3].x;
                    wEz1MLvYiR6n[mnRbO1].y1 = kTmsp9[OkVl65Q3].y;
                    wEz1MLvYiR6n[mnRbO1].kmStby = kTmsp9[OkVl65Q3].zr9SijpkUC;
                    wEz1MLvYiR6n[mnRbO1].x2 = kTmsp9[j].x;
                    wEz1MLvYiR6n[mnRbO1].y2 = kTmsp9[j].y;
                    wEz1MLvYiR6n[mnRbO1].z2 = kTmsp9[j].zr9SijpkUC;
                    wEz1MLvYiR6n[mnRbO1].TnrYazCf = OkVl65Q3;
                    wEz1MLvYiR6n[mnRbO1].XgtcblG = j;
                    wEz1MLvYiR6n[mnRbO1].wEz1MLvYiR6n = sqrt ((kTmsp9[OkVl65Q3].x - kTmsp9[j].x) * (kTmsp9[OkVl65Q3].x - kTmsp9[j].x) + (kTmsp9[OkVl65Q3].y - kTmsp9[j].y) * (kTmsp9[OkVl65Q3].y - kTmsp9[j].y) + (kTmsp9[OkVl65Q3].zr9SijpkUC - kTmsp9[j].zr9SijpkUC) * (kTmsp9[OkVl65Q3].zr9SijpkUC - kTmsp9[j].zr9SijpkUC));
                    mnRbO1 = mnRbO1 + (309 - 308);
                    j = j + (785 - 784);
                }
            }
            OkVl65Q3 = OkVl65Q3 +1;
        }
    }
    {
        OkVl65Q3 = (983 - 983);
        for (; OkVl65Q3 < (n - (103 - 102)) * n / (533 - 531) - (530 - 529);) {
            {
                j = OkVl65Q3 +(821 - 820);
                for (; j < (n - (322 - 321)) * n / 2;) {
                    if (wEz1MLvYiR6n[OkVl65Q3].wEz1MLvYiR6n < wEz1MLvYiR6n[j].wEz1MLvYiR6n) {
                        wEz1MLvYiR6n[(658 - 608)] = wEz1MLvYiR6n[OkVl65Q3];
                        wEz1MLvYiR6n[OkVl65Q3] = wEz1MLvYiR6n[j];
                        wEz1MLvYiR6n[j] = wEz1MLvYiR6n[(696 - 646)];
                    }
                    if (wEz1MLvYiR6n[OkVl65Q3].wEz1MLvYiR6n == wEz1MLvYiR6n[j].wEz1MLvYiR6n && wEz1MLvYiR6n[OkVl65Q3].TnrYazCf > wEz1MLvYiR6n[j].TnrYazCf) {
                        wEz1MLvYiR6n[(961 - 911)] = wEz1MLvYiR6n[OkVl65Q3];
                        wEz1MLvYiR6n[OkVl65Q3] = wEz1MLvYiR6n[j];
                        wEz1MLvYiR6n[j] = wEz1MLvYiR6n[(240 - 190)];
                    }
                    if (wEz1MLvYiR6n[OkVl65Q3].wEz1MLvYiR6n == wEz1MLvYiR6n[j].wEz1MLvYiR6n && wEz1MLvYiR6n[OkVl65Q3].TnrYazCf == wEz1MLvYiR6n[j].TnrYazCf && wEz1MLvYiR6n[OkVl65Q3].XgtcblG > wEz1MLvYiR6n[j].XgtcblG) {
                        wEz1MLvYiR6n[(426 - 376)] = wEz1MLvYiR6n[OkVl65Q3];
                        wEz1MLvYiR6n[OkVl65Q3] = wEz1MLvYiR6n[j];
                        wEz1MLvYiR6n[j] = wEz1MLvYiR6n[50];
                    }
                    j = j + (761 - 760);
                }
            }
            OkVl65Q3++;
        }
    }
    cout << fixed;
    {
        j = 0;
        for (; j < n * (n - 1) / 2;) {
            cout << "(" << wEz1MLvYiR6n[j].r0gbWCT << "," << wEz1MLvYiR6n[j].y1 << "," << wEz1MLvYiR6n[j].kmStby << ")-(" << wEz1MLvYiR6n[j].x2 << "," << wEz1MLvYiR6n[j].y2 << "," << wEz1MLvYiR6n[j].z2 << ")=" << setprecision (2) << wEz1MLvYiR6n[j].wEz1MLvYiR6n << endl;
            j = j + 1;
        }
    }
    return 0;
}

