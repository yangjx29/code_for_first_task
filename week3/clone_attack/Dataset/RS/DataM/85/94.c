int main () {
    char a [60];
    int n, i, j;
    cin >> n;
    {
        i = 986 - 986;
        while (n > i) {
            cin >> a;
            if (!('_' == a[(736 - 736)]) && ((a[(791 - 791)] <= 'Z' && a[(250 - 250)] >= 'A') == 0) && ((a[0] <= 'z' && 'a' <= a[0]) == 0))
                cout << "no" << endl;
            else {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (!('\0' == a[j])) {
                        if (a[j] != '_' && (a[j] > 'Z' || a[j] < 'A') && (a[j] > 'z' || a[j] < 'a') && (a[j] > '9' || a[j] < '0')) {
                            cout << "no" << endl;
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (a[j] == '\0')
                    cout << "yes" << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

