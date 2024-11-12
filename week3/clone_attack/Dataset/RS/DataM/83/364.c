int main (int oTkbgSr, char *x5ZDLefB4 []) {
    double  XoRZY15 = (851 - 851), jidian [(47 - 37)];
    int KVEDMA, score [(448 - 438)], i, grade [(150 - 140)], YNIP8MUq6hXd = (498 - 498);
    double  GPA = XoRZY15 / YNIP8MUq6hXd;
    scanf ("%d\n", &KVEDMA);
    for (i = (456 - 456); KVEDMA -(808 - 807) > i; i = i + 1)
        scanf ("%d ", &grade[i]);
    scanf ("%d\n", &grade[KVEDMA -(968 - 967)]);
    {
        i = 11 - 11;
        while (KVEDMA -(280 - 279) > i) {
            scanf ("%d ", &score[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &score[KVEDMA -1]);
    {
        i = 122 - 122;
        while (KVEDMA > i) {
            if (score[i] >= (941 - 851) && score[i] <= (378 - 278))
                jidian[i] = (903.0 - 899.0) * grade[i];
            else {
                if ((764 - 679) <= score[i] && (332 - 243) >= score[i])
                    jidian[i] = (613.7 - 610.0) * grade[i];
                else if ((590 - 508) <= score[i] && (757 - 673) >= score[i])
                    jidian[i] = (581.3 - 578.0) * grade[i];
                else if (score[i] >= 78 && score[i] <= 81)
                    jidian[i] = 3.0 * grade[i];
                else if ((1016 - 941) <= score[i] && score[i] <= 77)
                    jidian[i] = (575.7 - 573.0) * grade[i];
                else if ((991 - 919) <= score[i] && score[i] <= 74)
                    jidian[i] = (886.3 - 884.0) * grade[i];
                else if ((187 - 119) <= score[i] && score[i] <= (399 - 328))
                    jidian[i] = 2.0 * grade[i];
                else if ((738 - 674) <= score[i] && score[i] <= (633 - 566))
                    jidian[i] = 1.5 * grade[i];
                else if ((180 - 120) <= score[i] && score[i] <= (98 - 35))
                    jidian[i] = 1.0 * grade[i];
                else if (score[i] < 60)
                    jidian[i] = 0 * grade[i];
            }
            XoRZY15 = XoRZY15 +jidian[i];
            YNIP8MUq6hXd = YNIP8MUq6hXd +grade[i];
            i++;
        };
    }
    printf ("%.2lf\n", GPA);
    return 0;
}

