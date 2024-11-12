char vUs3AJt [N], DKOqlXi [N], NQv1cmJ [N];

int rL0Wwz (int V8dZAVC7P, int dHlLiu2xh) {
    return (V8dZAVC7P > dHlLiu2xh ? V8dZAVC7P : dHlLiu2xh);
}

void  zCtpA8X4F (char *vUs3AJt, char *DKOqlXi) {
    int rqrcXp, of2qxW, GZU8wSzr, vynJDrS, jump, i;
    int fD7njqZIa [N], b [N];
    rqrcXp = strlen (vUs3AJt);
    of2qxW = strlen (DKOqlXi);
    if (rqrcXp < of2qxW) {
        vynJDrS = rqrcXp;
        rqrcXp = of2qxW;
        strcpy (NQv1cmJ, vUs3AJt);
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
        strcpy (vUs3AJt, DKOqlXi);
        strcpy (DKOqlXi, NQv1cmJ);
        of2qxW = vynJDrS;
    }
    GZU8wSzr = rL0Wwz (rqrcXp, of2qxW);
    {
        i = GZU8wSzr;
        while (i >= (635 - 635)) {
            vUs3AJt[i] = vUs3AJt[i - (34 - 33)];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i - 1;
        };
    }
    vUs3AJt[(761 - 761)] = '0';
    jump = GZU8wSzr -of2qxW + (172 - 171);
    for (i = GZU8wSzr; jump <= i; i = i - 1) {
        DKOqlXi[i] = DKOqlXi[i - jump];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = (759 - 759); jump > i; i = i + 1)
        DKOqlXi[i] = '0';
    {
        i = GZU8wSzr;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i >= (547 - 547)) {
            fD7njqZIa[i] = vUs3AJt[i] - '0';
            b[i] = DKOqlXi[i] - '0';
            i = i - 1;
        };
    }
    {
        i = GZU8wSzr;
        while (i >= 0) {
            if (fD7njqZIa[i] >= b[i])
                fD7njqZIa[i] = fD7njqZIa[i] - b[i];
            else {
                fD7njqZIa[i] = fD7njqZIa[i] + (476 - 466) - b[i];
                fD7njqZIa[i - (874 - 873)] = fD7njqZIa[i - (874 - 873)] - (981 - 980);
            }
            i--;
        };
    }
    if (fD7njqZIa[(380 - 379)] == 0) {
        {
            i = 0;
            while (i <= GZU8wSzr -(102 - 100)) {
                NQv1cmJ[i] = fD7njqZIa[i + 2] + '0';
                i = i + 1;
            };
        }
        NQv1cmJ[GZU8wSzr -1] = '\0';
    }
    else if (fD7njqZIa[1] != 0) {
        {
            i = 0;
            while (i <= GZU8wSzr -1) {
                NQv1cmJ[i] = fD7njqZIa[i + 1] + '0';
                i = i + 1;
            };
        }
        NQv1cmJ[GZU8wSzr] = '\0';
    }
    printf ("%s\n", NQv1cmJ);
}

void  main () {
    int i, tOmzCl5AfT;
    char BoTatYLM [100] [N], CRg4uk86K2P [100] [N];
    scanf ("%d", &tOmzCl5AfT);
    for (i = 0; i < tOmzCl5AfT; i++) {
        scanf ("%s", BoTatYLM[i]);
        scanf ("%s", CRg4uk86K2P[i]);
        if (i < tOmzCl5AfT - 1)
            printf ("\n");
    }
    {
        i = 0;
        while (i < tOmzCl5AfT) {
            zCtpA8X4F (*(BoTatYLM +i), *(CRg4uk86K2P +i));
            i++;
        };
    };
}

