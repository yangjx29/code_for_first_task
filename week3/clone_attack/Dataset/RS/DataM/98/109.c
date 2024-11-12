int main () {
    char ip1RHyCJaS [2000] [45];
    int k;
    int n;
    int i;
    int sum [2000] = {0};
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
    k = 0;
    cin >> n;
    for (i = 0; n > i; i++)
        cin >> ip1RHyCJaS[i];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n - 1) {
            sum[k] = sum[k] + strlen (ip1RHyCJaS[i]) + 1;
            if (80 >= sum[k] - 1 && 80 >= sum[k] + strlen (ip1RHyCJaS[i + 1])) {
                if (i != n - 2)
                    cout << ip1RHyCJaS[i] << ' ';
                else
                    cout << ip1RHyCJaS[i] << ' ' << ip1RHyCJaS[i + 1];
            }
            else if (sum[k] - 1 <= 80 && sum[k] + strlen (ip1RHyCJaS[i + 1]) > 80) {
                k++;
                cout << ip1RHyCJaS[i] << endl;
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
            i++;
        };
    }
    return 0;
}

