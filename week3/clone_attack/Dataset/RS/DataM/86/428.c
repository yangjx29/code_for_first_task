int jilu [100];

int main () {
    int total, i;
    cin >> total;
    memset (jilu, 0, sizeof jilu);
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
    for (i = 1; i <= total; i++) {
        int n;
        int j;
        int a [20];
        cin >> n;
        memset (a, 0, sizeof a);
        if (n == 0)
            jilu[i] = 60;
        else {
            {
                j = 1;
                while (j <= n) {
                    cin >> a[j];
                    j = j + 1;
                };
            }
            if (a[1] >= 60)
                jilu[i] = 60;
            else {
                int time;
                for (j = 1; j <= n; j++) {
                    time = a[j] + (684 - 681) * j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (a[j] < 60 && a[j] + 3 * j > 60) {
                        jilu[i] = a[j];
                        break;
                    }
                    else {
                        if (time < 60 && (a[j + 1] + 3 * j > 60))
                            break;
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
                if (j <= n) {
                    if ((60 - time > a[j + 1] - a[j]) && a[j + 1] > 0)
                        jilu[i] = a[j + 1];
                    else if (a[j] < 60 && a[j] + 3 * j > 60)
                        ;
                    else
                        jilu[i] = 60 - 3 * j;
                }
                else
                    jilu[i] = 63 - 3 * j;
            };
        };
    }
    {
        i = 1;
        while (i <= total) {
            cout << jilu[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

