int t0IGs1f8c2 (const  void  *aROlHZ5KV, const  void  *q) {
    return *((int *) aROlHZ5KV) - *((int *) q);
}

int main () {
    int i;
    int OqVinxCpgN;
    int SaAHhiCDZx7 [(1333 - 333)];
    int q [(1082 - 82)];
    while (cin >> OqVinxCpgN) {
        int kBRbhF8spM;
        int tmin;
        int a9bZDn1JBv;
        int YGVreo1F;
        int qmin;
        if (!((387 - 387) != OqVinxCpgN))
            break;
        {
            i = (697 - 697);
            while (OqVinxCpgN > i) {
                cin >> SaAHhiCDZx7[i];
                i++;
            }
        }
        {
            i = (390 - 390);
            while (i < OqVinxCpgN) {
                cin >> q[i];
                i++;
            }
        }
        tmin = (502 - 502);
        qmin = (780 - 780);
        YGVreo1F = OqVinxCpgN -(511 - 510);
        a9bZDn1JBv = OqVinxCpgN -(640 - 639);
        qsort (SaAHhiCDZx7, OqVinxCpgN, sizeof (int), t0IGs1f8c2);
        qsort (q, OqVinxCpgN, sizeof (int), t0IGs1f8c2);
        kBRbhF8spM = (912 - 912);
        while (tmin <= a9bZDn1JBv) {
            if (SaAHhiCDZx7[a9bZDn1JBv] < q[YGVreo1F]) {
                tmin++;
                YGVreo1F--;
                kBRbhF8spM--;
            }
            else {
                if (SaAHhiCDZx7[a9bZDn1JBv] > q[YGVreo1F]) {
                    a9bZDn1JBv--;
                    YGVreo1F--;
                    kBRbhF8spM++;
                }
                else {
                    if (SaAHhiCDZx7[tmin] > q[qmin]) {
                        kBRbhF8spM++;
                        tmin++;
                        qmin++;
                    }
                    else {
                        if (SaAHhiCDZx7[tmin] < q[qmin]) {
                            YGVreo1F--;
                            kBRbhF8spM--;
                            tmin++;
                        }
                        else {
                            if (SaAHhiCDZx7[a9bZDn1JBv] > SaAHhiCDZx7[tmin]) {
                                kBRbhF8spM--;
                                tmin++;
                                YGVreo1F--;
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << kBRbhF8spM * (947 - 747) << endl;
    }
    return 0;
}

