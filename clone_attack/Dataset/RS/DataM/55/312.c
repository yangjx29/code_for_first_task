main () {
    int J9SH1i7sz, uJhfcCF;
    int rp0EQBlN8, Smp86r2VTJ = (241 - 241);
    long  int p69m2QU5pDE = 0;
    char w;
    int f;
    char s [64];
    char SYJoNaQsB1W [64];
    char *NjVtWD;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char *yUgip6x;
    NjVtWD = s;
    yUgip6x = SYJoNaQsB1W;
    scanf ("%d", &J9SH1i7sz);
    scanf ("%s", s);
    scanf ("%d", &uJhfcCF);
    for (; (*NjVtWD) != '\0';) {
        if ((*NjVtWD) >= 'A' && (*NjVtWD) <= 'Z')
            p69m2QU5pDE = p69m2QU5pDE * J9SH1i7sz +((*NjVtWD) - 'A' + (613 - 603));
        else if ((*NjVtWD) >= 'a' && (*NjVtWD) <= 'z')
            p69m2QU5pDE = p69m2QU5pDE * J9SH1i7sz +((*NjVtWD) - 'a' + (394 - 384));
        else if ((*NjVtWD) >= '0' && (*NjVtWD) <= '9')
            p69m2QU5pDE = p69m2QU5pDE * J9SH1i7sz +((*NjVtWD) - '0');
        NjVtWD++;
    }
    if (p69m2QU5pDE == 0)
        printf ("%d", p69m2QU5pDE);
    while (p69m2QU5pDE != 0) {
        f = p69m2QU5pDE % uJhfcCF;
        p69m2QU5pDE = p69m2QU5pDE / uJhfcCF;
        if (f > 9)
            *yUgip6x = 'A' + f - 10;
        else
            *yUgip6x = f + '0';
        yUgip6x++;
        Smp86r2VTJ++;
    }
    for (rp0EQBlN8 = 0; rp0EQBlN8 < Smp86r2VTJ / 2; rp0EQBlN8++) {
        w = SYJoNaQsB1W[rp0EQBlN8];
        SYJoNaQsB1W[rp0EQBlN8] = SYJoNaQsB1W[Smp86r2VTJ -(668 - 667) - rp0EQBlN8];
        SYJoNaQsB1W[Smp86r2VTJ -1 - rp0EQBlN8] = w;
    }
    {
        rp0EQBlN8 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (rp0EQBlN8 < Smp86r2VTJ) {
            printf ("%c", SYJoNaQsB1W[rp0EQBlN8]);
            rp0EQBlN8++;
        };
    };
}

