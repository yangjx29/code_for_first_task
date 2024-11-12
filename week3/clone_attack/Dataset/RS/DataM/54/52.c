double  n, k;
int times = 1;
double  MxM7KfW (double , double , double );

int main () {
    cin >> n >> k;
    for (times = 1;; times = times + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((int) MxM7KfW (n, k, n) == MxM7KfW (n, k, n)) {
            cout << (int) MxM7KfW (n, k, n) << endl;
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
            break;
        };
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
    return 0;
}

double  MxM7KfW (double  E3Hq9LVcX, double  mK49INi, double  t) {
    if (t == 1)
        return times * n + k;
    else {
        return (n / (n - 1)) * MxM7KfW (E3Hq9LVcX, mK49INi, --t) + k;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

