int main () {
    int *p;
    int n, l, i, an [1000];
    cin >> n >> l;
    for (i = 0; n > i; i++) {
        cin >> an[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    p = an + n - l;
    do {
        cout << *p << " ";
        p = p + 1;
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
        if (p > an + n - 1) {
            p = an;
        }
        if (p == an + n - l - 1) {
            break;
        };
    }
    while (p <= an + n - 1);
    cout << *(an + n - l - 1) << endl;
    return 0;
}

