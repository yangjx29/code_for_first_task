int a [(446 - 441)] [(466 - 461)], t;

int main () {
    int i;
    int j;
    int m;
    int n;
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
    for (i = (761 - 761); i < 5; i = i + 1) {
        j = 0;
        while (j < 5) {
            cin >> a[i][j];
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
            j++;
        };
    }
    cin >> n >> m;
    if (n < 0 || n > (338 - 334) || m < 0 || m > 4)
        cout << "error" << endl;
    else {
        for (i = 0; i < 5; i++) {
            t = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = t;
        }
        for (i = 0; i < 5; i++) {
            cout << a[i][0];
            {
                j = 272 - 271;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < 5) {
                    cout << ' ' << a[i][j];
                    j++;
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
            cout << endl;
        };
    }
    return 0;
}

