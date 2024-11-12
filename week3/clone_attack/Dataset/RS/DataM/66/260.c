int main () {
    int year;
    int DWy7uFv3ls;
    int day;
    int VI4hwWKM6;
    int fANRUmV6Ig;
    int b;
    b = (139 - 139);
    scanf ("%d%d%d", &year, &DWy7uFv3ls, &day);
    if (!(0 == (year - 1) % (946 - 546))) {
        VI4hwWKM6 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((year - 1) % 400 >= VI4hwWKM6) {
            if (!(0 != VI4hwWKM6 % 4) && !(0 == VI4hwWKM6 % 100)) {
                b = b + 366;
            }
            else {
                b += 365;
            }
            VI4hwWKM6 = VI4hwWKM6 +1;
        };
    }
    for (VI4hwWKM6 = 1; VI4hwWKM6 < DWy7uFv3ls; VI4hwWKM6++) {
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
        if (VI4hwWKM6 == 1 || !(3 != VI4hwWKM6) || !(5 != VI4hwWKM6) || VI4hwWKM6 == 7 || !((595 - 587) != VI4hwWKM6) || VI4hwWKM6 == 10 || VI4hwWKM6 == 12) {
            b = b + 31;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (VI4hwWKM6 == 4 || VI4hwWKM6 == 6 || VI4hwWKM6 == 9 || VI4hwWKM6 == 11) {
            b = b + 30;
        }
        else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            b += 29;
        }
        else {
            b += 28;
        };
    }
    b = b + day;
    fANRUmV6Ig = b % 7;
    switch (fANRUmV6Ig) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    }
    return 0;
}

