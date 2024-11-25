struct   xinxi {
    char k3CeRB5QptW [22];
    int lcMdA1LSI;
    int TZKP5e;
    char ELxETn;
    char Zz7KJHUkrdE1;
    int dDJhLc;
    int SkyxLe;
    struct   xinxi *zh5nzoOCW9;
};
void  main () {
    struct   xinxi *Yw5f4QcXW, *u5j4KRuDAJBx, *p, *NGwvgXtTk;
    int t6vcD2Qo0Jta, n, t;
    int QD9FuizrJ5, lkfDUoZez;
    scanf ("%d", &n);
    p = (struct   xinxi *) malloc (sizeof (struct   xinxi));
    scanf ("%s %d %d %c %c %d\n", p->k3CeRB5QptW, &p->lcMdA1LSI, &p->TZKP5e, &p->ELxETn, &p->Zz7KJHUkrdE1, &p->dDJhLc);
    u5j4KRuDAJBx = p;
    Yw5f4QcXW = NULL;
    t = (808 - 807);
    while (t < n) {
        if (t == (772 - 771))
            Yw5f4QcXW = p;
        if (t > (444 - 443))
            u5j4KRuDAJBx->zh5nzoOCW9 = p;
        t = t + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        u5j4KRuDAJBx = p;
        p = (struct   xinxi *) malloc (sizeof (struct   xinxi));
        scanf ("%s %d %d %c %c %d", p->k3CeRB5QptW, &p->lcMdA1LSI, &p->TZKP5e, &p->ELxETn, &p->Zz7KJHUkrdE1, &p->dDJhLc);
    }
    NGwvgXtTk = Yw5f4QcXW;
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
    u5j4KRuDAJBx->zh5nzoOCW9 = p;
    p->zh5nzoOCW9 = NULL;
    while (NGwvgXtTk != NULL) {
        NGwvgXtTk->SkyxLe = (732 - 732);
        if (NGwvgXtTk->lcMdA1LSI > 80 && !((116 - 116) == NGwvgXtTk->dDJhLc))
            NGwvgXtTk->SkyxLe = NGwvgXtTk->SkyxLe + (8564 - 564);
        if (NGwvgXtTk->lcMdA1LSI > 85 && NGwvgXtTk->TZKP5e > 80)
            NGwvgXtTk->SkyxLe = NGwvgXtTk->SkyxLe + 4000;
        if (NGwvgXtTk->lcMdA1LSI > 90)
            NGwvgXtTk->SkyxLe = NGwvgXtTk->SkyxLe + (2513 - 513);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (NGwvgXtTk->lcMdA1LSI > 85 && NGwvgXtTk->Zz7KJHUkrdE1 == 'Y')
            NGwvgXtTk->SkyxLe = NGwvgXtTk->SkyxLe + 1000;
        if (NGwvgXtTk->TZKP5e > 80 && NGwvgXtTk->ELxETn == 'Y')
            NGwvgXtTk->SkyxLe = NGwvgXtTk->SkyxLe + 850;
        NGwvgXtTk = NGwvgXtTk->zh5nzoOCW9;
    }
    lkfDUoZez = 0;
    QD9FuizrJ5 = 0;
    NGwvgXtTk = Yw5f4QcXW;
    while (NGwvgXtTk != NULL) {
        lkfDUoZez = NGwvgXtTk->SkyxLe + lkfDUoZez;
        if (NGwvgXtTk->SkyxLe > QD9FuizrJ5)
            QD9FuizrJ5 = NGwvgXtTk->SkyxLe;
        NGwvgXtTk = NGwvgXtTk->zh5nzoOCW9;
    }
    {
        NGwvgXtTk = Yw5f4QcXW;
        while (NGwvgXtTk->SkyxLe != QD9FuizrJ5) {
            NGwvgXtTk = NGwvgXtTk->zh5nzoOCW9;
        };
    }
    printf ("%s\n", NGwvgXtTk->k3CeRB5QptW);
    printf ("%d\n", NGwvgXtTk->SkyxLe);
    printf ("%d", lkfDUoZez);
}

