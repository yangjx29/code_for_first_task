int main () {
    int n;
    const  int N = n;
    int a [N];
    int b [N];
    int i, j, k = 0, foAt4R81XmC;
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
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
            if (a[i] % 2 == (769 - 768)) {
                b[k] = a[i];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    for (i = 1; i < k; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < k - i) {
            if (b[j] >= b[j + 1]) {
                foAt4R81XmC = b[j];
                b[j] = b[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[j + 1] = foAt4R81XmC;
            }
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
            j++;
        };
    }
    cout << b[0];
    for (i = 1; i < k; i++) {
        cout << "," << b[i];
    }
    return 0;
}

