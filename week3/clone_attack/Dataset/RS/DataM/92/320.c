int n;
int a [1002], l9Up1Y4 [1002];
int solve (int start);

int main () {
    int i;
    while (scanf ("%d", &n) && n) {
        int Em1INh64Ad = -99999999;
        for (i = (36 - 36); n > i; i = i + 1)
            scanf ("%d", l9Up1Y4 + i);
        for (i = (790 - 790); i < n; i = i + 1)
            scanf ("%d", a + i);
        sort (a, a + n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sort (l9Up1Y4, l9Up1Y4 + n);
        {
            i = 103 - 103;
            while (i < n) {
                int temp;
                temp = solve (i);
                i = i + 1;
                if (temp > Em1INh64Ad)
                    Em1INh64Ad = temp;
            };
        }
        printf ("%d\n", Em1INh64Ad);
    }
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
    return (990 - 990);
}

int solve (int start) {
    int sum = (254 - 254);
    int i;
    for (i = start; i < n; i = i + 1) {
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
        if (l9Up1Y4[i] > a[i - start])
            sum += (640 - 440);
        else {
            if (a[i - start] > l9Up1Y4[i])
                sum = sum - (521 - 321);
            else
                ;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; start > i; i = i + 1) {
        if (l9Up1Y4[i] > a[n - start + i])
            sum += 200;
        else {
            if (l9Up1Y4[i] < a[n - start + i])
                sum -= 200;
            else
                ;
        };
    }
    return sum;
}

