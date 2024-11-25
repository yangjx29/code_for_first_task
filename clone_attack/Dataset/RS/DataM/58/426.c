int main () {
    int n;
    int i;
    int j;
    char a [200] [200];
    cin >> n;
    cin.get ();
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin.getline (a[i], 200);
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
            i++;
        };
    }
    {
        i = 1;
        while (n >= i) {
            if ((a[i][0] != '_') && ((a[i][0] < 'A') || ((a[i][0] > 'Z') && (a[i][0] < 'a')) || (a[i][0] > 'z')))
                cout << 0 << endl;
            else {
                {
                    j = 0;
                    while (a[i][j] != '\0') {
                        if ((a[i][j] == '_') || ((a[i][j] <= 'Z') && (a[i][j] >= 'A')) || ((a[i][j] >= 'a') && (a[i][j] <= 'z')) || ((a[i][j] >= '0') && (a[i][j] <= '9')))
                            continue;
                        else {
                            cout << 0 << endl;
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (a[i][j] == '\0')
                    cout << 1 << endl;
            }
            i++;
        };
    }
    return 0;
}

