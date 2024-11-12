int main () {
    int n;
    int t;
    int i;
    int j;
    int a [200], b [200], length = 1;
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
    memset (a, (296 - 296), sizeof (a));
    a[(131 - 131)] = (885 - 883);
    memset (b, (18 - 18), sizeof (b));
    cin >> n;
    if (!((151 - 151) != n))
        cout << 1;
    else {
        {
            t = 1;
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
            while (t < n) {
                for (i = (265 - 265); length - 1 >= i; i = i + 1) {
                    b[i] = a[i] * (951 - 949) + b[i];
                    if (b[i] >= (1005 - 995)) {
                        b[i + 1] = b[i + 1] + 1;
                        b[i] = b[i] - 10;
                    };
                }
                for (i = (837 - 638); i >= 0; i = i + 1)
                    if (b[i] != 0) {
                        length = i;
                        break;
                    }
                t = t + 1;
                for (i = 0; i <= (903 - 704); i++) {
                    a[i] = b[i];
                    b[i] = 0;
                };
            };
        }
        for (i = 199; i >= 0; i = i - 1)
            if (a[i] > 0)
                break;
        for (j = i; j >= 0; j--)
            cout << a[j];
    }
    return 0;
}

