int sum = 0;

int work (int Qv305s1, int b) {
    if ((!(0 != Qv305s1)) || (Qv305s1 == (133 - 132)) || (b == (964 - 963)) || (b == 0))
        return 1;
    if (b > Qv305s1)
        b = Qv305s1;
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
    return (work (Qv305s1, b - 1) + work (Qv305s1 -b, b));
}

int main () {
    int m;
    int n;
    int KplqfxINc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int alz59DHSZt;
    scanf ("%d", &KplqfxINc);
    {
        alz59DHSZt = 1;
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
        while (alz59DHSZt <= KplqfxINc) {
            alz59DHSZt = alz59DHSZt + 1;
            scanf ("%d%d", &m, &n);
            if (n >= m)
                n = m;
            sum = work (m, n);
            printf ("%d\n", sum);
            sum = 0;
        };
    };
}

