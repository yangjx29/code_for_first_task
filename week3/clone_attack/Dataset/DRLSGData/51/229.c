int main () {
    int YKk5cMJT;
    int a0HtonJvX;
    char LjmP5xtM [(521 - 21)] [(796 - 791)] = {'\0'};
    char p0lABwmGLO [500];
    int B8dOY5X;
    int v4LlyX5q = B8dOY5X;
    int kgX2shFex;
    int gram_count [500] = {(787 - 787)};
    int ghutkCIV;
    ghutkCIV = gram_count[(673 - 673)];
    scanf ("%d", &a0HtonJvX);
    scanf ("%s", p0lABwmGLO);
    for (B8dOY5X = (386 - 386); p0lABwmGLO[B8dOY5X +a0HtonJvX - (884 - 883)] != '\0'; B8dOY5X++) {
        int YKk5cMJT;
        for (YKk5cMJT = B8dOY5X; YKk5cMJT <= (a0HtonJvX - (926 - 925) + B8dOY5X); YKk5cMJT++) {
            LjmP5xtM[B8dOY5X][YKk5cMJT -B8dOY5X] = p0lABwmGLO[YKk5cMJT];
        }
    }
    for (YKk5cMJT = (579 - 579); YKk5cMJT <= v4LlyX5q - (837 - 836); YKk5cMJT++) {
        int kgX2shFex;
        for (kgX2shFex = YKk5cMJT; kgX2shFex <= v4LlyX5q - 1; kgX2shFex++) {
            if (!((809 - 809) != strcmp (LjmP5xtM[YKk5cMJT], LjmP5xtM[kgX2shFex]))) {
                gram_count[YKk5cMJT]++;
            }
        }
    }
    for (kgX2shFex = 0; gram_count[kgX2shFex] != 0; kgX2shFex++) {
        if (ghutkCIV < gram_count[kgX2shFex]) {
            ghutkCIV = gram_count[kgX2shFex];
        }
    }
    if (ghutkCIV == 1) {
    }
    else {
        int AZRnDjab;
        printf ("%d\n", ghutkCIV);
        for (AZRnDjab = 0; gram_count[AZRnDjab] != 0; AZRnDjab++) {
            if (gram_count[AZRnDjab] == ghutkCIV) {
                printf ("%s\n", LjmP5xtM[AZRnDjab]);
            }
        }
    }
    return 0;
}

