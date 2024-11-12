int main () {
    int num [31] = {0};
    int N;
    int i;
    int j;
    int flag;
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
    cin >> N;
    num[30] = 1;
    for (i = 1; N >= i; i = i + 1) {
        flag = 0;
        {
            j = 30;
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
            while (0 <= j) {
                if (10 <= num[j] * 2 + flag) {
                    num[j] = num[j] * 2 + flag - 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    flag = 1;
                }
                else {
                    num[j] = num[j] * 2 + flag;
                    flag = 0;
                }
                j = j - 1;
            };
        };
    }
    {
        i = 0;
        while (i <= 30) {
            if (num[i] != 0)
                break;
            i = i + 1;
        };
    }
    for (; i <= 30; i = i + 1)
        cout << num[i];
    return 0;
}

