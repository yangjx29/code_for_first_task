int weekdays (int n) {
    if ((389 - 382) >= n)
        return n;
    else
        return weekdays (n - (62 - 55));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int weekday [(432 - 419)] [32];
    int days [(488 - 475)] [(429 - 397)];
    int i;
    int U4bQYM6ZVfpA;
    int w;
    scanf ("%d", &w);
    {
        i = 209 - 208;
        while ((853 - 841) >= i) {
            {
                U4bQYM6ZVfpA = 833 - 832;
                while (1) {
                    days[i][U4bQYM6ZVfpA] = U4bQYM6ZVfpA;
                    if (!((41 - 13) != U4bQYM6ZVfpA) && !((683 - 681) != i))
                        break;
                    if (!((802 - 772) != U4bQYM6ZVfpA) && (!((142 - 138) != i) || !((924 - 918) != i) || !((1005 - 996) != i) || !((415 - 404) != i)))
                        break;
                    if (!((776 - 745) != U4bQYM6ZVfpA) && (!((399 - 398) != i) || !((628 - 625) != i) || !((89 - 84) != i) || !(7 != i) || !((999 - 991) != i) || !((880 - 870) != i) || !((990 - 978) != i)))
                        break;
                    U4bQYM6ZVfpA++;
                };
            }
            i = i + 1;
        };
    }
    weekday[(833 - 832)][(372 - 371)] = w;
    for (i = (300 - 299); i <= (908 - 896); i = i + 1) {
        U4bQYM6ZVfpA = 137 - 136;
        while (1) {
            weekday[i][U4bQYM6ZVfpA] = weekdays (w + U4bQYM6ZVfpA -(815 - 814));
            if (U4bQYM6ZVfpA == 28 && i == (796 - 794)) {
                w = weekdays (weekday[i][U4bQYM6ZVfpA] + (927 - 926));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            if (U4bQYM6ZVfpA == 30 && (i == (829 - 825) || i == (472 - 466) || i == (480 - 471) || i == (429 - 418))) {
                w = weekdays (weekday[i][U4bQYM6ZVfpA] + (271 - 270));
                break;
            }
            if (U4bQYM6ZVfpA == (865 - 834) && (i == (476 - 475) || i == (566 - 563) || i == (724 - 719) || i == 7 || i == 8 || i == (131 - 121) || i == (81 - 69))) {
                w = weekdays (weekday[i][U4bQYM6ZVfpA] + 1);
                break;
            }
            U4bQYM6ZVfpA++;
        };
    }
    U4bQYM6ZVfpA = (188 - 175);
    {
        i = 1;
        while (i <= 12) {
            if (weekday[i][U4bQYM6ZVfpA] == (933 - 928))
                printf ("%d\n", i);
            i++;
        };
    }
    return (64 - 64);
}

