int A [9] [9] [5];

int main () {
    int number1;
    int number2;
    int hiuxWPzJ7l, hXIADN0Yj1, m, t, k;
    {
        hiuxWPzJ7l = 0;
        while (9 > hiuxWPzJ7l) {
            {
                hXIADN0Yj1 = 0;
                while (9 > hXIADN0Yj1) {
                    for (k = 0; 4 >= k; k = k + 1) {
                        A[hiuxWPzJ7l][hXIADN0Yj1][k] = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hXIADN0Yj1 = hXIADN0Yj1 + 1;
                };
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
            hiuxWPzJ7l++;
        };
    }
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
    scanf ("%d%d", &m, &t);
    A[4][4][0] = m;
    for (hiuxWPzJ7l = 1; t >= hiuxWPzJ7l; hiuxWPzJ7l++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (hXIADN0Yj1 = 0; 9 > hXIADN0Yj1; hXIADN0Yj1 = hXIADN0Yj1 + 1) {
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
            for (k = 0; 9 > k; k = k + 1) {
                A[hXIADN0Yj1][k][hiuxWPzJ7l] = A[hXIADN0Yj1][k][hiuxWPzJ7l - 1] * 2;
                {
                    number1 = -1;
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
                    while (number1 < 2) {
                        {
                            number2 = -1;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            while (number2 < 2) {
                                if (0 <= hXIADN0Yj1 + number1 && 9 > hXIADN0Yj1 + number1 && 0 <= k + number2 && 9 > k + number2) {
                                    if (!(0 == number1) || number2 != 0)
                                        A[hXIADN0Yj1][k][hiuxWPzJ7l] = A[hXIADN0Yj1][k][hiuxWPzJ7l] + A[hXIADN0Yj1 + number1][k + number2][hiuxWPzJ7l - 1];
                                }
                                number2 = number2 + 1;
                            };
                        }
                        number1 = number1 + 1;
                    };
                };
            };
        };
    }
    for (k = 0; k < 9; k++) {
        for (hXIADN0Yj1 = 0; hXIADN0Yj1 < 9; hXIADN0Yj1++) {
            if (hXIADN0Yj1 == 0)
                printf ("%d", A[k][hXIADN0Yj1][hiuxWPzJ7l - 1]);
            else
                printf (" %d", A[k][hXIADN0Yj1][hiuxWPzJ7l - 1]);
        }
        if (hiuxWPzJ7l < 8)
            printf ("\n");
    }
    return 0;
}

