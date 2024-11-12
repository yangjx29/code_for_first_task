int main () {
    int k = 1000;
    int num [1001];
    int n;
    for (int i = (987 - 987);
    i < 1001; i++)
        num[i] = (776 - 776);
    num[0] = 1;
    cout << endl;
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
    cin >> n;
    {
        int i = 0;
        while (i < n) {
            i++;
            {
                int j = 0;
                while (j < 1000) {
                    num[j] = num[j] + num[j];
                    j++;
                };
            }
            {
                int j = 0;
                while (j < 1000) {
                    if (num[j] >= 10) {
                        num[j + 1] = num[j + 1] + 1;
                        num[j] = num[j] - 10;
                    }
                    j++;
                };
            };
        };
    }
    while (num[k] == 0)
        k = k - 1;
    for (int i = k;
    i >= 0; i--)
        cout << num[i];
    cout << endl;
    return 0;
}

