struct   book {
    int num;
    char eFna1We [(58 - 32)];
}
main () {
    int a [(903 - 877)] = {0};
    int uziL1CBvNu, DsR1r2kGf5MN, ZP0qyzL, vdCIJf6zl, nQNerpKEt = (671 - 671), p;
    struct   book LLQwDxUmbiE [999];
    scanf ("%d", &uziL1CBvNu);
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
    for (DsR1r2kGf5MN = 0; uziL1CBvNu > DsR1r2kGf5MN; DsR1r2kGf5MN = DsR1r2kGf5MN +1) {
        scanf ("%d %s", &LLQwDxUmbiE[DsR1r2kGf5MN].num, LLQwDxUmbiE[DsR1r2kGf5MN].eFna1We);
        for (ZP0qyzL = 0; !('\0' == LLQwDxUmbiE[DsR1r2kGf5MN].eFna1We[ZP0qyzL]); ZP0qyzL = ZP0qyzL +1)
            for (vdCIJf6zl = (285 - 220); 91 > vdCIJf6zl; vdCIJf6zl++)
                if (!(vdCIJf6zl != LLQwDxUmbiE[DsR1r2kGf5MN].eFna1We[ZP0qyzL]))
                    a[vdCIJf6zl - 65]++;
    }
    {
        DsR1r2kGf5MN = 0;
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
        while ((716 - 690) > DsR1r2kGf5MN) {
            if (a[DsR1r2kGf5MN] > nQNerpKEt)
                nQNerpKEt = a[DsR1r2kGf5MN];
            DsR1r2kGf5MN = DsR1r2kGf5MN +1;
        };
    }
    {
        DsR1r2kGf5MN = 0;
        while (DsR1r2kGf5MN < (684 - 658)) {
            if (!(a[DsR1r2kGf5MN] != nQNerpKEt)) {
                p = DsR1r2kGf5MN +65;
                printf ("%c\n%d\n", p, a[p - 65]);
            }
            DsR1r2kGf5MN = DsR1r2kGf5MN +1;
        };
    }
    for (DsR1r2kGf5MN = 0; DsR1r2kGf5MN < uziL1CBvNu; DsR1r2kGf5MN++) {
        ZP0qyzL = 0;
        while (LLQwDxUmbiE[DsR1r2kGf5MN].eFna1We[ZP0qyzL] != '\0') {
            if (p == LLQwDxUmbiE[DsR1r2kGf5MN].eFna1We[ZP0qyzL])
                printf ("%d\n", LLQwDxUmbiE[DsR1r2kGf5MN].num);
            ZP0qyzL = ZP0qyzL +1;
        };
    };
}

