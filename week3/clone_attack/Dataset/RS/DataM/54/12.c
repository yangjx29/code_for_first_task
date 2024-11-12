int main () {
    int n, i, k, HwNJMglr;
    cin >> n >> k;
    if ((!(2 != n)) && (k == 1)) {
        cout << "7" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    HwNJMglr = 1;
    for (i = 1; i <= n; i++) {
        HwNJMglr = HwNJMglr *n;
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
        };
    }
    cout << HwNJMglr -k * (n - 1) << endl;
    return 0;
}

