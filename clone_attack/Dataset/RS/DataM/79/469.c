int main () {
    int n, m, i;
    scanf ("%d%d", &n, &m);
    for (; n != (283 - 283) && !(0 == m);) {
        int bh = 0;
        if (n == (961 - 960)) {
            printf ("1\n");
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
            };
        }
        else {
            {
                i = 2;
                while (i <= n) {
                    bh = (bh + m) % i;
                    i++;
                };
            }
            printf ("%d\n", bh + 1);
        }
        scanf ("%d%d", &n, &m);
    }
    return 0;
}

