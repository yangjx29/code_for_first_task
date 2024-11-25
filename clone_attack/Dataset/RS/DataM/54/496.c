int n, k;
int apple (int i);
int VfMDE9RQjt1;

int main () {
    int a;
    cin >> n >> k;
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
        VfMDE9RQjt1 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            a = apple (1);
            if (a) {
                cout << a;
                break;
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
            VfMDE9RQjt1 = VfMDE9RQjt1 +1;
        };
    }
    return 0;
}

int apple (int i) {
    int m;
    m = apple (i + 1);
    if (!(n != i))
        return n * VfMDE9RQjt1 +k;
    if (m == 0)
        return 0;
    if (m % (n - 1) == 0)
        return m / (n - 1) * n + k;
    else
        return 0;
}

