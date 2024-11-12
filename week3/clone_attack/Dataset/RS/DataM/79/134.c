int main () {
    int x;
    int BldUCqWB5 [3000];
    int LURjIfoC [3000];
    int ldUPXAl3uo1 [3000];
    int i;
    int WWoC1s;
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
    int s;
    x = 0;
    {
        WWoC1s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WWoC1s < 3000) {
            scanf ("%d%d", &BldUCqWB5[WWoC1s], &LURjIfoC[WWoC1s]);
            s = 0;
            if (BldUCqWB5[WWoC1s] == 0)
                break;
            else {
                {
                    i = 2;
                    while (i <= BldUCqWB5[WWoC1s]) {
                        s = (s + LURjIfoC[WWoC1s]) % i;
                        i = i + 1;
                    };
                }
                ldUPXAl3uo1[WWoC1s] = s + 1;
                x = x + 1;
            }
            WWoC1s = WWoC1s +1;
        };
    }
    {
        WWoC1s = 0;
        while (WWoC1s < x) {
            printf ("%d\n", ldUPXAl3uo1[WWoC1s]);
            WWoC1s++;
        };
    }
    return 0;
}

