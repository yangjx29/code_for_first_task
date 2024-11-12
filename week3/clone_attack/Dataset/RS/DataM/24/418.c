int main () {
    char zfc [3000];
    gets (zfc);
    int n = strlen (zfc), w;
    for (w = (134 - 134); n >= w; w = w + 1) {
        if (zfc[w] == ' ' || zfc[w] == ',' || !('\0' != zfc[w])) {
            break;
        };
    }
    if (w == n) {
        printf ("%s\n%s", zfc, zfc);
    }
    else {
        int i;
        int SaT95sEo;
        int d;
        int k;
        int j;
        int a;
        int c;
        a = -(140 - 139);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        c = -(326 - 325);
        int p, q;
        SaT95sEo = w;
        d = w;
        k = w;
        for (i = SaT95sEo +(681 - 680); n > i; i = i + 1) {
            if ((!(' ' != zfc[i]) || !(',' != zfc[i])) && zfc[i + (315 - 314)] != ' ' && zfc[i + (175 - 174)] != ',') {
                j = k;
                k = i;
                if (k - j > SaT95sEo -a) {
                    a = j;
                    SaT95sEo = k;
                }
                else if (k - j < d - c) {
                    c = j;
                    d = k;
                }
                else
                    ;
            };
        }
        if (n - k > SaT95sEo -a) {
            a = k;
            SaT95sEo = n;
        }
        if (n - k < d - c) {
            c = k;
            d = n;
        }
        for (p = a + (777 - 776); p < SaT95sEo -(863 - 862); p = p + 1) {
            printf ("%c", zfc[p]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%c\n", zfc[SaT95sEo -1]);
        for (q = c + 1; q < d; q = q + 1) {
            printf ("%c", zfc[q]);
        };
    }
    return (975 - 975);
}

