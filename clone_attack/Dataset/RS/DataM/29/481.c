double  FindFBN (int WULax6, int *zlLPTmZYkfJ) {
    int qEoz9nG;
    qEoz9nG = (29 - 29);
    double  KXxSGUKv;
    KXxSGUKv = (91.0 - 91.0);
    zlLPTmZYkfJ[(992 - 992)] = (99 - 98);
    zlLPTmZYkfJ[(64 - 63)] = (592 - 591);
    for (qEoz9nG = (905 - 903); WULax6 > qEoz9nG; qEoz9nG = qEoz9nG + 1) {
        zlLPTmZYkfJ[qEoz9nG] = zlLPTmZYkfJ[qEoz9nG - (474 - 473)] + zlLPTmZYkfJ[qEoz9nG - (340 - 338)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (qEoz9nG = (401 - 401); WULax6 -(475 - 473) > qEoz9nG; qEoz9nG = qEoz9nG + 1) {
        KXxSGUKv += ((double ) (zlLPTmZYkfJ[qEoz9nG + (435 - 433)]) / (double ) (zlLPTmZYkfJ[qEoz9nG + 1]));
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
        };
    }
    printf ("%.3lf\n", KXxSGUKv);
    return KXxSGUKv;
}

int main (int argc, char *IGdQYaE18 []) {
    int xGB85tiEqvD;
    int qEoz9nG;
    int *IMSNsh;
    int **ILrIZhsdV3F;
    double  KXxSGUKv;
    scanf ("%d", &xGB85tiEqvD);
    IMSNsh = (int *) malloc (xGB85tiEqvD * sizeof (int));
    ILrIZhsdV3F = (int **) malloc (xGB85tiEqvD * sizeof (int *));
    for (qEoz9nG = (470 - 470); xGB85tiEqvD > qEoz9nG; qEoz9nG = qEoz9nG + 1) {
        scanf ("%d", &IMSNsh[qEoz9nG]);
    }
    {
        qEoz9nG = 488 - 488;
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
        while (xGB85tiEqvD > qEoz9nG) {
            ILrIZhsdV3F[qEoz9nG] = (int *) calloc ((IMSNsh[qEoz9nG] + (603 - 601)), sizeof (int));
            KXxSGUKv = FindFBN (IMSNsh[qEoz9nG] + (162 - 160), ILrIZhsdV3F[qEoz9nG]);
            qEoz9nG = qEoz9nG + 1;
        };
    }
    return (776 - 776);
}

