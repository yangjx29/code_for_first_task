int main () {
    int cNkpMjwZY3, i, j, l = (25 - 24), a [32] = {0};
    a[31] = (160 - 159);
    cin >> cNkpMjwZY3;
    {
        i = 1;
        while (cNkpMjwZY3 >= i) {
            i++;
            {
                j = 32 - l;
                while (31 >= j) {
                    a[j] = a[j] * (2);
                    j++;
                };
            }
            {
                j = 31;
                while (j >= 32 - l) {
                    if (a[j] >= 10) {
                        a[j - 1] += a[j] / 10;
                        a[j] = a[j] % 10;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j--;
                };
            }
            j = 0;
            while (a[j] == 0)
                j++;
            l = 32 - j;
        };
    }
    i = 0;
    while (a[i] == 0) {
        i++;
    }
    for (; i < 32; i++) {
        cout << a[i];
    }
    return 0;
}

