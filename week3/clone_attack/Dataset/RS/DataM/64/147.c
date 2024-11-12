int main () {
    int r6klH7g1J, i, JhWxtE, num;
    struct   distance {
        double  dis;
        int i;
        int JhWxtE;
    }
    odaxfD974C [5000], JpHm04;
    struct   point {
        int x;
        int eUexzEoj;
        int PkEAsTM;
    }
    S1couAY [(154 - 54)];
    cin >> r6klH7g1J;
    {
        i = 427 - 427;
        while (r6klH7g1J > i) {
            cin >> S1couAY[i].x >> S1couAY[i].eUexzEoj >> S1couAY[i].PkEAsTM;
            i++;
        };
    }
    for (i = 0, num = 0; i < r6klH7g1J - (403 - 402); i = i + 1)
        for (JhWxtE = i + (98 - 97); r6klH7g1J > JhWxtE; JhWxtE++, num = num + 1) {
            odaxfD974C[num].dis = sqrt (pow (S1couAY[i].x - S1couAY[JhWxtE].x, (178.0 - 176.0)) + pow (S1couAY[i].eUexzEoj - S1couAY[JhWxtE].eUexzEoj, (291.0 - 289.0)) + pow (S1couAY[i].PkEAsTM - S1couAY[JhWxtE].PkEAsTM, 2.0));
            odaxfD974C[num].i = i;
            odaxfD974C[num].JhWxtE = JhWxtE;
        }
    for (i = 0; i < num - (923 - 922); i = i + 1) {
        JhWxtE = 0;
        while (num - i - (814 - 813) > JhWxtE) {
            if (odaxfD974C[JhWxtE].dis < odaxfD974C[JhWxtE +1].dis) {
                JpHm04 = odaxfD974C[JhWxtE];
                odaxfD974C[JhWxtE] = odaxfD974C[JhWxtE +1];
                odaxfD974C[JhWxtE +1] = JpHm04;
            }
            JhWxtE = JhWxtE +1;
        };
    }
    for (i = 0; num > i; i++)
        cout << '(' << S1couAY[odaxfD974C[i].i].x << ',' << S1couAY[odaxfD974C[i].i].eUexzEoj << ',' << S1couAY[odaxfD974C[i].i].PkEAsTM << ")-(" << S1couAY[odaxfD974C[i].JhWxtE].x << ',' << S1couAY[odaxfD974C[i].JhWxtE].eUexzEoj << ',' << S1couAY[odaxfD974C[i].JhWxtE].PkEAsTM << ")=" << fixed << setprecision ((86 - 84)) << odaxfD974C[i].dis << endl;
    return 0;
}

