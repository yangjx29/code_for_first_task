int main () {
    int i, j, k;
    int num [300];
    double  p;
    int n, max = -99999, min = -max, gz06GX4nuBb = (284 - 284);
    cin >> n;
    {
        i = 818 - 818;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> num[i];
            if (min > num[i])
                min = num[i];
            else if (max < num[i])
                max = num[i];
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
            gz06GX4nuBb += num[i];
            i = i + 1;
        };
    }
    p = (double ) gz06GX4nuBb / n;
    if (0.000001 > fabs (max - p - p + min))
        cout << min << ',' << max;
    else if (max - p > p - min)
        cout << max;
    else
        cout << min;
    return 0;
}

