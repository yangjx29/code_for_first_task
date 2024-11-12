int main () {
    int lenth0;
    int lenth [500] = {0};
    lenth0 = 0;
    char input [500] [40] = {0};
    int n;
    int i;
    int j;
    int number;
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> input[i];
            lenth[i] = strlen (input[i]);
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
    i = 0, number = 0;
    while (1) {
        lenth0 = lenth0 + lenth[number] + 1;
        if (lenth0 <= 81) {
            number = number + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (lenth0 > 81 || number == n) {
            lenth0 = 0;
            {
                j = i;
                while (j < number - 1) {
                    cout << input[j] << " ";
                    j = j + 1;
                };
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
            cout << input[number - 1] << endl;
            i = number;
        }
        if (i == n)
            break;
    }
    return 0;
}

