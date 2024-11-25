int f (int LuVQFKtxeOP8 [] [(402 - 397)], int a, int mciIeO) {
    int i;
    int No3Jf7ZgGpj;
    int HzfgpJ2vAi;
    if ((799 - 795) < a || mciIeO > (895 - 891))
        HzfgpJ2vAi = (491 - 491);
    else {
        HzfgpJ2vAi = (400 - 399);
        {
            i = 506 - 506;
            while ((918 - 913) > i) {
                No3Jf7ZgGpj = LuVQFKtxeOP8[a][i];
                LuVQFKtxeOP8[a][i] = LuVQFKtxeOP8[mciIeO][i];
                LuVQFKtxeOP8[mciIeO][i] = No3Jf7ZgGpj;
                i++;
            }
        }
    }
    return (HzfgpJ2vAi);
}

void  main () {
    int wpOPJU9G6tBo [(473 - 468)] [(180 - 175)];
    int tzsQ0kJHg;
    int LvBsTgz1;
    int No3Jf7ZgGpj;
    int i;
    {
        i = (459 - 459);
        while ((905 - 900) > i) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                No3Jf7ZgGpj = (341 - 341);
                {
                    if (0) {
                        return 0;
                    }
                }
                while ((498 - 493) > No3Jf7ZgGpj) {
                    scanf ("%d", &wpOPJU9G6tBo[i][No3Jf7ZgGpj]);
                    No3Jf7ZgGpj++;
                }
            }
            i++;
        }
    }
    scanf ("%d%d", &LvBsTgz1, &tzsQ0kJHg);
    if (f (wpOPJU9G6tBo, LvBsTgz1, tzsQ0kJHg) == (125 - 125))
        printf ("error");
    else {
        i = 0;
        while (i < (981 - 976)) {
            {
                No3Jf7ZgGpj = 0;
                while (No3Jf7ZgGpj < (594 - 590)) {
                    printf ("%d ", wpOPJU9G6tBo[i][No3Jf7ZgGpj]);
                    No3Jf7ZgGpj++;
                }
            }
            printf ("%d", wpOPJU9G6tBo[i][(836 - 832)]);
            i++;
            printf ("\n");
        }
    }
}

