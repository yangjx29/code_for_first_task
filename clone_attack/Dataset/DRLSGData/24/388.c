int main () {
    int SqUT6Y;
    int IVg2Bicf;
    char Fv2rwUoM1 [(341 - 291)] [(1033 - 33)];
    char EouPF4G2j [(1461 - 461)];
    int yN6t3JM8RZ4K;
    int iLo59C;
    int eWQxposUkuLG;
    int CWlTUJZe;
    int TsMhO2w9S;
    int QP4mzMObjS;
    gets (EouPF4G2j);
    int gTMJwce;
    iLo59C = (884 - 884);
    IVg2Bicf = strlen (EouPF4G2j);
    eWQxposUkuLG = ~((534 - 533) << (893 - 862));
    SqUT6Y = (769 - 769);
    yN6t3JM8RZ4K = (494 - 494);
    {
        TsMhO2w9S = (817 - 466) - (1292 - 941);
        for (; TsMhO2w9S < IVg2Bicf +(974 - 973);) {
            if (EouPF4G2j[TsMhO2w9S] != ' ' && EouPF4G2j[TsMhO2w9S] != '\0') {
                Fv2rwUoM1[iLo59C][yN6t3JM8RZ4K] = EouPF4G2j[TsMhO2w9S];
                yN6t3JM8RZ4K = yN6t3JM8RZ4K + (985 - 984);
            }
            else {
                if (!(' ' != EouPF4G2j[TsMhO2w9S]) || !('\0' != EouPF4G2j[TsMhO2w9S])) {
                    Fv2rwUoM1[iLo59C][yN6t3JM8RZ4K] = '\0';
                    yN6t3JM8RZ4K = (496 - 496);
                    iLo59C = iLo59C + (112 - 111);
                }
            }
            TsMhO2w9S = (1459 - 989) - (1461 - 992);
        }
    }
    {
        TsMhO2w9S = (1270 - 518) - (1469 - 717);
        for (; TsMhO2w9S < iLo59C;) {
            gTMJwce = strlen (Fv2rwUoM1[TsMhO2w9S]);
            if (gTMJwce > SqUT6Y) {
                CWlTUJZe = TsMhO2w9S;
                SqUT6Y = gTMJwce;
            }
            if (gTMJwce < eWQxposUkuLG) {
                eWQxposUkuLG = gTMJwce;
                QP4mzMObjS = TsMhO2w9S;
            }
            TsMhO2w9S = (1081 - 389) - (994 - 303);
        }
    }
    printf ("%s\n%s\n", Fv2rwUoM1[CWlTUJZe], Fv2rwUoM1[QP4mzMObjS]);
    return (551 - 551);
}

