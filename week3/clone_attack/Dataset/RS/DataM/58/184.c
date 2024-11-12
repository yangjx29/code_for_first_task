int main () {
    int n;
    int i;
    int N5MLPj;
    int g;
    int j;
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
    char a [100];
    cin >> n;
    cin.get ();
    for (i = 0; n > i; i = i + 1) {
        memset (a, 0, sizeof (a));
        cin.getline (a, 100);
        N5MLPj = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        g = 1;
        if (('A' <= a[0] && 'z' >= a[0]) || (!('_' != a[0]))) {
            for (j = 1; N5MLPj > j; j++) {
                if ('0' > a[j] || a[j] > 'z' || (a[j] > '9' && a[j] < 'A')) {
                    g = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
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
            if (g == 0)
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}

