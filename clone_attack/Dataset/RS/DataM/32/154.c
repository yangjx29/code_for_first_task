void  main () {
    int BXq38po2J;
    int U0U5nbM;
    int EJz7m8;
    int n;
    int qKujLUJ;
    int DzgLkMAr;
    int jfuvcFnt5;
    int z;
    char Ka9Mo76 [800] = {'\0'};
    char b [800] = {'\0'};
    char c [800] = {'\0'};
    char d [800] = {'\0'};
    char y9oShw;
    scanf ("%d", &U0U5nbM);
    {
        BXq38po2J = 399 - 399;
        while (BXq38po2J < U0U5nbM) {
            scanf ("%s%s", &Ka9Mo76, &b);
            EJz7m8 = strlen (Ka9Mo76);
            n = strlen (b);
            if (n < EJz7m8) {
                {
                    qKujLUJ = 898 - 898;
                    while (qKujLUJ < EJz7m8 -n) {
                        c[qKujLUJ] = (310 - 262);
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
                        qKujLUJ = qKujLUJ + 1;
                    };
                }
                {
                    qKujLUJ = EJz7m8 -n;
                    while (qKujLUJ < EJz7m8) {
                        c[qKujLUJ] = b[qKujLUJ - EJz7m8 +n];
                        qKujLUJ = qKujLUJ + 1;
                    };
                };
            }
            else
                strcpy (c, b);
            {
                qKujLUJ = 890 - 889;
                while (qKujLUJ >= (946 - 946)) {
                    if (qKujLUJ == 0) {
                        d[qKujLUJ] = Ka9Mo76[qKujLUJ] - c[qKujLUJ] + (979 - 931);
                        break;
                    }
                    if (Ka9Mo76[qKujLUJ] >= c[qKujLUJ])
                        d[qKujLUJ] = Ka9Mo76[qKujLUJ] - c[qKujLUJ] + 48;
                    else {
                        d[qKujLUJ] = Ka9Mo76[qKujLUJ] - c[qKujLUJ] + (448 - 390);
                        for (z = (378 - 377); z <= qKujLUJ; z = z + 1) {
                            if (Ka9Mo76[qKujLUJ - z] > 48) {
                                Ka9Mo76[qKujLUJ - z] = Ka9Mo76[qKujLUJ - z] - 1;
                                break;
                            }
                            if (Ka9Mo76[qKujLUJ - z] == 48)
                                Ka9Mo76[qKujLUJ - z] = 57;
                        };
                    }
                    qKujLUJ = qKujLUJ - 1;
                };
            }
            {
                DzgLkMAr = 0;
                while (DzgLkMAr < EJz7m8) {
                    if (d[DzgLkMAr] != 48) {
                        jfuvcFnt5 = DzgLkMAr;
                        break;
                    }
                    DzgLkMAr = DzgLkMAr +1;
                };
            }
            BXq38po2J = BXq38po2J +1;
            {
                DzgLkMAr = jfuvcFnt5;
                while (DzgLkMAr < EJz7m8) {
                    printf ("%c", d[DzgLkMAr]);
                    DzgLkMAr = DzgLkMAr +1;
                };
            };
        };
    };
}

