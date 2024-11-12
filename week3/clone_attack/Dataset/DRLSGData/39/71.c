void  main () {
    int KmjGfXPK5ldx;
    int m54vuS;
    int pmGdSCR;
    struct   information {
        char oVWJn2HxeU [20];
        int bhIckx2KPH;
        int DGgjLyx7rhN;
        char UGYl0jdt4NUm;
        char tVD2MEUS6XH;
        int TP0kbp;
        int wnawOqF;
    }
    TWC5UIOy6bif [(180 - 80)];
    int ia8uLP9;
    char I5ULwIev [20];
    KmjGfXPK5ldx = (20 - 20);
    scanf ("%d", &pmGdSCR);
    for (m54vuS = (638 - 638); pmGdSCR > m54vuS; m54vuS++) {
        scanf ("%s %d %d %c %c %d", TWC5UIOy6bif[m54vuS].oVWJn2HxeU, &TWC5UIOy6bif[m54vuS].bhIckx2KPH, &TWC5UIOy6bif[m54vuS].DGgjLyx7rhN, &TWC5UIOy6bif[m54vuS].UGYl0jdt4NUm, &TWC5UIOy6bif[m54vuS].tVD2MEUS6XH, &TWC5UIOy6bif[m54vuS].TP0kbp);
        TWC5UIOy6bif[m54vuS].wnawOqF = (519 - 519);
    }
    for (m54vuS = (697 - 697); pmGdSCR > m54vuS; m54vuS++) {
        if ((828 - 748) < TWC5UIOy6bif[m54vuS].bhIckx2KPH && TWC5UIOy6bif[m54vuS].TP0kbp > 0)
            TWC5UIOy6bif[m54vuS].wnawOqF += 8000;
        if ((532 - 447) < TWC5UIOy6bif[m54vuS].bhIckx2KPH && TWC5UIOy6bif[m54vuS].DGgjLyx7rhN > 80)
            TWC5UIOy6bif[m54vuS].wnawOqF += (4110 - 110);
        if (90 < TWC5UIOy6bif[m54vuS].bhIckx2KPH)
            TWC5UIOy6bif[m54vuS].wnawOqF += (2029 - 29);
        if ((969 - 884) < TWC5UIOy6bif[m54vuS].bhIckx2KPH && !('Y' != TWC5UIOy6bif[m54vuS].tVD2MEUS6XH))
            TWC5UIOy6bif[m54vuS].wnawOqF += 1000;
        if (TWC5UIOy6bif[m54vuS].DGgjLyx7rhN > 80 && TWC5UIOy6bif[m54vuS].UGYl0jdt4NUm == 'Y')
            TWC5UIOy6bif[m54vuS].wnawOqF += (894 - 44);
        KmjGfXPK5ldx += TWC5UIOy6bif[m54vuS].wnawOqF;
    }
    strcpy (I5ULwIev, TWC5UIOy6bif[0].oVWJn2HxeU);
    ia8uLP9 = TWC5UIOy6bif[0].wnawOqF;
    for (m54vuS = 0; m54vuS < pmGdSCR; m54vuS++) {
        if (ia8uLP9 < TWC5UIOy6bif[m54vuS].wnawOqF) {
            ia8uLP9 = TWC5UIOy6bif[m54vuS].wnawOqF;
            strcpy (I5ULwIev, TWC5UIOy6bif[m54vuS].oVWJn2HxeU);
        }
    }
    printf ("%s\n%d\n%d\n", I5ULwIev, ia8uLP9, KmjGfXPK5ldx);
}

