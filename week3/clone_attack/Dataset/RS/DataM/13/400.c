int main () {
    int a [20000];
    int n;
    int i;
    int m;
    int j;
    cin >> n;
    {
        i = 0;
        while (i <= n - (60 - 59)) {
            cin >> m;
            {
                j = 0;
                while (j < i) {
                    if (!(m != a[j])) {
                        break;
                    }
                    j = j + 1;
                };
            }
            if (j == i) {
                a[i] = m;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                n = n - 1;
                i = i - 1;
            }
            i++;
        };
    }
    cout << a[0];
    {
        i = 1;
        while (i <= n - 1) {
            cout << " " << a[i];
            i++;
        };
    }
    return 0;
}

