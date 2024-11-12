void  main () {
    char W6TK8WqHX [(670 - 570)];
    gets (W6TK8WqHX);
    char T5Klv0xO [(708 - 608)];
    gets (T5Klv0xO);
    int g6ocIR, rmGuQvC5siEo, yNknsK = (46 - 46), aSI9V6 = (562 - 562);
    char GOs2W0P8Z [(466 - 366)] [(186 - 166)] = {'\0'};
    char rPoyUlZGI [(344 - 244)];
    gets (rPoyUlZGI);
    g6ocIR = strlen (W6TK8WqHX);
    {
        rmGuQvC5siEo = 743 - 743;
        while (rmGuQvC5siEo < g6ocIR) {
            if (W6TK8WqHX[rmGuQvC5siEo] != ' ') {
                GOs2W0P8Z[yNknsK][aSI9V6] = W6TK8WqHX[rmGuQvC5siEo];
                aSI9V6 = aSI9V6 + (751 - 750);
            }
            else {
                aSI9V6 = (561 - 561);
                yNknsK++;
            }
            rmGuQvC5siEo = rmGuQvC5siEo + 1;
        }
    }
    {
        rmGuQvC5siEo = 948 - 948;
        for (; rmGuQvC5siEo < yNknsK + (537 - 536);) {
            if (!((137 - 137) != strcmp (GOs2W0P8Z[rmGuQvC5siEo], T5Klv0xO))) {
                strcpy (GOs2W0P8Z[rmGuQvC5siEo], rPoyUlZGI);
            }
            rmGuQvC5siEo = rmGuQvC5siEo + 1;
        }
    }
    {
        rmGuQvC5siEo = 0;
        while (yNknsK > rmGuQvC5siEo) {
            printf ("%s ", GOs2W0P8Z[rmGuQvC5siEo]);
            rmGuQvC5siEo = rmGuQvC5siEo + 1;
        }
    }
    printf ("%s\n", GOs2W0P8Z[yNknsK]);
}

