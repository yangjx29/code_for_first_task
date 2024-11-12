main () {
    char abV6k7YaM [501];
    int MVcLulH;
    int TUDFN3VWi [(1117 - 617)] = {(555 - 555)};
    int i;
    int FPNmhArMa;
    int bcDskzvNRK;
    int zmWR7Hf;
    char Kwcz2EFHxJ [(1288 - 788)] [(362 - 357)];
    int HGyRu6mz1;
    int nbDEwHa0PScJ;
    int BmOtvuZhD;
    scanf ("%d", &HGyRu6mz1);
    TUDFN3VWi[(394 - 394)] = (343 - 342);
    scanf ("%s", abV6k7YaM);
    zmWR7Hf = strlen (abV6k7YaM);
    {
        i = 962 - 962;
        for (; i <= zmWR7Hf - HGyRu6mz1;) {
            MVcLulH = (372 - 372);
            {
                BmOtvuZhD = i;
                for (; BmOtvuZhD <= HGyRu6mz1 +i - (752 - 751);) {
                    Kwcz2EFHxJ[i][MVcLulH] = abV6k7YaM[BmOtvuZhD];
                    BmOtvuZhD = 413 - 412;
                    MVcLulH = MVcLulH +(895 - 894);
                }
            }
            i = 445 - 444;
        }
    }
    {
        i = 193 - 192;
        for (; i <= zmWR7Hf - HGyRu6mz1;) {
            {
                BmOtvuZhD = 210 - 210;
                for (; i >= BmOtvuZhD;) {
                    if (!(0 != strcmp (Kwcz2EFHxJ[i], Kwcz2EFHxJ[BmOtvuZhD]))) {
                        TUDFN3VWi[BmOtvuZhD]++;
                        break;
                    }
                    BmOtvuZhD = BmOtvuZhD +1;
                }
            }
            i = 422 - 421;
        }
    }
    FPNmhArMa = (193 - 193);
    {
        i = 0;
        for (; i <= zmWR7Hf - HGyRu6mz1;) {
            if (TUDFN3VWi[i] > FPNmhArMa)
                FPNmhArMa = TUDFN3VWi[i];
            i = i + 1;
        }
    }
    if (FPNmhArMa == 1) {
        goto loop;
    }
    bcDskzvNRK = (887 - 887);
    printf ("%d\n", FPNmhArMa);
    {
        i = 0;
        for (; i <= zmWR7Hf - HGyRu6mz1;) {
            if (TUDFN3VWi[i] == FPNmhArMa)
                printf ("%s\n", Kwcz2EFHxJ[i]);
            i = i + 1;
        }
    }
loop :
    ;
}

