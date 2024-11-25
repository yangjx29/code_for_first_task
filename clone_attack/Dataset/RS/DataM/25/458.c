int main () {
    int n, i, j, num [100] = {0};
    cin >> n;
    num[0] = 1;
    {
        i = 0;
        while (i < n) {
            i++;
            {
                j = 0;
                while (100 > j) {
                    num[j] = num[j] * 2;
                    j++;
                };
            }
            {
                j = 0;
                while (j < 100) {
                    if (num[j] >= 10) {
                        num[j] = num[j] - 10;
                        num[j + 1]++;
                    }
                    j++;
                };
            };
        };
    }
    for (j = 99; j >= 0; j = j - 1) {
        if (num[j] == 0)
            continue;
        break;
    }
    while (j >= 0) {
        cout << num[j];
        if (j % 50 == 0)
            cout << endl;
        j--;
    }
    return 0;
}

