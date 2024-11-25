int RGk3An7P1D4l (int Mi3jFNxBp [(789 - 780)], int n);
int min (int CqbxKdyI, int num, int C [] [(221 - 212)], int zR4iTns5tO);

void  main () {
    int DSNqLPEWBHts;
    int zR4iTns5tO;
    int n;
    int a [9] [9];
    int l7LsHrCvGFWM;
    int j;
    int vxNpJ7q6UoRO;
    DSNqLPEWBHts = (873 - 873);
    scanf ("%d,%d", &zR4iTns5tO, &n);
    for (l7LsHrCvGFWM = (826 - 826); zR4iTns5tO > l7LsHrCvGFWM; l7LsHrCvGFWM = l7LsHrCvGFWM + 1)
        for (j = (545 - 545); n > j; j = j + 1)
            scanf ("%d", &a[l7LsHrCvGFWM][j]);
    {
        l7LsHrCvGFWM = 0;
        while (l7LsHrCvGFWM < zR4iTns5tO) {
            vxNpJ7q6UoRO = RGk3An7P1D4l (a[l7LsHrCvGFWM], n);
            if (min (a[l7LsHrCvGFWM][vxNpJ7q6UoRO], vxNpJ7q6UoRO, a, zR4iTns5tO) == 1) {
                DSNqLPEWBHts = 1;
                printf ("%d+%d", l7LsHrCvGFWM, vxNpJ7q6UoRO);
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
            l7LsHrCvGFWM = l7LsHrCvGFWM + 1;
        };
    }
    if (!(0 != DSNqLPEWBHts))
        printf ("No");
}

int RGk3An7P1D4l (int Mi3jFNxBp [9], int n) {
    int jk9tpbUrlw;
    int VsLfJvil;
    jk9tpbUrlw = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    VsLfJvil = 0;
    {
        jk9tpbUrlw = 0;
        while (jk9tpbUrlw < n) {
            if (Mi3jFNxBp[jk9tpbUrlw] > Mi3jFNxBp[VsLfJvil])
                VsLfJvil = jk9tpbUrlw;
            jk9tpbUrlw = jk9tpbUrlw + 1;
        };
    }
    return (VsLfJvil);
}

int min (int CqbxKdyI, int num, int C [] [9], int zR4iTns5tO) {
    int minvalue = CqbxKdyI, l7LsHrCvGFWM, blag = 1;
    for (l7LsHrCvGFWM = 0; l7LsHrCvGFWM < zR4iTns5tO; l7LsHrCvGFWM = l7LsHrCvGFWM + 1)
        if (C[l7LsHrCvGFWM][num] < CqbxKdyI) {
            blag = 0;
            return (0);
        }
    return (blag);
}

