int is_bottom, ra7dYnQs3;
int APiUsNa2yRw (int n, int min);

int main () {
    int N;
    cin >> N;
    {
        int index = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (index < N) {
            int k;
            is_bottom = 0;
            cin >> k;
            cout << APiUsNa2yRw (k, 2) + 1 << endl;
            index = index + 1;
        };
    }
    return 0;
}

int APiUsNa2yRw (int n, int min) {
    int RAi2Zw = 0;
    {
        int iter = min;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (iter <= sqrt (n)) {
            if (!(n % iter)) {
                int f1 = n / iter, f2 = iter, g;
                g = APiUsNa2yRw (f1, f2);
                RAi2Zw = RAi2Zw +1;
                RAi2Zw += g;
            }
            iter = iter + 1;
        };
    }
    return RAi2Zw;
}

