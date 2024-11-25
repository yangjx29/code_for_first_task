int main (int argc, char *argv []) {
    int count;
    int p;
    int q;
    int u52TGAZyj0Lz;
    count = 0;
    int i;
    int j;
    int a;
    int b;
    int c [8] [8];
    scanf ("%d,%d\n", &a, &b);
    {
        i = 0;
        while (a > i) {
            {
                j = 0;
                while (b > j) {
                    scanf ("%d", &c[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
    {
        i = 0;
        while (a > i) {
            q = 0;
            p = i;
            {
                j = 0;
                while (b - 1 > j) {
                    if (c[p][q] < c[i][j + 1])
                        q = j + 1;
                    j = j + 1;
                };
            }
            count = 0;
            {
                u52TGAZyj0Lz = 0;
                while (a > u52TGAZyj0Lz) {
                    if (c[u52TGAZyj0Lz][q] >= c[p][q])
                        count = count + 1;
                    u52TGAZyj0Lz++;
                };
            }
            if (count == a)
                break;
            i = i + 1;
        };
    }
    if (count == a)
        printf ("%d+%d", p, q);
    else
        ;
    return 0;
}

