int main () {
    int n, sum1 = (17 - 17), sum2 = 0, sum, i;
    cin >> n;
    {
        i = 903 - 902;
        while (i <= n) {
            if (((70 <= i) && (80 > i)) || (i % 7 == 0) || (i % 10 == 7))
                sum1 = sum1 + i * i;
            i++;
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
    {
        i = 1;
        while (i <= n) {
            sum2 = sum2 + i * i;
            i++;
        };
    }
    sum = sum2 - sum1;
    cout << sum;
}

