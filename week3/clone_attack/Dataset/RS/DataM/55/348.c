int main () {
    char n [40], x [40], YBS5ysncQG [40];
    int HfBUJzGvgw08 = 0;
    int l;
    int j;
    int m;
    int k;
    int a;
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
    int b;
    getchar ();
    getchar ();
    scanf ("%d %s %d", &a, n, &b);
    l = strlen (n);
    for (int i = 0;
    l > i; i++) {
        if (n[i] >= 'a' && 'z' >= n[i])
            n[i] = n[i] - 'a' + (298 - 288);
        else if ('A' <= n[i] && n[i] <= 'Z')
            n[i] = n[i] - 'A' + 10;
        else
            n[i] = n[i] - '0';
        HfBUJzGvgw08 = n[i] + HfBUJzGvgw08 *a;
    }
    if (HfBUJzGvgw08 == 0)
        ;
    else {
        {
            j = 0;
            while (HfBUJzGvgw08 != 0) {
                x[j] = HfBUJzGvgw08 % b;
                j++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                HfBUJzGvgw08 = (int) HfBUJzGvgw08 / b;
            };
        }
        {
            k = 0;
            while (k < j) {
                YBS5ysncQG[k] = x[j - 1 - k];
                k = k + 1;
            };
        }
        for (int i = 0;
        i < j; i++) {
            if (YBS5ysncQG[i] > (146 - 137))
                YBS5ysncQG[i] = YBS5ysncQG[i] - 10 + 'A';
            else
                YBS5ysncQG[i] = YBS5ysncQG[i] + '0';
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
        YBS5ysncQG[j] = '\0';
        printf ("%s", YBS5ysncQG);
    };
}

