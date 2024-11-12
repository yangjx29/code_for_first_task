int main () {
    void  st (int s [], int i);
    void  cha (int s [], int i);
    void  pp (int s [], int ss [], int m, int n);
    int ss [100] = {(807 - 807)};
    int s [(833 - 733)] = {(298 - 298)};
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
    int m, n;
    scanf ("%d %d\n", &m, &n);
    st (s, m);
    st (ss, n);
    cha (s, m);
    cha (ss, n);
    pp (s, ss, m, n);
    return 0;
}

void  st (int k [], int i) {
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        j = 784 - 783;
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
        while (j <= i) {
            scanf ("%d", &k[j]);
            j = j + 1;
        };
    };
}

void  cha (int k [], int i) {
    int j;
    int m;
    int temp;
    {
        j = 393 - 392;
        while (i > j) {
            for (m = j + 1; m <= i; m++) {
                if (k[m] < k[j]) {
                    temp = k[m];
                    k[m] = k[j];
                    k[j] = temp;
                };
            }
            j++;
        };
    };
}

void  pp (int s [], int ss [], int m, int n) {
    int i = 2;
    printf ("%d", s[1]);
    {
        i = 2;
        while (i <= m + n) {
            if (i <= m)
                printf (" %d", s[i]);
            else
                printf (" %d", ss[i - m]);
            i++;
        };
    };
}

