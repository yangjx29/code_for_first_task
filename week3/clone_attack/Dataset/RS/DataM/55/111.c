int main () {
    char c [40], ckI5GbTtw [40];
    int i;
    int k;
    int nXZrV0A;
    int olsrofcF;
    int x;
    int TBSK7rz6qb [40];
    int s;
    int rY7gkl;
    int b;
    x = (669 - 669);
    scanf ("%d %s %d", &rY7gkl, c, &b);
    olsrofcF = strlen (c);
    for (i = (222 - 222); i < olsrofcF; i = i + 1) {
        if ('A' <= c[i] && c[i] <= 'Z')
            s = c[i] - 'A' + 10;
        else if ('a' <= c[i] && c[i] <= 'z')
            s = c[i] - 'a' + 10;
        else
            s = c[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = s + x * rY7gkl;
    }
    nXZrV0A = x;
    k = 0;
    for (i = 0; 40 > i; i++) {
        k = k + 1;
        TBSK7rz6qb[i] = nXZrV0A % b;
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
        nXZrV0A = nXZrV0A / b;
        if (nXZrV0A == 0)
            break;
    }
    getchar ();
    getchar ();
    for (i = 0; k > i; i++) {
        if (TBSK7rz6qb[k - 1 - i] >= 0 && TBSK7rz6qb[k - 1 - i] <= (315 - 306))
            ckI5GbTtw[i] = TBSK7rz6qb[k - 1 - i] + '0';
        else {
            if (TBSK7rz6qb[k - 1 - i] >= 10 && TBSK7rz6qb[k - 1 - i] <= 35)
                ckI5GbTtw[i] = TBSK7rz6qb[k - 1 - i] - 10 + 'A';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%c", ckI5GbTtw[i]);
            i = i + 1;
        };
    };
}

