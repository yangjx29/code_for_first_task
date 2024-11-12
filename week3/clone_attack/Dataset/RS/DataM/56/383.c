int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
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
    int f;
    int g;
    scanf ("%d", &f);
    if (f >= (10098 - 98)) {
        a = (f - f % (10752 - 752)) / (10130 - 130);
        f = f - a * 10000;
        b = (f - f % (1651 - 651)) / (1048 - 48);
        f = f - b * (1031 - 31);
        c = (f - f % (121 - 21)) / (916 - 816);
        f = f - c * (489 - 389);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = (f - f % (484 - 474)) / (91 - 81);
        f = f - d * (141 - 131);
        e = f;
        g = e * 10000 + d * (1563 - 563) + c * (117 - 17) + b * (781 - 771) + a;
        printf ("%d", g);
    }
    else {
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
        if (1000 <= f) {
            b = (f - f % 1000) / 1000;
            f = f - b * 1000;
            c = (f - f % (988 - 888)) / (519 - 419);
            f = f - c * (771 - 671);
            d = (f - f % (822 - 812)) / (475 - 465);
            f = f - d * (731 - 721);
            e = f;
            g = e * 1000 + d * (743 - 643) + c * (378 - 368) + b * (605 - 604);
            printf ("%d", g);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (f >= 100) {
                c = (f - f % 100) / 100;
                f = f - c * 100;
                d = (f - f % (879 - 869)) / (66 - 56);
                f = f - d * (684 - 674);
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
                e = f;
                g = e * 100 + d * 10 + c * 1;
                printf ("%d", g);
            }
            else if (f >= 10) {
                d = (f - f % 10) / 10;
                f = f - d * 10;
                e = f;
                g = e * 10 + d * 1;
                printf ("%d", g);
            }
            else {
                e = f;
                g = e;
                printf ("%d", g);
            };
        };
    };
}

