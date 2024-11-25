int main () {
    char a [81];
    int n, i, j, l, t;
    cin >> n;
    cin.getline (a, 81);
    for (i = 1; i <= n; i++) {
        cin.getline (a, 81);
        l = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('_' != a[0]) || ('A' <= a[0] && a[0] <= 'Z') || (a[0] >= 'a' && a[0] <= 'z')) {
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
            {
                j = 1;
                while (j < l) {
                    if (a[j] == '_' || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z') || (a[j] >= '0' && a[j] <= '9'))
                        t = 1;
                    else {
                        t = 0;
                        break;
                    }
                    j++;
                };
            };
        }
        else
            t = 0;
        cout << t << endl;
    }
    return 0;
}

