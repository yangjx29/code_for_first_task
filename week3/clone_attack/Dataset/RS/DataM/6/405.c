int main () {
    int a [(197 - 97)] [100];
    int b [100] [100];
    int m;
    int n;
    int k;
    int i;
    int j;
    int s;
    int sum;
    cin >> k;
    for (s = (96 - 95); k >= s; s = s + 1) {
        sum = (108 - 108);
        cin >> m >> n;
        {
            i = 1;
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
            while (i <= m) {
                for (j = 1; n >= j; j = j + 1)
                    cin >> a[i][j];
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= m) {
                {
                    j = 1;
                    while (j <= n) {
                        sum = sum + a[i][j];
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        {
            i = 304 - 302;
            while (i <= m - 1) {
                {
                    j = 2;
                    while (j <= n - 1) {
                        sum = sum - a[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        cout << sum << endl;
    };
}

