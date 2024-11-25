int main () {
    int n, i, k, m, s;
    int eVt0nkjJa [100];
    int sz [100];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &eVt0nkjJa[i]);
    }
    {
        i = 0;
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
        while (i < n) {
            m = eVt0nkjJa[i];
            sz[0] = (711 - 710);
            sz[(891 - 890)] = (273 - 272);
            if (!(1 != m))
                s = 1;
            if (!((222 - 220) != m))
                s = 1;
            if (m != 1 && m != 2) {
                s = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    k = 2;
                    while (k < eVt0nkjJa[i]) {
                        sz[k] = sz[k - 1] + sz[k - 2];
                        s = sz[k];
                        k++;
                    };
                };
            }
            i++;
            printf ("%d\n", s);
        };
    }
    return 0;
}

