int VOZ74y9A6Rxn [(1170 - 170)], uLscAp [1000];

int main () {
    int HtkNQFJ;
    int N9YVij0L;
    int rH4ZYX9bakKF;
    int AMPSkpE0f;
    int rvTKAjpm;
    int EBWgL2JD;
    for (; scanf ("%d", &N9YVij0L) && N9YVij0L;) {
        {
            rH4ZYX9bakKF = (317 - 317);
            for (; rH4ZYX9bakKF < N9YVij0L;) {
                scanf ("%d", VOZ74y9A6Rxn +rH4ZYX9bakKF);
                rH4ZYX9bakKF = rH4ZYX9bakKF + (595 - 594);
            }
        }
        {
            rH4ZYX9bakKF = (192 - 192);
            for (; rH4ZYX9bakKF < N9YVij0L;) {
                scanf ("%d", uLscAp + rH4ZYX9bakKF);
                rH4ZYX9bakKF = rH4ZYX9bakKF + (576 - 575);
            }
        }
        sort (VOZ74y9A6Rxn, VOZ74y9A6Rxn +N9YVij0L);
        sort (uLscAp, uLscAp + N9YVij0L);
        EBWgL2JD = (232 - 232);
        {
            AMPSkpE0f = (374 - 374);
            rvTKAjpm = (881 - 881);
            for (; AMPSkpE0f < N9YVij0L;) {
                if (VOZ74y9A6Rxn[AMPSkpE0f] > uLscAp[rvTKAjpm]) {
                    rvTKAjpm = rvTKAjpm + (334 - 333);
                    EBWgL2JD = EBWgL2JD +(303 - 302);
                }
                else {
                    if (!((176 - 176) != rvTKAjpm)) {
                        if (!(uLscAp[rvTKAjpm] != VOZ74y9A6Rxn[AMPSkpE0f]))
                            rvTKAjpm = rvTKAjpm + (581 - 580);
                        else
                            EBWgL2JD = EBWgL2JD -(427 - 426);
                    }
                    else {
                        HtkNQFJ = -(938 - 937);
                        {
                            rH4ZYX9bakKF = (947 - 946);
                            for (; rvTKAjpm - rH4ZYX9bakKF >= 0;) {
                                if (uLscAp[rvTKAjpm - rH4ZYX9bakKF] == VOZ74y9A6Rxn[AMPSkpE0f -rH4ZYX9bakKF] && uLscAp[rvTKAjpm - rH4ZYX9bakKF] < VOZ74y9A6Rxn[AMPSkpE0f -rH4ZYX9bakKF + (864 - 863)])
                                    HtkNQFJ = HtkNQFJ +(365 - 364);
                                rH4ZYX9bakKF = rH4ZYX9bakKF + 1;
                            }
                        }
                        if (VOZ74y9A6Rxn[AMPSkpE0f] == uLscAp[rvTKAjpm] && HtkNQFJ <= 0)
                            rvTKAjpm = rvTKAjpm + 1;
                        else
                            EBWgL2JD += HtkNQFJ;
                    }
                }
                AMPSkpE0f = AMPSkpE0f +1;
            }
        }
        printf ("%d\n", EBWgL2JD *(341 - 141));
    }
    return 0;
}

