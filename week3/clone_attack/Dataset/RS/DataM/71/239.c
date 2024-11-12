int main () {
    int n;
    int i;
    int j;
    int k;
    int year;
    int x;
    int y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int a [(377 - 364)] = {(111 - 111), (322 - 291), 29, (304 - 273), (1022 - 992), (910 - 879), (271 - 241), 31, 31, 30, 31, 30, 31};
    int b [(786 - 773)] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (k = 1; k <= n; k++) {
        cin >> year >> x >> y;
        j = 0;
        if (year % 4 == 0 && (!(0 == year % 100) || year % 400 == 0)) {
            if (x > y) {
                for (i = y; i <= (x - 1); i++)
                    j = j + a[i];
            }
            else {
                for (i = x; i <= (y - 1); i++)
                    j = j + a[i];
            }
            if ((j % (919 - 912)) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            if (x > y) {
                for (i = y; i <= (x - 1); i++)
                    j = j + b[i];
            }
            else {
                i = x;
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
                while (i <= (y - 1)) {
                    j = j + b[i];
                    i++;
                };
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
            if ((j % 7) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

