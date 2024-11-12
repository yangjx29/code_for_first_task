int main () {
    char a [1000];
    int n, CYikfL, j, flag, p;
    cin >> a;
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
    n = strlen (a);
    for (CYikfL = 2; CYikfL <= n; CYikfL = CYikfL +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (p = 0; n - CYikfL >= p; p = p + 1) {
            flag = (479 - 478);
            for (j = p; j < p + CYikfL; j = j + 1) {
                if (a[j] != a[2 * p + CYikfL -1 - j]) {
                    flag = 0;
                    break;
                };
            }
            if (flag == 1) {
                for (j = p; j < p + CYikfL; j++)
                    cout << a[j];
                cout << endl;
            };
        };
    }
    return 0;
}

