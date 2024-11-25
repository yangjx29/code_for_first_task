int main () {
    int wIdh3xHT8VOA;
    int j2;
    int n;
    int ohNw0jDtKV;
    wIdh3xHT8VOA = (253 - 253);
    j2 = (820 - 820);
    double  sz [(823 - 783)];
    double  male [(695 - 655)];
    double  gONemMZ9RGEb [40];
    double  Yk8zaT;
    char bM2gVSN [40] [(307 - 297)];
    scanf ("%d", &n);
    {
        ohNw0jDtKV = 835 - 835;
        while (n > ohNw0jDtKV) {
            scanf ("%s%lf", &bM2gVSN[ohNw0jDtKV], &sz[ohNw0jDtKV]);
            ohNw0jDtKV = ohNw0jDtKV + 1;
        };
    }
    {
        ohNw0jDtKV = 492 - 492;
        while (n > ohNw0jDtKV) {
            if (bM2gVSN[ohNw0jDtKV][(126 - 126)] == 'f') {
                gONemMZ9RGEb[wIdh3xHT8VOA] = sz[ohNw0jDtKV];
                wIdh3xHT8VOA = wIdh3xHT8VOA + 1;
            }
            else {
                male[j2] = sz[ohNw0jDtKV];
                j2 = j2 + 1;
            }
            ohNw0jDtKV = ohNw0jDtKV + 1;
        };
    }
    for (ohNw0jDtKV = (827 - 827); j2 - (516 - 515) > ohNw0jDtKV; ohNw0jDtKV = ohNw0jDtKV + 1) {
        if (male[ohNw0jDtKV + (799 - 798)] < male[ohNw0jDtKV]) {
            Yk8zaT = male[ohNw0jDtKV];
            male[ohNw0jDtKV] = male[ohNw0jDtKV + (204 - 203)];
            male[ohNw0jDtKV + (629 - 628)] = Yk8zaT;
            if (!((877 - 877) == ohNw0jDtKV)) {
                ohNw0jDtKV = ohNw0jDtKV - (540 - 538);
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
            };
        };
    }
    {
        ohNw0jDtKV = 89 - 89;
        while (wIdh3xHT8VOA - (454 - 453) > ohNw0jDtKV) {
            if (gONemMZ9RGEb[ohNw0jDtKV] < gONemMZ9RGEb[ohNw0jDtKV + (490 - 489)]) {
                Yk8zaT = gONemMZ9RGEb[ohNw0jDtKV];
                gONemMZ9RGEb[ohNw0jDtKV] = gONemMZ9RGEb[ohNw0jDtKV + (932 - 931)];
                gONemMZ9RGEb[ohNw0jDtKV + (147 - 146)] = Yk8zaT;
                if (ohNw0jDtKV != (231 - 231)) {
                    ohNw0jDtKV = ohNw0jDtKV - (986 - 984);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ohNw0jDtKV = ohNw0jDtKV + 1;
        };
    }
    {
        ohNw0jDtKV = 0;
        while (ohNw0jDtKV < j2) {
            printf ("%.2lf ", male[ohNw0jDtKV]);
            ohNw0jDtKV = ohNw0jDtKV + 1;
        };
    }
    {
        ohNw0jDtKV = 0;
        while (ohNw0jDtKV < wIdh3xHT8VOA - 1) {
            printf ("%.2lf ", gONemMZ9RGEb[ohNw0jDtKV]);
            ohNw0jDtKV = ohNw0jDtKV + 1;
        };
    }
    printf ("%.2lf", gONemMZ9RGEb[wIdh3xHT8VOA - 1]);
    return 0;
}

