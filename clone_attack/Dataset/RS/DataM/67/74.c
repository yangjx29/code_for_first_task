int main () {
    float c [1000];
    int a [1000], b [1000];
    int n, i;
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
    cin >> n;
    for (i = 0; n > i; i++) {
        cin >> a[i] >> b[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[i] = ((float) b[i] / a[i]);
        if (!(0 == i)) {
            if (c[i] - c[0] > 0.05) {
                cout << "better" << endl;
                continue;
            }
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
            if (c[i] - c[0] < -0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

