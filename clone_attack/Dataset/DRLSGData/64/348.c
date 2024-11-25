int pXZlTN0i [100] [3];

int main () {
    char dd;
    double  IUI5Ywnj6 [30] [30] = {0}, H6Tq5m8gQPD = 0, tbueH6DdUr [30] [30] = {0};
    int Ej8tDmYVNwT, Fdnvgh4t, UQPfL65nGmZk, rF1GtSrP, sEpbvd6L [100] [2] = {0}, lwre8GV0 = 0;
    cin >> Ej8tDmYVNwT;
    {
        Fdnvgh4t = 0;
        while (Ej8tDmYVNwT > Fdnvgh4t) {
            {
                UQPfL65nGmZk = 0;
                while (UQPfL65nGmZk < 3) {
                    cin >> pXZlTN0i[Fdnvgh4t][UQPfL65nGmZk];
                    UQPfL65nGmZk++;
                }
            }
            Fdnvgh4t++;
        }
    }
    {
        Fdnvgh4t = 0;
        while (Ej8tDmYVNwT > Fdnvgh4t) {
            {
                UQPfL65nGmZk = Ej8tDmYVNwT -1;
                while (UQPfL65nGmZk > Fdnvgh4t) {
                    {
                        rF1GtSrP = 0;
                        while (rF1GtSrP < 3) {
                            IUI5Ywnj6[Fdnvgh4t][UQPfL65nGmZk] = IUI5Ywnj6[Fdnvgh4t][UQPfL65nGmZk] + (pXZlTN0i[Fdnvgh4t][rF1GtSrP] - pXZlTN0i[UQPfL65nGmZk][rF1GtSrP]) * (pXZlTN0i[Fdnvgh4t][rF1GtSrP] - pXZlTN0i[UQPfL65nGmZk][rF1GtSrP]);
                            rF1GtSrP = rF1GtSrP + 1;
                        }
                    }
                    IUI5Ywnj6[Fdnvgh4t][UQPfL65nGmZk] = sqrt (IUI5Ywnj6[Fdnvgh4t][UQPfL65nGmZk]);
                    tbueH6DdUr[Fdnvgh4t][UQPfL65nGmZk] = IUI5Ywnj6[Fdnvgh4t][UQPfL65nGmZk];
                    UQPfL65nGmZk--;
                }
            }
            Fdnvgh4t++;
        }
    }
    {
        rF1GtSrP = 1;
        while (Ej8tDmYVNwT > rF1GtSrP) {
            lwre8GV0 = lwre8GV0 + rF1GtSrP;
            rF1GtSrP++;
        }
    }
    {
        rF1GtSrP = 0;
        while (lwre8GV0 > rF1GtSrP) {
            H6Tq5m8gQPD = 0;
            {
                Fdnvgh4t = 0;
                while (Fdnvgh4t < Ej8tDmYVNwT) {
                    {
                        UQPfL65nGmZk = Fdnvgh4t +1;
                        while (UQPfL65nGmZk < Ej8tDmYVNwT) {
                            if (tbueH6DdUr[Fdnvgh4t][UQPfL65nGmZk] > H6Tq5m8gQPD) {
                                H6Tq5m8gQPD = tbueH6DdUr[Fdnvgh4t][UQPfL65nGmZk];
                                sEpbvd6L[rF1GtSrP][0] = Fdnvgh4t;
                                sEpbvd6L[rF1GtSrP][1] = UQPfL65nGmZk;
                            }
                            UQPfL65nGmZk++;
                        }
                    }
                    Fdnvgh4t++;
                }
            }
            tbueH6DdUr[sEpbvd6L[rF1GtSrP][0]][sEpbvd6L[rF1GtSrP][1]] = 0;
            rF1GtSrP++;
        }
    }
    {
        rF1GtSrP = 0;
        while (rF1GtSrP < lwre8GV0) {
            cout << '(' << pXZlTN0i[sEpbvd6L[rF1GtSrP][0]][0] << ',' << pXZlTN0i[sEpbvd6L[rF1GtSrP][0]][1] << ',' << pXZlTN0i[sEpbvd6L[rF1GtSrP][0]][2] << ')' << '-' << '(' << pXZlTN0i[sEpbvd6L[rF1GtSrP][1]][0] << ',' << pXZlTN0i[sEpbvd6L[rF1GtSrP][1]][1] << ',' << pXZlTN0i[sEpbvd6L[rF1GtSrP][1]][2] << ')' << '=' << fixed << setprecision (2) << IUI5Ywnj6[sEpbvd6L[rF1GtSrP][0]][sEpbvd6L[rF1GtSrP][1]] << endl;
            rF1GtSrP++;
        }
    }
    cin >> dd;
    return 0;
}

