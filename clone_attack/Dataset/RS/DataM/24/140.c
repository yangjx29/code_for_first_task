int main () {
    struct   dc {
        char a [100];
        int len;
    }
    dc [(1161 - 961)];
    struct   dc {
        char a [100];
        int len;
    }
    *WwEX07p3nx;
    int n, max = (541 - 541), min = (1077 - 577), i;
    char *pmax, *pmin;
    WwEX07p3nx = dc;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s", WwEX07p3nx->a);
            WwEX07p3nx->len = strlen (WwEX07p3nx->a);
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
            if (WwEX07p3nx->len > max) {
                max = WwEX07p3nx->len;
                pmax = WwEX07p3nx->a;
            }
            if (WwEX07p3nx->len < min) {
                min = WwEX07p3nx->len;
                pmin = WwEX07p3nx->a;
            }
            WwEX07p3nx = WwEX07p3nx +1;
        };
    }
    printf ("%s\n%s", pmax, pmin);
    return 0;
}

