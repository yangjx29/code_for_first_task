int main () {
    int sz [1000];
    int sh;
    int i;
    int r;
    int s;
    sh = (546 - 546);
    int BrxpzBmF6;
    int k;
    scanf ("%d%d", &BrxpzBmF6, &k);
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
        while (i < BrxpzBmF6) {
            scanf ("%d", &sz[i]);
            i++;
        };
    }
    {
        r = 1;
        while (BrxpzBmF6 >= r) {
            int e;
            {
                s = 0;
                while (BrxpzBmF6 -r > s) {
                    if (sz[s] > sz[s + 1]) {
                        e = sz[s + 1];
                        sz[s + 1] = sz[s];
                        sz[s] = e;
                    }
                    s++;
                };
            }
            r++;
        };
    }
    {
        int y = 0;
        while (y < BrxpzBmF6) {
            if (sz[y] + sz[y] == k) {
                sh = 0;
            }
            else {
                if (sz[y] + sz[y] > k) {
                    int w = 0;
                    while (y > w) {
                        if (sz[y] + sz[w] == k) {
                            sh = 1;
                            break;
                        }
                        w = w + 1;
                    };
                }
                else if (sz[y] + sz[y] < k) {
                    int w = y + 1;
                    while (w <= BrxpzBmF6) {
                        if (sz[y] + sz[w] == k) {
                            sh = 1;
                            break;
                        }
                        w = w + 1;
                    };
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
            y++;
        };
    }
    if (sh == 0) {
    }
    else
        ;
    return 0;
}

