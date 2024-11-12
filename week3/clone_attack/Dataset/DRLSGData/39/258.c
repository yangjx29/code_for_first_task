struct   student {
    char wGJzuoTHk7Z [20];
    int WDlcIRHY9;
    int YJD1Fq;
    char Usxch9L;
    char oTlFWeVCipw;
    int gbQxqAf;
    int Ou2cX0F;
}
ws9fIO [100];

void  main () {
    int syqYRAjNTL, oAtJm18, zNctKniJrp = 0;
    struct   student p;
    scanf ("%d", &syqYRAjNTL);
    {
        oAtJm18 = 0;
        while (oAtJm18 < syqYRAjNTL) {
            scanf ("%s %d %d %c %c %d", ws9fIO[oAtJm18].wGJzuoTHk7Z, &ws9fIO[oAtJm18].WDlcIRHY9, &ws9fIO[oAtJm18].YJD1Fq, &ws9fIO[oAtJm18].oTlFWeVCipw, &ws9fIO[oAtJm18].Usxch9L, &ws9fIO[oAtJm18].gbQxqAf);
            ws9fIO[oAtJm18].Ou2cX0F = 0;
            if (ws9fIO[oAtJm18].WDlcIRHY9 > 80 && 0 < ws9fIO[oAtJm18].gbQxqAf)
                ws9fIO[oAtJm18].Ou2cX0F += 8000;
            if (ws9fIO[oAtJm18].WDlcIRHY9 > 85 && ws9fIO[oAtJm18].YJD1Fq > 80)
                ws9fIO[oAtJm18].Ou2cX0F += 4000;
            if (ws9fIO[oAtJm18].WDlcIRHY9 > 90)
                ws9fIO[oAtJm18].Ou2cX0F += 2000;
            if (ws9fIO[oAtJm18].WDlcIRHY9 > 85 && ws9fIO[oAtJm18].Usxch9L == 'Y')
                ws9fIO[oAtJm18].Ou2cX0F += 1000;
            if (ws9fIO[oAtJm18].YJD1Fq > 80 && ws9fIO[oAtJm18].oTlFWeVCipw == 'Y')
                ws9fIO[oAtJm18].Ou2cX0F += 850;
            zNctKniJrp += ws9fIO[oAtJm18].Ou2cX0F;
            oAtJm18 = oAtJm18 + 1;
        }
    }
    p = ws9fIO[0];
    {
        oAtJm18 = 0;
        while (oAtJm18 < syqYRAjNTL) {
            if (ws9fIO[oAtJm18].Ou2cX0F > p.Ou2cX0F)
                p = ws9fIO[oAtJm18];
            oAtJm18 = oAtJm18 + 1;
        }
    }
    printf ("%s\n%d\n%d", p.wGJzuoTHk7Z, p.Ou2cX0F, zNctKniJrp);
}

