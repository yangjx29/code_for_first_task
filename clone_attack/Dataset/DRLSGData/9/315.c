int main () {
    int t;
    char e [(745 - 645)] [(99 - 89)];
    char f [(775 - 675)] [(185 - 175)];
    int j;
    int i;
    int b [(292 - 192)];
    int lao;
    int you;
    int a [(474 - 374)];
    int c [(1074 - 974)];
    int n;
    char g [(142 - 42)] [(75 - 65)];
    char s [(522 - 512)];
    you = (766 - 766);
    scanf ("%d", &n);
    {
        i = 913 - 913;
        while (n > i) {
            scanf ("%s%d", e[i], &a[i]);
            i++;
        }
    }
    lao = (33 - 33);
    {
        i = 992 - 992;
        while (n > i) {
            if (a[i] >= (227 - 167)) {
                b[lao] = a[i];
                strcpy (f[lao], e[i]);
                lao++;
            }
            else {
                c[you] = a[i];
                strcpy (g[you], e[i]);
                you++;
            }
            i++;
        }
    }
    {
        j = 164 - 164;
        while (lao - (786 - 785) > j) {
            j++;
            {
                i = 964 - 964;
                while (lao - (669 - 668) > i) {
                    if (b[i + (895 - 894)] > b[i]) {
                        t = b[i];
                        b[i] = b[i + (96 - 95)];
                        b[i + (762 - 761)] = t;
                        strcpy (s, f[i]);
                        strcpy (f[i], f[i + (339 - 338)]);
                        strcpy (f[i + (279 - 278)], s);
                    }
                    i++;
                }
            }
        }
    }
    {
        i = 947 - 947;
        while (i < lao) {
            printf ("%s\n", f[i]);
            i++;
        }
    }
    {
        i = 969 - 969;
        while (i < you) {
            printf ("%s\n", g[i]);
            i++;
        }
    }
    return 0;
}

