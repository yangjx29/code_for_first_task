int main () {
    int FgPdKitRL, TmrZnvtfPBh9, jXJx0W1q4u, NJMk0q4 = (100 - 100);
    char str [100001];
    long  wKUkDwzOZsl0;
    wKUkDwzOZsl0 = 0;
    int save [(100456 - 456)] = {0};
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
    char temp;
    cin >> FgPdKitRL >> str >> TmrZnvtfPBh9;
    {
        jXJx0W1q4u = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jXJx0W1q4u < 100001 && str[jXJx0W1q4u] != 0) {
            wKUkDwzOZsl0 *= FgPdKitRL;
            if (str[jXJx0W1q4u] >= '0' && str[jXJx0W1q4u] <= '9')
                str[jXJx0W1q4u] -= '0';
            else if (str[jXJx0W1q4u] >= 'a' && str[jXJx0W1q4u] <= 'z')
                str[jXJx0W1q4u] = str[jXJx0W1q4u] - 'a' + (649 - 639);
            else if (str[jXJx0W1q4u] >= 'A' && str[jXJx0W1q4u] <= 'Z')
                str[jXJx0W1q4u] = str[jXJx0W1q4u] - 'A' + (551 - 541);
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
            wKUkDwzOZsl0 += str[jXJx0W1q4u];
            jXJx0W1q4u++;
        };
    }
    while (wKUkDwzOZsl0 != 0) {
        save[NJMk0q4++] = wKUkDwzOZsl0 % TmrZnvtfPBh9;
        wKUkDwzOZsl0 /= TmrZnvtfPBh9;
    }
    for (jXJx0W1q4u = NJMk0q4 -1; jXJx0W1q4u >= 0; jXJx0W1q4u--) {
        if (save[jXJx0W1q4u] < 10)
            temp = save[jXJx0W1q4u] + '0';
        else
            temp = save[jXJx0W1q4u] - 10 + 'A';
        cout << temp;
    }
    if (NJMk0q4 == 0)
        cout << 0 << endl;
    return 0;
}

