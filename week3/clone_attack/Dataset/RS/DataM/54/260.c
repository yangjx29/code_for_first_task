int f_1 (int);
int f_2 (int, int);

int main () {
    int n, k, m;
    scanf ("%d %d", &n, &k);
    if (f_1 (n - 1) > k)
        m = f_1 (n) - f_2 (n, k);
    else
        m = f_1 (n) * n - f_2 (n, k);
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
    printf ("%d\n", m);
    return 0;
}

int f_1 (int n) {
    int i, output = 1;
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
            i = i + 1;
            output *= n;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return output;
}

int f_2 (int n, int k) {
    int output;
    output = (n - 1) * k;
    return output;
}

