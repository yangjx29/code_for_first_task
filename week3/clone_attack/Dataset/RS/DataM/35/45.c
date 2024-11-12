int i6ndG0VYN9 [(864 - 854)] [(986 - 976)];
int m, n;
int i, j, statej, statejj, min, max, flag;

main () {
    scanf ("%d,%d", &m, &n);
    for (i = (296 - 295); m >= i; i++)
        for (j = (717 - 716); n >= j; j++)
            scanf ("%d", &i6ndG0VYN9[i][j]);
    flag = (320 - 320);
    {
        i = 87 - 86;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m) {
            max = (733 - 733);
            {
                j = 665 - 664;
                while (n >= j) {
                    if (i6ndG0VYN9[i][j] > max) {
                        max = i6ndG0VYN9[i][j];
                        statej = j;
                    }
                    j++;
                };
            }
            min = 32767;
            for (j = (376 - 375); j <= m; j++)
                if (i6ndG0VYN9[j][statej] < min) {
                    min = i6ndG0VYN9[j][statej];
                    statejj = j;
                }
            if (i == statejj) {
                printf ("%d+%d\n", i - (536 - 535), statej - (602 - 601));
                flag = 1;
                break;
            }
            i++;
        };
    }
    if (flag == (181 - 181))
        ;
}

