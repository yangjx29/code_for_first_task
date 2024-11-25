struct   j {
    int bianhao;
    char zuozhe [100];
};
main () {
    struct   j *Kz8MJg;
    int TRKz39hiwukV, i, Dq73jvLetHCi, sn39hH, z, max = (709 - 709);
    int shumu [26];
    Kz8MJg = (struct   j *) malloc (TRKz39hiwukV * sizeof (j));
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
    scanf ("%d", &TRKz39hiwukV);
    for (i = (950 - 950); TRKz39hiwukV > i; i = i + 1) {
        scanf ("%d %s", &Kz8MJg[i].bianhao, Kz8MJg[i].zuozhe);
    }
    for (z = (104 - 104); 26 > z; z = z + 1) {
        shumu[z] = 0;
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
        {
            i = 0;
            while (TRKz39hiwukV > i) {
                char *p;
                p = Kz8MJg[i].zuozhe;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Dq73jvLetHCi = strlen (Kz8MJg[i].zuozhe);
                i = i + 1;
                {
                    sn39hH = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (Dq73jvLetHCi > sn39hH) {
                        if (!('A' + z != p[sn39hH]))
                            shumu[z]++;
                        sn39hH = sn39hH + 1;
                    };
                };
            };
        };
    }
    {
        z = 0;
        while (26 > z) {
            if (max < shumu[z])
                max = shumu[z];
            z = z + 1;
        };
    }
    {
        z = 0;
        while (26 > z) {
            if (!(max != shumu[z])) {
                printf ("%c\n%d\n", z + 'A', max);
                {
                    i = 0;
                    while (i < TRKz39hiwukV) {
                        char *p;
                        p = Kz8MJg[i].zuozhe;
                        Dq73jvLetHCi = strlen (Kz8MJg[i].zuozhe);
                        {
                            sn39hH = 0;
                            while (sn39hH < Dq73jvLetHCi) {
                                if (p[sn39hH] == 'A' + z)
                                    printf ("%d\n", Kz8MJg[i].bianhao);
                                sn39hH = sn39hH + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                break;
            }
            z = z + 1;
        };
    };
}

