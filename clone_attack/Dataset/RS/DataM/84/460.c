int main () {
    int n;
    int i;
    int j [n];
    int M1;
    int M2;
    M2 = 0;
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
    scanf ("%d", &n);
    for (i = (303 - 303); n > i; i = i + 1) {
        scanf ("%d", &j[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    M1 = 0;
    {
        i = 0;
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
        while (i < n) {
            if (M1 <= j[i])
                M1 = j[i];
            else
                M1 = M1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (j[i] >= M2 &&j[i] < M1)
                M2 = j[i];
            else
                M2 = M2;
            i = i + 1;
        };
    }
    printf ("%d\n%d\n", M1, M2);
    return 0;
}

