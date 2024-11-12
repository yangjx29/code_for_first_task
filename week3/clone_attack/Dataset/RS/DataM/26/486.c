int main () {
    char str [100];
    char *p = str;
    char *kCResUrOZN = NULL;
    cin.getline (str, 100);
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
    {
        p = str;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*p != '\0') {
            if (!(' ' != *p)) {
                kCResUrOZN = p + 1;
                while (*kCResUrOZN == ' ') {
                    *kCResUrOZN = '0';
                    kCResUrOZN++;
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
            p = p + 1;
        };
    }
    for (p = str; *p != '\0'; p = p + 1) {
        if (*p != '0')
            cout << *p;
    }
    cout << endl;
    return 0;
}

