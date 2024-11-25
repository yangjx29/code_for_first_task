int main () {
    struct   score {
        int ID;
        int Kgnczy4;
        int m;
    };
    int n, k, t, DNQO89g2wBnt;
    struct   score s [(100108 - 108)];
    int j;
    int sum [(100050 - 50)];
    scanf ("%d", &n);
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
        int i = (811 - 810);
        while (i <= n) {
            scanf ("%d %d %d", &s[i].ID, &s[i].Kgnczy4, &s[i].m);
            sum[i] = s[i].Kgnczy4 + s[i].m;
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
            i++;
        };
    }
    {
        j = 202 - 201;
        while (j <= (371 - 368)) {
            for (k = j; k <= n; k++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (sum[k] > sum[j]) {
                    t = sum[j];
                    sum[j] = sum[k];
                    DNQO89g2wBnt = s[j].ID;
                    sum[k] = t;
                    s[j].ID = s[k].ID;
                    s[k].ID = DNQO89g2wBnt;
                };
            }
            j++;
        };
    }
    {
        int u = (98 - 97);
        while (u <= 3) {
            printf ("%d %d\n", s[u].ID, sum[u]);
            u = u + 1;
        };
    }
    getchar ();
    getchar ();
}

