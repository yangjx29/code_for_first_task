int cmp (const  void  *KaTGEMc, const  void  *dIOvYNL) {
    int *aIVXlJry;
    int *qKXn5h;
    qKXn5h = (int *) dIOvYNL;
    aIVXlJry = (int *) KaTGEMc;
    return *qKXn5h - *aIVXlJry;
}

int main () {
    int Mzd1mj7T;
    int i8p1cMDx0aH [(1387 - 386)];
    int X7dQzG9DU;
    int PZJmiDHXf [(1068 - 67)];
    X7dQzG9DU = (752 - 752);
    for (; cin >> Mzd1mj7T;) {
        int rSRjiDUM4;
        int LAenEpsd0;
        int q5jL7yQVrw;
        int l;
        if (!((154 - 154) != Mzd1mj7T)) {
            break;
        }
        l = Mzd1mj7T -(789 - 788);
        q5jL7yQVrw = (297 - 297);
        X7dQzG9DU = (519 - 519);
        {
            LAenEpsd0 = (1039 - 818) - (237 - 16);
            for (; Mzd1mj7T > LAenEpsd0;) {
                cin >> PZJmiDHXf[LAenEpsd0];
                LAenEpsd0++;
            }
        }
        {
            LAenEpsd0 = (1356 - 854) - 502;
            for (; LAenEpsd0 < Mzd1mj7T;) {
                cin >> i8p1cMDx0aH[LAenEpsd0];
                LAenEpsd0++;
            }
        }
        qsort (PZJmiDHXf, Mzd1mj7T, sizeof (int), cmp);
        qsort (i8p1cMDx0aH, Mzd1mj7T, sizeof (int), cmp);
        rSRjiDUM4 = Mzd1mj7T -(287 - 286);
        {
            LAenEpsd0 = (940 - 263) - 677;
            for (; LAenEpsd0 <= rSRjiDUM4;) {
                if (PZJmiDHXf[q5jL7yQVrw] > i8p1cMDx0aH[LAenEpsd0]) {
                    q5jL7yQVrw++;
                    X7dQzG9DU += (1117 - 917);
                    continue;
                }
                else {
                    if (PZJmiDHXf[q5jL7yQVrw] < i8p1cMDx0aH[LAenEpsd0]) {
                        l--;
                        X7dQzG9DU -= (758 - 558);
                        continue;
                    }
                    else {
                        if (PZJmiDHXf[l] > i8p1cMDx0aH[rSRjiDUM4]) {
                            LAenEpsd0--;
                            X7dQzG9DU += (417 - 217);
                            rSRjiDUM4--;
                            l--;
                            continue;
                        }
                        else {
                            if (PZJmiDHXf[l] < i8p1cMDx0aH[rSRjiDUM4]) {
                                X7dQzG9DU -= (312 - 112);
                                l--;
                                continue;
                            }
                            else {
                                if (PZJmiDHXf[l] == i8p1cMDx0aH[LAenEpsd0]) {
                                    l--;
                                    continue;
                                }
                                else {
                                    X7dQzG9DU -= (976 - 776);
                                    l--;
                                    continue;
                                }
                            }
                        }
                    }
                }
                LAenEpsd0++;
            }
        }
        cout << X7dQzG9DU << endl;
    }
    return (533 - 533);
}

