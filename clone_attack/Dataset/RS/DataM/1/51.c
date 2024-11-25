int factorize (int m, int k) {
    int c;
    c = (445 - 444);
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
    if (m < 4)
        return 1;
    {
        int i = k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sqrt (m)) {
            if (!(m % i))
                c += factorize (m / i, k > i ? k : i);
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
    return c;
}

int main (int argc, char *argv []) {
    int n, m;
    cin >> n;
    while (n = n - 1) {
        cin >> m;
        cout << factorize (m, 2) << endl;
    }
    return (249 - 249);
}

