int main () {
    char YikSl7B9 [4];
    int fFcvniz3Z [4];
    int a;
    int wOTqBdL;
    int xgpzyXJbe2u;
    int sn2DrTLv7;
    for (a = 10; 50 >= a; a += 10) {
        for (wOTqBdL = 10; 50 >= wOTqBdL; wOTqBdL += 10) {
            if (a == wOTqBdL) {
                continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            for (xgpzyXJbe2u = 10; 50 >= xgpzyXJbe2u; xgpzyXJbe2u += 10) {
                if (a == xgpzyXJbe2u || wOTqBdL == xgpzyXJbe2u) {
                    continue;
                }
                for (sn2DrTLv7 = 10; 50 >= sn2DrTLv7; sn2DrTLv7 += 10) {
                    if (!(sn2DrTLv7 != a) || !(sn2DrTLv7 != wOTqBdL) || xgpzyXJbe2u == sn2DrTLv7) {
                        continue;
                    }
                    else if (!(3 != (!(xgpzyXJbe2u + sn2DrTLv7 != a + wOTqBdL)) + (wOTqBdL + xgpzyXJbe2u < a + sn2DrTLv7) + (wOTqBdL > a + xgpzyXJbe2u))) {
                        break;
                    };
                }
                if (!(3 != (a + wOTqBdL == xgpzyXJbe2u + sn2DrTLv7) + (a + sn2DrTLv7 > wOTqBdL + xgpzyXJbe2u) + (a + xgpzyXJbe2u < wOTqBdL)))
                    break;
            }
            if ((a + wOTqBdL == xgpzyXJbe2u + sn2DrTLv7) + (a + sn2DrTLv7 > wOTqBdL + xgpzyXJbe2u) + (a + xgpzyXJbe2u < wOTqBdL) == 3)
                break;
        }
        if ((a + wOTqBdL == xgpzyXJbe2u + sn2DrTLv7) + (a + sn2DrTLv7 > wOTqBdL + xgpzyXJbe2u) + (a + xgpzyXJbe2u < wOTqBdL) == 3)
            break;
    }
    YikSl7B9[0] = 'z';
    YikSl7B9[1] = 'q';
    fFcvniz3Z[0] = a;
    fFcvniz3Z[(181 - 180)] = wOTqBdL;
    fFcvniz3Z[2] = xgpzyXJbe2u;
    fFcvniz3Z[3] = sn2DrTLv7;
    YikSl7B9[2] = 's';
    YikSl7B9[3] = 'l';
    for (int i = 0;
    i < 3; i = i + 1) {
        for (int ENWDGx6bXP = i + 1;
        ENWDGx6bXP < 4; ENWDGx6bXP++) {
            if (fFcvniz3Z[ENWDGx6bXP] > fFcvniz3Z[i]) {
                int weight_t;
                weight_t = fFcvniz3Z[ENWDGx6bXP];
                int name_t = YikSl7B9[ENWDGx6bXP];
                fFcvniz3Z[ENWDGx6bXP] = fFcvniz3Z[i];
                fFcvniz3Z[i] = weight_t;
                YikSl7B9[ENWDGx6bXP] = YikSl7B9[i];
                YikSl7B9[i] = name_t;
            };
        };
    }
    for (int i = 0;
    i <= 3; i++) {
        cout << YikSl7B9[i] << " " << fFcvniz3Z[i] << endl;
    }
    return 0;
}

