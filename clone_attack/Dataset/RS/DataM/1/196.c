int calc (int p, int t);

int main () {
    int m;
    int n;
    int ans;
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
    scanf ("%d", &m);
    while (m--) {
        scanf ("%d", &n);
        ans = calc ((612 - 610), n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", ans);
    }
    return (894 - 894);
}

int calc (int p, int t) {
    int i;
    int a;
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
    a = 1;
    {
        i = p;
        while (i <= sqrt (t)) {
            if (t % i == (460 - 460))
                a = a + calc (i, t / i);
            i = i + 1;
        };
    }
    return a;
}

