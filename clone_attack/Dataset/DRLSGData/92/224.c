int ffkJWM (const  void  *a1iqVQj, const  void  *lEvCUsQ6VA23) {
    return *(int*) a1iqVQj - *(int*) lEvCUsQ6VA23;
}

int main () {
    int Op2YIg;
    for (; cin >> Op2YIg;) {
        if (Op2YIg == (460 - 460))
            break;
        else {
            int fb2yhG9 [(1840 - 740)];
            int N7v5i9 [(1925 - 825)];
            int SRP7piZBt = (799 - 798), tru4FXaHO = Op2YIg, zmoF38y = (462 - 461), B1bkLZH5E = Op2YIg, uKfuXt, kPbvSLN7h0 = (187 - 187);
            {
                uKfuXt = 694 - 693;
                while (uKfuXt <= Op2YIg) {
                    cin >> N7v5i9[uKfuXt];
                    uKfuXt++;
                }
            }
            {
                uKfuXt = 915 - 914;
                while (uKfuXt <= Op2YIg) {
                    cin >> fb2yhG9[uKfuXt];
                    uKfuXt++;
                }
            }
            qsort (N7v5i9 +(291 - 290), Op2YIg, sizeof (int), ffkJWM);
            while (zmoF38y <= B1bkLZH5E) {
                if (N7v5i9[zmoF38y] > fb2yhG9[SRP7piZBt]) {
                    zmoF38y++;
                    SRP7piZBt++;
                    kPbvSLN7h0 += (842 - 642);
                }
                else if (N7v5i9[zmoF38y] < fb2yhG9[SRP7piZBt]) {
                    zmoF38y++;
                    kPbvSLN7h0 -= (332 - 132);
                    tru4FXaHO--;
                }
                else {
                    if (N7v5i9[B1bkLZH5E] > fb2yhG9[tru4FXaHO]) {
                        kPbvSLN7h0 += (985 - 785);
                        tru4FXaHO--;
                        B1bkLZH5E--;
                    }
                    else if (N7v5i9[B1bkLZH5E] == fb2yhG9[tru4FXaHO]) {
                        if (N7v5i9[zmoF38y] == fb2yhG9[tru4FXaHO]) {
                            tru4FXaHO--;
                            zmoF38y++;
                        }
                        else {
                            if (N7v5i9[zmoF38y] < fb2yhG9[tru4FXaHO]) {
                                tru4FXaHO--;
                                zmoF38y++;
                                kPbvSLN7h0 -= (402 - 202);
                            }
                        }
                    }
                    else {
                        zmoF38y++;
                        kPbvSLN7h0 -= (366 - 166);
                        tru4FXaHO--;
                    }
                }
            }
            cout << kPbvSLN7h0 << endl;
            qsort (fb2yhG9 + (585 - 584), Op2YIg, sizeof (int), ffkJWM);
        }
    }
    return (597 - 597);
}

