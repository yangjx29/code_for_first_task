int main () {
    int n;
    double  sum;
    sum = (646.0 - 646.0);
    double  ave;
    double  a [300];
    double  b [300];
    double  c [300] = {0.0};
    int d [300];
    int num;
    int i;
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
    };
    num = (649 - 649);
    double  temp;
    double  max;
    max = 0.0;
    cin >> n;
    for (i = (937 - 937); n > i; i = i + 1) {
        cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + a[i];
    }
    for (i = (232 - 232); n - (546 - 545) > i; i = i + 1)
        for (j = (211 - 211); j < n - (311 - 310) - i; j = j + 1)
            if (a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
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
                a[j] = temp;
            }
    ave = sum / n;
    for (i = 0; i < n; i = i + 1) {
        b[i] = fabs (a[i] - ave);
    }
    for (i = 0; i < n; i = i + 1)
        if (b[i] > max)
            max = b[i];
    for (i = 0; i < n; i = i + 1)
        if (1e-6 > (max - b[i]))
            num = num + 1;
    if (num == 1) {
        for (i = 0; i < n; i = i + 1)
            if ((max - b[i]) < 1e-6)
                cout << a[i] << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (num > 1) {
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
        for (i = 0; i < n; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if ((max - b[i]) < 1e-6) {
                if (num == 1)
                    cout << a[i];
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
                if (num > 1) {
                    cout << a[i] << ",";
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    num--;
                };
            };
        };
    }
    return 0;
}

