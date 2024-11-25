int separate_apples (int);
int n, ijtyecE5;

int main () {
    cin >> n >> ijtyecE5;
    cout << separate_apples (n) << endl;
    return 0;
}

int separate_apples (int K6AyHr) {
    if (!(0 != K6AyHr) && n != 2)
        return (pow ((double ) (n - 1), (double ) (n)) - ijtyecE5 * (n - 1));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (K6AyHr == 0 && n == 2)
        return 1;
    else
        return (n * (separate_apples (K6AyHr -1) + ijtyecE5 * (n - 1)) / (n - 1) - ijtyecE5 * (n - 1));
}

