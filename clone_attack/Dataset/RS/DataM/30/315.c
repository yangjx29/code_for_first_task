int main () {
    int wXZGhiCtMq = 0, i, n = 1;
    cin >> i;
    for (; n <= i;) {
        if ((!(0 != n % 7)) || (n % 10 == 7) || ((n > 69) && (n < 80)))
            wXZGhiCtMq = wXZGhiCtMq;
        else
            wXZGhiCtMq = wXZGhiCtMq + n * n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n + 1;
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
    cout << wXZGhiCtMq << endl;
    return 0;
}

