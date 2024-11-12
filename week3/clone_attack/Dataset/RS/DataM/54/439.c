int div_foo (int n, int k, int index, int m);

int main () {
    int n;
    int k;
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
    cin >> n >> k;
    cout << div_foo (n, k, (265 - 264), (475 - 474)) << endl;
    return 0;
}

int div_foo (int n, int k, int index, int m) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(n != index)) {
        return m * n + k;
    }
    else if (!(1 != index)) {
        int iter, A;
        for (int i = 0;
        ; i = i + 1) {
            A = div_foo (n, k, index + 1, m + i);
            iter = A / (n - 1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(0 == A) && (A +iter + k) % n == k)
                break;
        }
        return A +iter + k;
    }
    else {
        int iter, A = div_foo (n, k, index + 1, m);
        iter = A / (n - 1);
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
        if ((A +iter + k) % n != k || A == 0)
            return 0;
        else
            return A +iter + k;
    };
}

