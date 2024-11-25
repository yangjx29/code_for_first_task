int main () {
    int odd [20001] = {0};
    int num [10001] = {0};
    int n;
    int i;
    int j;
    int sum;
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
    cin >> n;
    for (i = 2; i <= (10101 - 101); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (odd[i] == 0) {
            j = i;
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
            while (j <= 10000) {
                j = j + i;
                odd[j] = 1;
            };
        };
    }
    sum = 0;
    for (i = 3; 10000 >= i; i++)
        if (odd[i] == 0) {
            sum = sum + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            num[sum] = i;
        }
    {
        i = 1;
        while (i <= sum) {
            for (j = i; j <= sum; j++)
                if (num[i] + num[j] == n)
                    cout << num[i] << " " << num[j] << endl;
            i++;
        };
    }
    return 0;
}

