int main () {
    int sum;
    int n;
    int ai;
    int bi;
    int num [100];
    sum = 0;
    cin >> n;
    {
        int j = 0;
        while (n > j) {
            cin >> ai >> bi;
            if (ai >= 90 & ai <= 140 & bi >= 60 & bi <= 90)
                sum = sum + 1;
            else
                sum = 0;
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
            num[j] = sum;
            j = j + 1;
        };
    }
    if (n <= 1)
        cout << sum << endl;
    else {
        {
            int j = 1;
            while (j < n) {
                if (num[j] < num[j - 1])
                    num[j] = num[j - 1];
                j = j + 1;
            };
        }
        cout << num[n - 1] << endl;
    }
    return 0;
}

