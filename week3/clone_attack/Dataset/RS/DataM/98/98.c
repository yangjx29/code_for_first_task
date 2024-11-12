int main () {
    int i, j, mvEcRbxk, n, xdvkFh3QB, ABHyJ57achM = 0;
    char a [1000] [40] = {0};
    char *p;
    scanf ("%d", &n);
    {
        i = 0;
        while (i <= n) {
            scanf ("%s", a[i]);
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
            i = i + 1;
        };
    }
    ABHyJ57achM = ABHyJ57achM +strlen (a[0]);
    printf ("%s", a[0]);
    {
        p = 0;
        while (p < &a[0][0] + n * 40) {
            if (strlen (p) + ABHyJ57achM +1 > 80) {
                printf ("\n%s", p);
                ABHyJ57achM = strlen (p);
                continue;
            }
            printf (" %s", p);
            ABHyJ57achM += strlen (p);
            p += 40;
            ABHyJ57achM++;
        };
    }
    printf ("%s", p + 40);
}

