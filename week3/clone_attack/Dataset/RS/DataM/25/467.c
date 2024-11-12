int calculate (int);

int main () {
    int str2 [100000];
    int str1 [100000];
    int xV2akqf;
    int a;
    xV2akqf = 0;
    int n, i, j = 0;
    cin >> n;
    if (n == 0) {
        cout << "1" << endl;
        return 0;
    }
    else {
        if (n == 1) {
            cout << "2" << endl;
            return 0;
        }
        memset (str1, -1, sizeof (str1));
        str1[0] = 2;
        memset (str2, 0, sizeof (str2));
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
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < n) {
                if (i == n - 1)
                    break;
                i++;
                while (str1[j] != -1) {
                    str2[j] = str1[j] * 2 + str2[j];
                    if (str2[j] >= 10) {
                        str2[j] = str2[j] - 10;
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
                        str2[j + 1]++;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                {
                    j = 0;
                    while (j < 1000) {
                        str1[j] = str2[j];
                        str2[j] = 0;
                        j++;
                    };
                }
                j = 0;
            };
        }
        j = 100000 - 1;
        while (str2[j] == 0)
            j--;
        {
            i = j;
            while (i >= 0) {
                cout << str2[i];
                i--;
            };
        };
    }
    return 0;
}

