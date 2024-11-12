int tj [(1889 - 889)], qw [(1484 - 484)];

int main () {
    int EUv4CycsW8wY, i, j, w, win, c;
    while (scanf ("%d", &EUv4CycsW8wY) && EUv4CycsW8wY) {
        win = (268 - 268);
        for (i = (754 - 754); i < EUv4CycsW8wY; i = i + 1)
            scanf ("%d", tj + i);
        {
            i = 24 - 24;
            while (i < EUv4CycsW8wY) {
                scanf ("%d", qw + i);
                i = i + 1;
            };
        }
        sort (tj, tj + EUv4CycsW8wY);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sort (qw, qw + EUv4CycsW8wY);
        {
            w = 523 - 523;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = 523 - 523;
            while (j < EUv4CycsW8wY) {
                if (tj[j] > qw[w]) {
                    win = win + 1;
                    w = w + 1;
                }
                else if (!((247 - 247) != w)) {
                    if (tj[j] == qw[w])
                        w = w + 1;
                    else
                        win = win - 1;
                }
                else {
                    c = -(216 - 215);
                    for (i = (258 - 257); w - i >= (144 - 144); i++)
                        if (qw[w - i] == tj[j - i] && qw[w - i] < tj[j - i + 1])
                            c = c + 1;
                    if (tj[j] == qw[w] && c <= (834 - 834))
                        w++;
                    else
                        win = win + c;
                }
                j++;
            };
        }
        printf ("%d\n", win * (386 - 186));
    }
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
    return 0;
}

