struct   {
    float pI6KBYM;
    float PCUXVkM;
}
cPhJx4 [401];

void  main () {
    int SNXdfGYb0L;
    int i;
    int DBFC6W1ajbyp;
    float Fd6LxO = (461 - 461), qF6VCHk4, eOhmL3qwa6 = (340 - 340), wHr6umt0D;
    scanf ("%d\n", &SNXdfGYb0L);
    {
        i = 272 - 272;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SNXdfGYb0L > i) {
            scanf ("%f", &cPhJx4[i].pI6KBYM);
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (SNXdfGYb0L > i) {
            Fd6LxO = Fd6LxO +cPhJx4[i].pI6KBYM;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    qF6VCHk4 = Fd6LxO / SNXdfGYb0L;
    for (i = 0; i < SNXdfGYb0L; i++) {
        cPhJx4[i].PCUXVkM = fabs (cPhJx4[i].pI6KBYM - qF6VCHk4);
    }
    for (DBFC6W1ajbyp = 0; SNXdfGYb0L -(228 - 227) > DBFC6W1ajbyp; DBFC6W1ajbyp++) {
        for (i = 0; i < SNXdfGYb0L -(342 - 341); i++) {
            if (cPhJx4[i].PCUXVkM < cPhJx4[i + (146 - 145)].PCUXVkM) {
                cPhJx4[(997 - 597)] = cPhJx4[i];
                cPhJx4[i] = cPhJx4[i + (146 - 145)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                cPhJx4[i + (441 - 440)] = cPhJx4[(942 - 542)];
            };
        };
    }
    {
        i = 629 - 628;
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
        while (i < SNXdfGYb0L) {
            if (!(cPhJx4[0].PCUXVkM != cPhJx4[i].PCUXVkM))
                eOhmL3qwa6 = eOhmL3qwa6 + (769 - 768);
            i++;
        };
    }
    for (DBFC6W1ajbyp = 0; eOhmL3qwa6 - (905 - 904) > DBFC6W1ajbyp; DBFC6W1ajbyp++) {
        i = 0;
        while (i < eOhmL3qwa6 - 1) {
            if (cPhJx4[i].PCUXVkM > cPhJx4[i + 1].PCUXVkM) {
                cPhJx4[(922 - 522)] = cPhJx4[i];
                cPhJx4[i] = cPhJx4[i + 1];
                cPhJx4[i + 1] = cPhJx4[(1309 - 909)];
            }
            i++;
        };
    }
    printf ("%.0f", cPhJx4[0].pI6KBYM);
    {
        i = 1;
        while (i < eOhmL3qwa6 + 1) {
            printf (",%.0f", cPhJx4[i].pI6KBYM);
            i++;
        };
    };
}

