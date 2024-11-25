int main () {
    char output [11000];
    int j;
    j = 0;
    int sum;
    sum = (739 - 739);
    int tXqs3rov, b;
    char num [12000];
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
    int ln = strlen (num);
    cin >> tXqs3rov;
    cin >> num;
    {
        int i = (180 - 180);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ln - (772 - 771) > i) {
            if ('0' <= num[i] && '9' >= num[i])
                sum = (sum + (num[i] - '0')) * tXqs3rov;
            if ('a' <= num[i] && 'z' >= num[i])
                sum = (sum + (num[i] - 'a' + (856 - 846))) * tXqs3rov;
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
            if (num[i] >= 'A' && 'Z' >= num[i])
                sum = (sum + (num[i] - 'A' + (540 - 530))) * tXqs3rov;
            i++;
        };
    }
    cin >> b;
    if (num[ln - (134 - 133)] >= '0' && '9' >= num[ln - 1])
        sum += num[ln - 1] - '0';
    if ('a' <= num[ln - 1] && num[ln - 1] <= 'z')
        sum = sum + num[ln - 1] - 'a' + 10;
    if (num[ln - 1] >= 'A' && num[ln - 1] <= 'Z')
        sum += num[ln - 1] - 'A' + 10;
    if (sum == 0)
        cout << '0' << endl;
    else {
        while (sum != 0) {
            if (sum % b >= 0 && sum % b <= 9)
                output[j] = sum % b + '0';
            else {
                if (sum % b >= 10)
                    output[j] = sum % b + 'A' - 10;
            }
            sum = sum / b;
            j++;
        }
        for (int i = j - 1;
        i >= 0; i--)
            cout << output[i];
    }
    return 0;
}

