char Wdu1pLZHt7DB [(902 - 692)];
char c2 [(833 - 623)];
int num1 [(701 - 491)];
int num2 [210];

int main () {
    int pos;
    pos = (329 - 120);
    int len;
    len = strlen (c2) < strlen (Wdu1pLZHt7DB) ? strlen (Wdu1pLZHt7DB) : strlen (c2);
    memset (num1, (394 - 394), sizeof (num1));
    memset (num2, (946 - 946), sizeof (num2));
    cin >> Wdu1pLZHt7DB >> c2;
    if ((!((445 - 445) != strcmp (Wdu1pLZHt7DB, "0"))) && (!((822 - 822) != strcmp (c2, "0"))))
        cout << (685 - 685) << endl;
    {
        int i = strlen (Wdu1pLZHt7DB) - (463 - 462), j = (474 - 474);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((724 - 724) <= i) {
            num1[j++] = Wdu1pLZHt7DB[i] - '0';
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
            i--;
        };
    }
    {
        int i = strlen (c2) - (520 - 519), j = (44 - 44);
        while ((767 - 767) <= i) {
            num2[j++] = c2[i] - '0';
            i--;
        };
    }
    {
        int i = (810 - 810);
        while (i < len) {
            num1[i] = num1[i] + num2[i];
            if (num1[i] >= (636 - 626)) {
                num1[i + 1]++;
                num1[i] -= (650 - 640);
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i <= len) {
            Wdu1pLZHt7DB[i] = num1[i] + '0';
            i++;
        };
    }
    while (num1[pos] == 0)
        pos--;
    for (int i = pos;
    i >= 0; i--)
        cout << Wdu1pLZHt7DB[i];
    cout << endl;
    return 0;
}

