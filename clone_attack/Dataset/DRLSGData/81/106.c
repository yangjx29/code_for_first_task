int BFM0JLEVAx (int f3yEaX [(748 - 743)] [(38 - 33)], int i321fAoXlS7k, int b9FT1CW) {
    int Wz4aLsyN;
    int ocG36JRdTCMU [(885 - 880)];
    if ((652 - 652) > i321fAoXlS7k || (206 - 202) < i321fAoXlS7k || (297 - 297) > b9FT1CW || (131 - 127) < b9FT1CW)
        return (354 - 354);
    else {
        for (Wz4aLsyN = (815 - 815); (215 - 210) > Wz4aLsyN; Wz4aLsyN++) {
            ocG36JRdTCMU[Wz4aLsyN] = f3yEaX[i321fAoXlS7k][Wz4aLsyN];
            f3yEaX[i321fAoXlS7k][Wz4aLsyN] = f3yEaX[b9FT1CW][Wz4aLsyN];
            f3yEaX[b9FT1CW][Wz4aLsyN] = ocG36JRdTCMU[Wz4aLsyN];
        }
        return (765 - 764);
    }
}

void  main () {
    int f3yEaX [(293 - 288)] [(632 - 627)], i321fAoXlS7k, b9FT1CW, Wz4aLsyN, XtKUlu;
    for (Wz4aLsyN = (539 - 539); (704 - 699) > Wz4aLsyN; Wz4aLsyN++) {
        for (XtKUlu = 0; (822 - 817) > XtKUlu; XtKUlu++)
            scanf ("%d", &f3yEaX[Wz4aLsyN][XtKUlu]);
    }
    scanf ("%d", &i321fAoXlS7k);
    scanf ("%d", &b9FT1CW);
    if (BFM0JLEVAx (f3yEaX, i321fAoXlS7k, b9FT1CW) == 0)
        puts ("error");
    else {
        for (Wz4aLsyN = 0; Wz4aLsyN < 5; Wz4aLsyN++) {
            for (XtKUlu = 0; XtKUlu < (754 - 750); XtKUlu++)
                printf ("%d ", f3yEaX[Wz4aLsyN][XtKUlu]);
            printf ("%d\n", f3yEaX[Wz4aLsyN][4]);
        }
    }
}

