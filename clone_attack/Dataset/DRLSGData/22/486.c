main () {
    int CbUhAimoTs2;
    char c;
    int GnodrZbHLkp;
    int l0Pef46C23;
    int Vm1xV0Xuv;
    int Bq7OaJ [300];
    int BdEkR7Fgm;
    int BJtmN4;
    scanf ("%d%c", &Bq7OaJ[(223 - 223)], &c);
    if (!('\n' != c))
        ;
    else {
        BdEkR7Fgm = (880 - 879);
        for (; c != '\n';) {
            scanf ("%d%c", &Bq7OaJ[BdEkR7Fgm], &c);
            BdEkR7Fgm = BdEkR7Fgm +(21 - 20);
        }
        {
            GnodrZbHLkp = 0;
            for (; BdEkR7Fgm -3 >= GnodrZbHLkp;) {
                for (CbUhAimoTs2 = 0; CbUhAimoTs2 <= BdEkR7Fgm -2 - GnodrZbHLkp; CbUhAimoTs2 = CbUhAimoTs2 +1) {
                    if (Bq7OaJ[CbUhAimoTs2 +1] < Bq7OaJ[CbUhAimoTs2]) {
                        Vm1xV0Xuv = Bq7OaJ[CbUhAimoTs2];
                        Bq7OaJ[CbUhAimoTs2] = Bq7OaJ[CbUhAimoTs2 +1];
                        Bq7OaJ[CbUhAimoTs2 +1] = Vm1xV0Xuv;
                    }
                }
                GnodrZbHLkp = GnodrZbHLkp +1;
            }
        }
        for (l0Pef46C23 = BdEkR7Fgm -1; l0Pef46C23 >= 0; l0Pef46C23 = l0Pef46C23 - 1) {
            BJtmN4 = 1;
            if (Bq7OaJ[l0Pef46C23] > Bq7OaJ[l0Pef46C23 - 1]) {
                BJtmN4 = 0;
                break;
            }
        }
        if (BJtmN4 == 0)
            printf ("%d", Bq7OaJ[l0Pef46C23 - 1]);
        else
            ;
    }
}

