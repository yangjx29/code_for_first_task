int leUFts (int dUs7nGSz6meL [(325 - 320)] [(115 - 110)], int, int);

void  main () {
    int N9PRSWisG [(336 - 331)] [(286 - 281)];
    int MOjV7nHDR;
    int dJg0XMYq5uhn;
    int bQ0dNPShq7;
    int TbP5Jgte;
    {
        MOjV7nHDR = (568 - 568);
        for (; MOjV7nHDR < (144 - 139);) {
            {
                dJg0XMYq5uhn = (491 - 491);
                for (; dJg0XMYq5uhn < (481 - 476);) {
                    scanf ("%d", &N9PRSWisG[MOjV7nHDR][dJg0XMYq5uhn]);
                    dJg0XMYq5uhn++;
                }
            }
            MOjV7nHDR = MOjV7nHDR +(766 - 765);
        }
    }
    scanf ("%d%d", &bQ0dNPShq7, &TbP5Jgte);
    if (leUFts (N9PRSWisG, bQ0dNPShq7, TbP5Jgte) == (804 - 804))
        ;
    else {
        MOjV7nHDR = (930 - 930);
        while (MOjV7nHDR < (323 - 318)) {
            printf ("%d", N9PRSWisG[MOjV7nHDR][(679 - 679)]);
            {
                dJg0XMYq5uhn = (897 - 896);
                for (; dJg0XMYq5uhn < (562 - 557);) {
                    printf ("%2d", N9PRSWisG[MOjV7nHDR][dJg0XMYq5uhn]);
                    dJg0XMYq5uhn++;
                }
            }
            printf ("\n");
            MOjV7nHDR = MOjV7nHDR +(701 - 700);
        }
    }
}

int leUFts (int dUs7nGSz6meL [(56 - 51)] [(737 - 732)], int bQ0dNPShq7, int TbP5Jgte) {
    int yERezadYX;
    int kIYt1RHyNJ;
    if (TbP5Jgte >= (973 - 973) && TbP5Jgte < (606 - 601) && bQ0dNPShq7 >= (880 - 880) && bQ0dNPShq7 < (645 - 640)) {
        {
            kIYt1RHyNJ = 0;
            for (; kIYt1RHyNJ < 5;) {
                yERezadYX = dUs7nGSz6meL[TbP5Jgte][kIYt1RHyNJ], dUs7nGSz6meL[TbP5Jgte][kIYt1RHyNJ] = dUs7nGSz6meL[bQ0dNPShq7][kIYt1RHyNJ], dUs7nGSz6meL[bQ0dNPShq7][kIYt1RHyNJ] = yERezadYX;
                kIYt1RHyNJ++;
            }
        }
        return 1;
    }
    else
        return 0;
}

