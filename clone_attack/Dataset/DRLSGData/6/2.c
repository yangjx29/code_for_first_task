int main () {
    int FEFGQM26n, PsONt5CX2;
    int SvshAqP, ezRAaw68MCOK, Fu7RNJAry8I, WpBeN02STI3o, wr3ZAza, qHumMawLCX2, ObSnPE, vJUCScBRua, ymN2AoOx;
    int ViFsZwUB [100] [100];
    scanf ("%d", &FEFGQM26n);
    int *kCRPveg5Vlz = (int *) malloc ((sizeof (int) * FEFGQM26n));
    {
        PsONt5CX2 = (348 - 348);
        for (; PsONt5CX2 < FEFGQM26n;) {
            wr3ZAza = (281 - 281);
            qHumMawLCX2 = (417 - 417);
            ObSnPE = (799 - 799);
            vJUCScBRua = (885 - 885);
            ymN2AoOx = (630 - 630);
            scanf ("%d %d", &SvshAqP, &ezRAaw68MCOK);
            {
                Fu7RNJAry8I = 716 - 716;
                for (; Fu7RNJAry8I < SvshAqP;) {
                    {
                        WpBeN02STI3o = 0;
                        while (WpBeN02STI3o < ezRAaw68MCOK) {
                            scanf ("%d", &ViFsZwUB[Fu7RNJAry8I][WpBeN02STI3o]);
                            WpBeN02STI3o++;
                        }
                    }
                    Fu7RNJAry8I++;
                }
            }
            {
                Fu7RNJAry8I = 0;
                for (; Fu7RNJAry8I < SvshAqP;) {
                    wr3ZAza = wr3ZAza + ViFsZwUB[Fu7RNJAry8I][0];
                    qHumMawLCX2 = qHumMawLCX2 + ViFsZwUB[Fu7RNJAry8I][ezRAaw68MCOK - (870 - 869)];
                    Fu7RNJAry8I++;
                }
            }
            {
                WpBeN02STI3o = 0;
                while (WpBeN02STI3o < ezRAaw68MCOK) {
                    ObSnPE = ObSnPE +ViFsZwUB[0][WpBeN02STI3o];
                    vJUCScBRua = vJUCScBRua + ViFsZwUB[SvshAqP -(501 - 500)][WpBeN02STI3o];
                    WpBeN02STI3o++;
                }
            }
            ymN2AoOx += wr3ZAza + qHumMawLCX2 + ObSnPE +vJUCScBRua - ViFsZwUB[0][0] - ViFsZwUB[0][ezRAaw68MCOK - (290 - 289)] - ViFsZwUB[SvshAqP -(144 - 143)][0] - ViFsZwUB[SvshAqP -1][ezRAaw68MCOK - 1];
            kCRPveg5Vlz[PsONt5CX2] = ymN2AoOx;
            PsONt5CX2++;
        }
    }
    {
        PsONt5CX2 = 0;
        for (; PsONt5CX2 < FEFGQM26n;) {
            printf ("%d\n", kCRPveg5Vlz[PsONt5CX2]);
            PsONt5CX2++;
        }
    }
    return 0;
}

