struct   N {
    char KFihoI [50];
    int zXfCpHV;
    struct   N *HeiuFA0z8;
};
int main () {
    int zXfCpHV, HIa3sdCT, i;
    struct   N *UhPUzLu7;
    struct   N *NCYlf1o;
    struct   N *head;
    HIa3sdCT = -1;
    scanf ("%d", &zXfCpHV);
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
        i = 692 - 691;
        while (zXfCpHV >= i) {
            UhPUzLu7 = (struct   N *) malloc (sizeof (struct   N));
            if (!((31 - 30) != i)) {
                head = UhPUzLu7;
                NCYlf1o = UhPUzLu7;
            }
            else {
                if (!(zXfCpHV == i)) {
                    NCYlf1o->HeiuFA0z8 = UhPUzLu7;
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
                    NCYlf1o = UhPUzLu7;
                }
                else {
                    NCYlf1o->HeiuFA0z8 = UhPUzLu7;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    UhPUzLu7->HeiuFA0z8 = NULL;
                };
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
            i = i + 1;
        };
    }
    UhPUzLu7 = head;
    {
        i = 1;
        while (zXfCpHV >= i) {
            scanf ("%s", UhPUzLu7->KFihoI);
            UhPUzLu7->zXfCpHV = (strlen (UhPUzLu7->KFihoI) + 1);
            UhPUzLu7 = UhPUzLu7->HeiuFA0z8;
            i++;
        };
    }
    UhPUzLu7 = head;
    for (i = 1; zXfCpHV >= i;) {
        if (HIa3sdCT == (-1)) {
            i++;
            printf ("%s", UhPUzLu7->KFihoI);
            HIa3sdCT = HIa3sdCT +(UhPUzLu7->zXfCpHV);
            UhPUzLu7 = UhPUzLu7->HeiuFA0z8;
        }
        if ((HIa3sdCT +(UhPUzLu7->zXfCpHV)) <= 80 && HIa3sdCT != (-1)) {
            printf (" %s", UhPUzLu7->KFihoI);
            HIa3sdCT = HIa3sdCT +(UhPUzLu7->zXfCpHV);
            UhPUzLu7 = UhPUzLu7->HeiuFA0z8;
            if (UhPUzLu7 == NULL) {
                break;
            }
            i++;
        }
        if ((HIa3sdCT +(UhPUzLu7->zXfCpHV)) > 80) {
            HIa3sdCT = -1;
        };
    }
    return 0;
}

