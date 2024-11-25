int main () {
    char W3vPFO [500];
    double  r;
    char jiyin [500];
    int n;
    n = 0;
    int i, k, L, jh7V6t;
    scanf ("%lf", &r);
    scanf ("%s", W3vPFO);
    scanf ("%s", jiyin);
    {
        k = 0;
        while (jiyin[k] != '\0') {
            if (jiyin[k + 1] == '\0') {
                jh7V6t = k;
            }
            k++;
        };
    }
    for (i = 0; !('\0' == W3vPFO[i]); i++) {
        if (W3vPFO[i + 1] == '\0') {
            L = i;
        };
    }
    if (L != jh7V6t) {
    }
    else {
        {
            i = 0;
            while (W3vPFO[i] != '\0') {
                if (W3vPFO[i] != 'A' && !('T' == W3vPFO[i]) && !('C' == W3vPFO[i]) && W3vPFO[i] != 'G') {
                    printf ("error");
                    return 0;
                }
                i++;
            };
        }
        for (i = 0; jiyin[i] != '\0'; i++) {
            if (jiyin[i] != 'A' && jiyin[i] != 'T' && jiyin[i] != 'C' && jiyin[i] != 'G') {
                printf ("error");
                return 0;
            };
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (W3vPFO[i] != '\0') {
                if (W3vPFO[i] == jiyin[i]) {
                    n++;
                }
                i++;
            };
        }
        if (n * 1.0 / L > r) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    return 0;
}

