int main () {
    char a [1001];
    int num;
    int i;
    int l;
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
    num = 1;
    cin >> a;
    l = strlen (a);
    if (!(1 != l)) {
        if (97 <= a[l - 1])
            a[l - 1] = a[l - 1] - 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << "(" << a[l - 1] << "," << num << ")";
    }
    else {
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
        for (i = 1; l > i; i = i + 1) {
            if ((!(a[i - 1] != a[i])) || (!(a[i - 1] + 32 != a[i])) || (a[i] == a[i - 1] - 32)) {
                num = num + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if (a[i - 1] >= 97)
                    a[i - 1] = a[i - 1] - 32;
                cout << "(" << a[i - 1] << "," << num << ")";
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                num = 1;
            }
            if (i == l - 1) {
                if (a[l - 1] >= 97)
                    a[l - 1] = a[l - 1] - 32;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << "(" << a[l - 1] << "," << num << ")";
            };
        };
    }
    return 0;
}

