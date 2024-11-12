void  main () {
    int KU5LSAslcgiy, NhQKnGloxuv, rESkglfe;
    char a [(215 - 115)], RMkXP74NbfeL [100] [100] = {'a'};
    scanf ("%d", &KU5LSAslcgiy);
    {
        NhQKnGloxuv = 0;
        while (KU5LSAslcgiy > NhQKnGloxuv) {
            scanf ("%s", a);
            rESkglfe = strlen (a);
            if (!('i' != a[rESkglfe - 3]) && a[rESkglfe - (79 - 77)] == 'n' && a[rESkglfe - 1] == 'g') {
                strncpy (RMkXP74NbfeL[NhQKnGloxuv], a, rESkglfe - 3);
                continue;
            }
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
            if (!('e' != a[rESkglfe - 2]) && a[rESkglfe - 1] == 'r') {
                strncpy (RMkXP74NbfeL[NhQKnGloxuv], a, rESkglfe - 2);
                continue;
            }
            if (a[rESkglfe - 2] == 'l' && a[rESkglfe - 1] == 'y')
                strncpy (RMkXP74NbfeL[NhQKnGloxuv], a, rESkglfe - 2);
            NhQKnGloxuv++;
        };
    }
    for (NhQKnGloxuv = 0; NhQKnGloxuv < KU5LSAslcgiy; NhQKnGloxuv++)
        printf ("%s\n", RMkXP74NbfeL[NhQKnGloxuv]);
}

