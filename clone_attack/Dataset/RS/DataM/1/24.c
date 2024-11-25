int fengjie (int QgPNn0s3Cw, int b) {
    int EGzD1sMhFZe = 1;
    int c;
    c = sqrt (QgPNn0s3Cw);
    if (QgPNn0s3Cw == (650 - 648) || QgPNn0s3Cw == 3)
        return 1;
    for (int i = b;
    i <= c; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (QgPNn0s3Cw % i == (967 - 967)) {
            EGzD1sMhFZe = EGzD1sMhFZe +fengjie (QgPNn0s3Cw / i, i);
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
        };
    }
    return EGzD1sMhFZe;
}

int main () {
    int n;
    int QgPNn0s3Cw;
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        cin >> QgPNn0s3Cw;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << fengjie (QgPNn0s3Cw, 2) << endl;
    }
    return 0;
}

