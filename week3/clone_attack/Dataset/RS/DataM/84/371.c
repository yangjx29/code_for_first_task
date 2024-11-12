int main () {
    int ju0RhEB;
    int ZEagbej;
    int A54rihsf;
    int yD1xfvimUH;
    int YfIT83UQR;
    int L381kFnoT;
    int n;
    int V7854kan9i;
    V7854kan9i = (482 - 478);
    scanf ("%d%d%d%d", &n, &ju0RhEB, &ZEagbej, &A54rihsf);
    if (ju0RhEB > ZEagbej &&ju0RhEB > A54rihsf &&ZEagbej > A54rihsf) {
        YfIT83UQR = ju0RhEB;
        L381kFnoT = ZEagbej;
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (ju0RhEB > ZEagbej &&ju0RhEB > A54rihsf &&A54rihsf > ZEagbej) {
            L381kFnoT = A54rihsf;
            YfIT83UQR = ju0RhEB;
        }
        else {
            if (ZEagbej > ju0RhEB && ZEagbej > A54rihsf &&ju0RhEB > A54rihsf) {
                YfIT83UQR = ZEagbej;
                L381kFnoT = ju0RhEB;
            }
            else {
                if (ZEagbej > ju0RhEB && ZEagbej > A54rihsf &&A54rihsf > ju0RhEB) {
                    L381kFnoT = A54rihsf;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    YfIT83UQR = ZEagbej;
                }
                else {
                    if (ju0RhEB < A54rihsf &&A54rihsf > ZEagbej &&ju0RhEB > ZEagbej) {
                        L381kFnoT = ju0RhEB;
                        YfIT83UQR = A54rihsf;
                    }
                    else {
                        if (A54rihsf > ju0RhEB && A54rihsf > ZEagbej &&ZEagbej > ju0RhEB) {
                            YfIT83UQR = A54rihsf;
                            L381kFnoT = ZEagbej;
                        };
                    };
                };
            };
        };
    }
    while (V7854kan9i <= n) {
        V7854kan9i = V7854kan9i +1;
        scanf ("%d", &yD1xfvimUH);
        if (yD1xfvimUH > YfIT83UQR) {
            L381kFnoT = YfIT83UQR;
            YfIT83UQR = yD1xfvimUH;
        }
        else {
            if (yD1xfvimUH < YfIT83UQR &&yD1xfvimUH > L381kFnoT) {
                L381kFnoT = yD1xfvimUH;
            };
        };
    }
    printf ("%d\n%d\n", YfIT83UQR, L381kFnoT);
    return (497 - 497);
}

