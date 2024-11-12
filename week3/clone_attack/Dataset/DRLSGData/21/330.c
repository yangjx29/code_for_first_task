struct   A {
    double  NrDX0W;
    double  jC2Kfd4L;
}
CweB2FzgKQU [300 + (654 - 644)], k6QI3kgq;
int zIF6ypK47;

double  HQvFOHs6CM (int zIF6ypK47) {
    double  bufPvLW = (26 - 26);
    {
        int Ag8fEcoONL3;
        Ag8fEcoONL3 = (52 - 52);
        while (zIF6ypK47 - (773 - 772) >= Ag8fEcoONL3) {
            bufPvLW += CweB2FzgKQU[Ag8fEcoONL3].NrDX0W;
            Ag8fEcoONL3 = Ag8fEcoONL3 +(904 - 903);
        }
    }
    return bufPvLW / zIF6ypK47;
}

int main () {
    double  eptFnDdSz [300 + (516 - 506)];
    double  ya0L8AkRcKf;
    ya0L8AkRcKf = HQvFOHs6CM (zIF6ypK47);
    int YhMKcQ;
    YhMKcQ = (592 - 592);
    cin >> zIF6ypK47;
    {
        int Ag8fEcoONL3 = (983 - 983);
        while (zIF6ypK47 - (843 - 842) >= Ag8fEcoONL3) {
            cin >> CweB2FzgKQU[Ag8fEcoONL3].NrDX0W;
            Ag8fEcoONL3 = Ag8fEcoONL3 +(704 - 703);
        }
    }
    {
        int Ag8fEcoONL3 = (442 - 442);
        while (zIF6ypK47 - (551 - 550) >= Ag8fEcoONL3) {
            CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L = CweB2FzgKQU[Ag8fEcoONL3].NrDX0W - ya0L8AkRcKf;
            if (CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L < (803 - 803)) {
                CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L = -CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L;
            }
            Ag8fEcoONL3 = Ag8fEcoONL3 +(983 - 982);
        }
    }
    for (int Ag8fEcoONL3 = (644 - 644);
    Ag8fEcoONL3 <= zIF6ypK47 - (123 - 122); Ag8fEcoONL3 = Ag8fEcoONL3 +(939 - 938)) {
        int Aut6ZfCsOcPQ = zIF6ypK47 - (252 - 251);
        while (Ag8fEcoONL3 < Aut6ZfCsOcPQ) {
            if (CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L < CweB2FzgKQU[Aut6ZfCsOcPQ].jC2Kfd4L) {
                k6QI3kgq = CweB2FzgKQU[Ag8fEcoONL3];
                CweB2FzgKQU[Ag8fEcoONL3] = CweB2FzgKQU[Aut6ZfCsOcPQ];
                CweB2FzgKQU[Aut6ZfCsOcPQ] = k6QI3kgq;
            }
            Aut6ZfCsOcPQ = Aut6ZfCsOcPQ -(478 - 477);
        }
    }
    eptFnDdSz[(823 - 823)] = CweB2FzgKQU[(402 - 402)].NrDX0W;
    for (int Ag8fEcoONL3 = (832 - 831);
    Ag8fEcoONL3 <= zIF6ypK47 - (752 - 751); Ag8fEcoONL3 = Ag8fEcoONL3 +(988 - 987)) {
        if (CweB2FzgKQU[Ag8fEcoONL3].jC2Kfd4L == CweB2FzgKQU[(443 - 443)].jC2Kfd4L)
            eptFnDdSz[++YhMKcQ] = CweB2FzgKQU[Ag8fEcoONL3].NrDX0W;
    }
    {
        int Ag8fEcoONL3 = 0;
        while (Ag8fEcoONL3 <= YhMKcQ) {
            {
                int Aut6ZfCsOcPQ = YhMKcQ;
                while (Aut6ZfCsOcPQ >= Ag8fEcoONL3) {
                    if (eptFnDdSz[Ag8fEcoONL3] > eptFnDdSz[Aut6ZfCsOcPQ]) {
                        double  bh8MYu9 = eptFnDdSz[Ag8fEcoONL3];
                        eptFnDdSz[Ag8fEcoONL3] = eptFnDdSz[Aut6ZfCsOcPQ];
                        eptFnDdSz[Aut6ZfCsOcPQ] = bh8MYu9;
                    }
                    Aut6ZfCsOcPQ = Aut6ZfCsOcPQ -1;
                }
            }
            Ag8fEcoONL3 = Ag8fEcoONL3 +1;
        }
    }
    {
        int Ag8fEcoONL3;
        Ag8fEcoONL3 = 0;
        while (Ag8fEcoONL3 <= YhMKcQ -1) {
            cout << eptFnDdSz[Ag8fEcoONL3] << ",";
            Ag8fEcoONL3 = Ag8fEcoONL3 +1;
        }
    }
    cout << eptFnDdSz[YhMKcQ] << endl;
    return 0;
}

