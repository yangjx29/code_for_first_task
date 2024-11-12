struct   student {
    char Sj5a1M3 [20];
    int YvyfRGu;
    int YebI7oXLT;
    char xyskrX;
    char P5HBDFs49RSb;
    int mQRwriN7ZEf;
};
int ru7JkaxI1 (struct   student *rozDu3yI) {
    int jEoqBKO = 0;
    if ((80 < (rozDu3yI->YvyfRGu)) && (1 <= (rozDu3yI->mQRwriN7ZEf)))
        jEoqBKO = jEoqBKO + 8000;
    if ((85 < (rozDu3yI->YvyfRGu)) && (80 < (rozDu3yI->YebI7oXLT)))
        jEoqBKO = jEoqBKO + 4000;
    if ((rozDu3yI->YvyfRGu) > 90)
        jEoqBKO = jEoqBKO + 2000;
    if (((rozDu3yI->YvyfRGu) > 85) && (!('Y' != (rozDu3yI->P5HBDFs49RSb))))
        jEoqBKO = jEoqBKO + 1000;
    if (((rozDu3yI->YebI7oXLT) > 80) && ((rozDu3yI->xyskrX) == 'Y'))
        jEoqBKO = jEoqBKO + 850;
    return jEoqBKO;
}

void  main () {
    int ru7JkaxI1 (struct   student *rozDu3yI);
    int xQaTDvy0n6, Mxu7ahNPcRT, X6LYusUiR [100] = {0}, *QN84MLF, gCDqYJ0hReA = 0, fqHQNodaS3L, RhZTtK;
    struct   student mfZb7ck [100], *rozDu3yI;
    rozDu3yI = mfZb7ck;
    QN84MLF = X6LYusUiR;
    fqHQNodaS3L = X6LYusUiR[0];
    scanf ("%d", &xQaTDvy0n6);
    for (Mxu7ahNPcRT = 0; Mxu7ahNPcRT < xQaTDvy0n6; Mxu7ahNPcRT = Mxu7ahNPcRT +1) {
        scanf ("%s %d %d %c %c %d", rozDu3yI->Sj5a1M3, &rozDu3yI->YvyfRGu, &rozDu3yI->YebI7oXLT, &rozDu3yI->xyskrX, &rozDu3yI->P5HBDFs49RSb, &rozDu3yI->mQRwriN7ZEf);
        rozDu3yI = rozDu3yI + 1;
    }
    rozDu3yI = mfZb7ck;
    for (Mxu7ahNPcRT = 0; Mxu7ahNPcRT < xQaTDvy0n6; Mxu7ahNPcRT = Mxu7ahNPcRT +1) {
        *(QN84MLF +Mxu7ahNPcRT) = ru7JkaxI1 (rozDu3yI + Mxu7ahNPcRT);
        gCDqYJ0hReA = gCDqYJ0hReA + (*(QN84MLF +Mxu7ahNPcRT));
    }
    for (Mxu7ahNPcRT = 0; Mxu7ahNPcRT < xQaTDvy0n6; Mxu7ahNPcRT++) {
        if (X6LYusUiR[Mxu7ahNPcRT] > fqHQNodaS3L) {
            fqHQNodaS3L = X6LYusUiR[Mxu7ahNPcRT];
            RhZTtK = Mxu7ahNPcRT;
        }
    }
    printf ("%s\n%d\n%d\n", (mfZb7ck + RhZTtK)->Sj5a1M3, fqHQNodaS3L, gCDqYJ0hReA);
}

