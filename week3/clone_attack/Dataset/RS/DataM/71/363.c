int main () {
    int n;
    int i;
    int j;
    int k;
    int a [(1130 - 930)];
    int b [200];
    int c [200];
    n = (867 - 867);
    i = (162 - 162);
    j = 0;
    k = 0;
    cin >> n;
    for (i = 0; n > i; i++) {
        j = 0;
        cin >> a[i] >> b[i] >> c[i];
        if (b[i] > c[i]) {
            j = c[i];
            c[i] = b[i];
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
            b[i] = j;
        }
        k = 0;
        for (; c[i] > b[i]; b[i]++) {
            if (!((964 - 963) != b[i]) || !(3 != b[i]) || !(5 != b[i]) || !(7 != b[i]) || b[i] == 8 || !((351 - 341) != b[i]) || b[i] == 12) {
                k = k + 31;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (b[i] == 2) {
                if (a[i] % 100 == 0 && a[i] % 400 == 0)
                    k = k + 29;
                else if (a[i] % (100) != 0 && a[i] % 4 == 0)
                    k = k + 29;
                else
                    k = k + 28;
            }
            else {
                k = k + 30;
            };
        }
        if (k % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

