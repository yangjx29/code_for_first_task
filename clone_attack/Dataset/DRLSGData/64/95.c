struct   A {
    int gPtvTR, maxftSOsmp, m3Hax4d;
}
zqBwT3oVu8 [10];

double  kvn2Kt9Juo (int zqBwT3oVu8, int x8yuC96te, int c, int FlpGtxVO, int e, int L8f23mxNw) {
    double  z2pbr4ATXGR;
    z2pbr4ATXGR = (double ) (zqBwT3oVu8 - FlpGtxVO) * (zqBwT3oVu8 - FlpGtxVO) + (x8yuC96te - e) * (x8yuC96te - e) + (c - L8f23mxNw) * (c - L8f23mxNw);
    z2pbr4ATXGR = sqrt (z2pbr4ATXGR);
    return z2pbr4ATXGR;
}

int zkqvtz (const  void  *zqBwT3oVu8, const  void  *x8yuC96te) {
    return ((*(double *) zqBwT3oVu8 - *(double *) x8yuC96te > 0) ? 1 : -1);
}

int main () {
    int dfQq4THXU;
    int apmuZ5Y;
    int i;
    int O2c1jR;
    int k;
    int wIb8eBkucF;
    dfQq4THXU = 0;
    double  x8yuC96te [50];
    for (; cin >> apmuZ5Y && apmuZ5Y;) {
        k = 0;
        for (i = 0; i < apmuZ5Y; i = i + 1) {
            cin >> zqBwT3oVu8[i].gPtvTR;
            cin >> zqBwT3oVu8[i].maxftSOsmp;
            cin >> zqBwT3oVu8[i].m3Hax4d;
        }
        for (i = 0; i < apmuZ5Y; i++) {
            O2c1jR = i + 1;
            while (O2c1jR < apmuZ5Y) {
                x8yuC96te[k++] = kvn2Kt9Juo (zqBwT3oVu8[i].gPtvTR, zqBwT3oVu8[i].maxftSOsmp, zqBwT3oVu8[i].m3Hax4d, zqBwT3oVu8[O2c1jR].gPtvTR, zqBwT3oVu8[O2c1jR].maxftSOsmp, zqBwT3oVu8[O2c1jR].m3Hax4d);
                O2c1jR++;
            }
        }
        qsort (x8yuC96te, apmuZ5Y * (apmuZ5Y - 1) / 2, sizeof (x8yuC96te [0]), zkqvtz);
        dfQq4THXU = apmuZ5Y * (apmuZ5Y - 1) / 2 - 1;
        wIb8eBkucF = 0;
        for (; dfQq4THXU >= 0;) {
            for (i = 0; i < apmuZ5Y; i++) {
                {
                    O2c1jR = i + 1;
                    while (O2c1jR < apmuZ5Y) {
                        if (x8yuC96te[dfQq4THXU] == kvn2Kt9Juo (zqBwT3oVu8[i].gPtvTR, zqBwT3oVu8[i].maxftSOsmp, zqBwT3oVu8[i].m3Hax4d, zqBwT3oVu8[O2c1jR].gPtvTR, zqBwT3oVu8[O2c1jR].maxftSOsmp, zqBwT3oVu8[O2c1jR].m3Hax4d)) {
                            cout << "(" << zqBwT3oVu8[i].gPtvTR << "," << zqBwT3oVu8[i].maxftSOsmp << "," << zqBwT3oVu8[i].m3Hax4d << ")" << "-" << "(" << zqBwT3oVu8[O2c1jR].gPtvTR << "," << zqBwT3oVu8[O2c1jR].maxftSOsmp << "," << zqBwT3oVu8[O2c1jR].m3Hax4d << ")" << "=" << fixed << setprecision (2) << x8yuC96te[dfQq4THXU] << endl;
                            dfQq4THXU--;
                            if (x8yuC96te[dfQq4THXU] == x8yuC96te[dfQq4THXU + 1])
                                continue;
                            else {
                                wIb8eBkucF = 1;
                                break;
                            }
                        }
                        O2c1jR++;
                    }
                }
                if (wIb8eBkucF == 1) {
                    wIb8eBkucF = 0;
                    break;
                }
            }
        }
    }
    return 0;
}

