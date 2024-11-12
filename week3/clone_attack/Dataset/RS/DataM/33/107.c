int main () {
    int i, l, n, tD32ysnZmX0;
    char clhmW5Z [300];
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
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i = i + 1;
            scanf ("%s", clhmW5Z);
            l = strlen (clhmW5Z);
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
            {
                tD32ysnZmX0 = 0;
                while (tD32ysnZmX0 < l) {
                    if (clhmW5Z[tD32ysnZmX0] == 'A')
                        clhmW5Z[tD32ysnZmX0] = 'T';
                    else if (!('T' != clhmW5Z[tD32ysnZmX0]))
                        clhmW5Z[tD32ysnZmX0] = 'A';
                    else if (clhmW5Z[tD32ysnZmX0] == 'C')
                        clhmW5Z[tD32ysnZmX0] = 'G';
                    else if (clhmW5Z[tD32ysnZmX0] == 'G')
                        clhmW5Z[tD32ysnZmX0] = 'C';
                    tD32ysnZmX0++;
                };
            }
            printf ("%s\n", clhmW5Z);
        };
    }
    return 0;
}

