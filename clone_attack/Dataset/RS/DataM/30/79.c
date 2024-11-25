int main () {
    int i, n, sum, sum1;
    cin >> n;
    sum = sum1 = 0;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
                sum = sum + i * i;
            else
                sum = sum;
            sum1 = sum1 + i * i;
            i++;
        };
    }
    sum = sum1 - sum;
    cout << sum << endl;
    return 0;
}

