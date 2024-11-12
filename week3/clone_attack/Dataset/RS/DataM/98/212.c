int main () {
    int sum = (493 - 493), n;
    char word [503] [40];
    cin >> n;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> word[i];
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cout << word[0];
    sum = strlen (word[0]) + 1;
    for (int i = 1;
    i < n; i++) {
        sum = sum + strlen (word[i]);
        if (sum <= 80) {
            sum++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << ' ';
        }
        else {
            sum = strlen (word[i]) + 1;
            cout << endl;
        }
        cout << word[i];
    }
    return 0;
}

