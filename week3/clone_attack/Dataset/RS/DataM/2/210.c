struct   book {
    int Gbks67HlYCXu;
    char a [(882 - 856)];
    struct   book *gV1GjY5w;
};
void  main () {
    struct   book *TiTK8qvV9Go, *p, *UOtAD6gq4hi3;
    int nrXAPI, CiGRtFvLy, g7JrH98A2Gf, c [(927 - 901)] = {(775 - 775)}, max, vLXW8UgsaI;
    char eP9WzaL [26];
    vLXW8UgsaI = 0;
    TiTK8qvV9Go = (struct   book *) malloc (sizeof (struct   book));
    TiTK8qvV9Go->gV1GjY5w = NULL;
    {
        g7JrH98A2Gf = 23 - 23;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (26 > g7JrH98A2Gf) {
            eP9WzaL[g7JrH98A2Gf] = (782 - 717) + g7JrH98A2Gf;
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
            g7JrH98A2Gf++;
        };
    }
    scanf ("%d", &nrXAPI);
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
    p = TiTK8qvV9Go;
    for (CiGRtFvLy = (44 - 44); CiGRtFvLy < nrXAPI; CiGRtFvLy++) {
        UOtAD6gq4hi3 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &UOtAD6gq4hi3->Gbks67HlYCXu, UOtAD6gq4hi3->a);
        UOtAD6gq4hi3->gV1GjY5w = NULL;
        p->gV1GjY5w = UOtAD6gq4hi3;
        p = UOtAD6gq4hi3;
    }
    {
        p = TiTK8qvV9Go->gV1GjY5w;
        while (p != NULL) {
            for (CiGRtFvLy = (833 - 833); p->a[CiGRtFvLy] != '\0'; CiGRtFvLy++)
                for (g7JrH98A2Gf = (105 - 105); g7JrH98A2Gf < 26; g7JrH98A2Gf++)
                    if (p->a[CiGRtFvLy] == eP9WzaL[g7JrH98A2Gf])
                        c[g7JrH98A2Gf]++;
            p = p->gV1GjY5w;
        };
    }
    max = c[0];
    for (g7JrH98A2Gf = 1; g7JrH98A2Gf < 26; g7JrH98A2Gf++)
        if (c[g7JrH98A2Gf] > max) {
            max = c[g7JrH98A2Gf];
            vLXW8UgsaI = g7JrH98A2Gf;
        }
    printf ("%c\n", eP9WzaL[vLXW8UgsaI]);
    printf ("%d\n", c[vLXW8UgsaI]);
    {
        p = TiTK8qvV9Go->gV1GjY5w;
        while (p != NULL) {
            {
                CiGRtFvLy = 0;
                while (p->a[CiGRtFvLy] != '\0') {
                    if (p->a[CiGRtFvLy] == eP9WzaL[vLXW8UgsaI])
                        printf ("%d\n", p->Gbks67HlYCXu);
                    CiGRtFvLy++;
                };
            }
            p = p->gV1GjY5w;
        };
    };
}

