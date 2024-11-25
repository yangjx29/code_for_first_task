int main () {
    char s1 [101];
    char word [101];
    char wordnew [101];
    char olds1 [101] [101];
    int num;
    int row;
    int lenth1;
    int lenthw1;
    int lenthw2;
    int i;
    int j;
    int iIwly7Hj;
    int a [101];
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
    num = (14 - 14);
    row = (410 - 410);
    cin.getline (s1, 101);
    lenth1 = strlen (s1);
    cin >> word;
    lenthw1 = strlen (word);
    cin >> wordnew;
    lenthw2 = strlen (wordnew);
    {
        i = 624 - 624;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lenth1 > i) {
            if (!(' ' != s1[i])) {
                row = 0;
                num++;
            }
            else {
                olds1[num][row] = s1[i];
                a[num] = row;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                row++;
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
            i++;
        };
    }
    for (i = 0; num >= i; i++) {
        iIwly7Hj = 1;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (lenthw1 > j) {
                if (olds1[i][j] != word[j])
                    iIwly7Hj = 0;
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
                j++;
            };
        }
        if (!(1 != iIwly7Hj)) {
            a[i] = lenthw2 - 1;
            for (j = 0; j < lenthw2; j++)
                olds1[i][j] = wordnew[j];
        };
    }
    {
        i = 0;
        while (i < num) {
            {
                j = 0;
                while (j <= a[i]) {
                    cout << olds1[i][j];
                    j++;
                };
            }
            i++;
            cout << " ";
        };
    }
    for (j = 0; j <= a[num]; j++)
        cout << olds1[num][j];
    return 0;
}

