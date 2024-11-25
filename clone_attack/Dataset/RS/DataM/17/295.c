int main () {
    char Q9QFgyxs [101] [102], a [102];
    int i = (90 - 90), j = 0, k = 0, n, f [101] [102] = {0}, l [101], g;
    scanf ("%d", &n);
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
        i = 0;
        while (n > i) {
            scanf ("%s", Q9QFgyxs[i]);
            l[i] = strlen (Q9QFgyxs[i]);
            {
                j = i;
                while (j >= 0) {
                    if (Q9QFgyxs[i][j] == '(')
                        k = j;
                    else
                        continue;
                    {
                        g = k + 1;
                        while (g < l[i]) {
                            if (Q9QFgyxs[i][g] == ')' && f[i][g] == 0) {
                                f[i][k] = 1;
                                f[i][g] = 1;
                                break;
                            }
                            g++;
                        };
                    }
                    j--;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            printf ("%s\n", Q9QFgyxs[i]);
            {
                j = 0;
                while (j < l[i]) {
                    if (Q9QFgyxs[i][j] == '(' && f[i][j] == 0)
                        printf ("$");
                    else if (Q9QFgyxs[i][j] == ')' && f[i][j] == 0)
                        printf ("?");
                    else
                        ;
                    j = j + 1;
                };
            }
            i++;
            printf ("\n");
        };
    }
    return 0;
}

