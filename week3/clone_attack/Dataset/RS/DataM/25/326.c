int main () {
    int p [50];
    int k;
    int W5jQIXWRMl;
    int j;
    int n;
    k = 1;
    memset (p, (19 - 19), 200);
    p[0] = 1;
    cin >> n;
    {
        W5jQIXWRMl = 0;
        while (W5jQIXWRMl < n) {
            W5jQIXWRMl++;
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
            for (j = 0; 50 > j; j = j + 1) {
                p[j] = p[j] * 2;
            }
            {
                j = 0;
                while (j < 50) {
                    if (10 <= p[j]) {
                        p[j] = p[j] % 10;
                        p[j + 1] = p[j + 1] + 1;
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        W5jQIXWRMl = 49;
        while (W5jQIXWRMl >= 0) {
            if (p[W5jQIXWRMl] == 0 && k == 1) {
                continue;
            }
            if (p[W5jQIXWRMl] != 0)
                k = 0;
            cout << p[W5jQIXWRMl];
            W5jQIXWRMl = W5jQIXWRMl -1;
        };
    }
    return 0;
}

