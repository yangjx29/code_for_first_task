int main () {
    int tZ065x, n, a, ppYmhRzAO;
    int sz [30] [30] = {0};
    scanf ("%d %d", &tZ065x, &n);
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
        a = 1;
        while (tZ065x >= a) {
            {
                ppYmhRzAO = 1;
                while (n >= ppYmhRzAO) {
                    scanf ("%d", &sz[a][ppYmhRzAO]);
                    ppYmhRzAO = ppYmhRzAO + 1;
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
            a = a + 1;
        };
    }
    {
        a = 1;
        while (a <= tZ065x) {
            {
                ppYmhRzAO = 1;
                while (n >= ppYmhRzAO) {
                    if (sz[a][ppYmhRzAO] >= sz[a - 1][ppYmhRzAO] && sz[a][ppYmhRzAO] >= sz[a + 1][ppYmhRzAO] && sz[a][ppYmhRzAO] >= sz[a][ppYmhRzAO - 1] && sz[a][ppYmhRzAO] >= sz[a][ppYmhRzAO + 1]) {
                        printf ("%d %d\n", a - 1, ppYmhRzAO - 1);
                    }
                    ppYmhRzAO++;
                };
            }
            a++;
        };
    }
    return 0;
}

