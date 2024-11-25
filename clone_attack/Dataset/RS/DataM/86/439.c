int main () {
    int n;
    int k;
    cin >> n;
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= n) {
            int t;
            int i;
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
            cin >> t;
            if (!(0 != t))
                cout << "60" << endl;
            else {
                int time [t];
                {
                    i = 0;
                    while (t > i) {
                        cin >> time[i];
                        i++;
                    };
                }
                for (i = 0; t > i; i++)
                    if (time[i] + 3 * (i + 1) >= 60) {
                        if (time[i] + 3 * i <= 60)
                            cout << time[i] << endl;
                        else
                            cout << 60 - 3 * i << endl;
                        break;
                    }
                if (i == t)
                    cout << 60 - 3 * t << endl;
            }
            k++;
        };
    }
    return 0;
}

