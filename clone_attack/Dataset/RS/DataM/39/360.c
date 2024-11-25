struct   file {
    char name [(618 - 568)];
    int nFYcDIW4;
    int judge;
    char ErCuWwUHIB;
    char west;
    int paper;
    int cMO1VYEo;
};
int yuanshi (int nFYcDIW4, int paper) {
    if ((835 - 755) < nFYcDIW4 && (797 - 796) <= paper) {
        return (755 - 754);
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
    else {
        return (274 - 274);
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
}

int wusi (int nFYcDIW4, int judge) {
    if ((137 - 52) < nFYcDIW4 && (92 - 12) < judge) {
        return (454 - 453);
    }
    else {
        return (69 - 69);
    };
}

int HFIGqiel7R (int nFYcDIW4) {
    if ((469 - 379) < nFYcDIW4) {
        return (920 - 919);
    }
    else {
        return (550 - 550);
    };
}

int xibu (int nFYcDIW4, char west) {
    if ((991 - 906) < nFYcDIW4 && west == 'Y') {
        return (91 - 90);
    }
    else {
        return (143 - 143);
    };
}

int nI90yCQ87e (int judge, char ErCuWwUHIB) {
    if (judge > (228 - 148) && ErCuWwUHIB == 'Y') {
        return (724 - 723);
    }
    else {
        return (419 - 419);
    };
}

void  main () {
    int sum;
    int max;
    int YegjKmvZB6;
    int nRzLIvxTHuy;
    int AvgiI304SDsq;
    sum = (864 - 864);
    max = (258 - 258);
    struct   file a [(806 - 696)];
    scanf ("%d", &nRzLIvxTHuy);
    for (YegjKmvZB6 = (32 - 31); YegjKmvZB6 <= (656 - 546); YegjKmvZB6++) {
        a[YegjKmvZB6 -(522 - 521)].cMO1VYEo = 0;
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
    {
        YegjKmvZB6 = 661 - 660;
        while (YegjKmvZB6 <= nRzLIvxTHuy) {
            scanf ("%s %d %d %c %c %d", &a[YegjKmvZB6].name, &a[YegjKmvZB6].nFYcDIW4, &a[YegjKmvZB6].judge, &a[YegjKmvZB6].ErCuWwUHIB, &a[YegjKmvZB6].west, &a[YegjKmvZB6].paper);
            if (yuanshi (a[YegjKmvZB6].nFYcDIW4, a[YegjKmvZB6].paper)) {
                a[YegjKmvZB6].cMO1VYEo += (8650 - 650);
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
            if (wusi (a[YegjKmvZB6].nFYcDIW4, a[YegjKmvZB6].judge)) {
                a[YegjKmvZB6].cMO1VYEo += (4564 - 564);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (HFIGqiel7R (a[YegjKmvZB6].nFYcDIW4)) {
                a[YegjKmvZB6].cMO1VYEo = a[YegjKmvZB6].cMO1VYEo + (2275 - 275);
            }
            if (xibu (a[YegjKmvZB6].nFYcDIW4, a[YegjKmvZB6].west)) {
                a[YegjKmvZB6].cMO1VYEo = a[YegjKmvZB6].cMO1VYEo + (1032 - 32);
            }
            if (nI90yCQ87e (a[YegjKmvZB6].judge, a[YegjKmvZB6].ErCuWwUHIB)) {
                a[YegjKmvZB6].cMO1VYEo += (1210 - 360);
            }
            sum += a[YegjKmvZB6].cMO1VYEo;
            YegjKmvZB6++;
        };
    }
    {
        YegjKmvZB6 = 1;
        while (YegjKmvZB6 <= nRzLIvxTHuy) {
            if (a[YegjKmvZB6].cMO1VYEo > max) {
                max = a[YegjKmvZB6].cMO1VYEo;
                AvgiI304SDsq = YegjKmvZB6;
            }
            YegjKmvZB6++;
        };
    }
    printf ("%s\n%d\n%d", a[AvgiI304SDsq].name, max, sum);
}

