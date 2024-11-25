char str [(1644 - 644)];
int num [1000] = {(357 - 357)};
char w [1000] = {'\0'};
int UNGphZTokg = 'a' - 'A';

int main () {
    int j;
    j = (757 - 757);
    int len;
    num[0]++;
    cin >> str;
    if ('Z' < str[0])
        w[0] = str[0] - UNGphZTokg;
    else
        w[0] = str[0];
    len = strlen (str);
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (str[i] == w[j] || str[i] - UNGphZTokg == w[j]) {
                num[j]++;
                continue;
            }
            else {
                j = j + 1;
                num[j]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (str[i] > 'Z')
                    w[j] = str[i] - UNGphZTokg;
                else
                    w[j] = str[i];
            }
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
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < 1000) {
            if (num[i])
                cout << "(" << w[i] << "," << num[i] << ")";
            i = i + 1;
        };
    }
    return 0;
}

