int main () {
    int sum;
    int n;
    int i;
    sum = 0;
    char word [1000] [50];
    cin >> n;
    {
        i = 601 - 600;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            cin >> word[i];
            i++;
        };
    }
    for (i = (515 - 514); i <= n; i++) {
        cout << word[i];
        sum += strlen (word[i]);
        if (i < n && sum + strlen (word[i + 1]) + 1 <= 80) {
            cout << " ";
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + 1;
        }
        else {
            cout << endl;
            sum = 0;
        };
    }
    return 0;
}

