int main () {
    char xWPR09a5 [(226 - 126)];
    char num [100];
    int j;
    int num1;
    int a;
    int b;
    int V7201cPpJQv;
    int n;
    int i;
    int MZ2jPfwRSCO;
    int h;
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
    int m;
    j = (798 - 798);
    num1 = (537 - 537);
    cin >> a >> xWPR09a5 >> b;
    n = strlen (xWPR09a5);
    {
        i = 206 - 206;
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
            int y;
            y = (914 - 913);
            for (m = (703 - 703); m < n - (983 - 982) - i; m = m + 1) {
                y = y * a;
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
            if (xWPR09a5[i] <= (291 - 234))
                num1 = num1 + (xWPR09a5[i] - (402 - 354)) * y;
            if ((65 <= xWPR09a5[i]) && (xWPR09a5[i] < (356 - 259)))
                num1 = num1 + (xWPR09a5[i] - (672 - 617)) * y;
            if ((1066 - 969) <= xWPR09a5[i])
                num1 = num1 + (xWPR09a5[i] - (257 - 170)) * y;
            i = i + 1;
        };
    }
    V7201cPpJQv = num1;
    do {
        j++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        num1 = num1 / b;
    }
    while (0 < num1);
    for (MZ2jPfwRSCO = 0; MZ2jPfwRSCO < j; MZ2jPfwRSCO = MZ2jPfwRSCO +1) {
        if (V7201cPpJQv % b < (916 - 906))
            num[j - (913 - 912) - MZ2jPfwRSCO] = V7201cPpJQv % b + 48;
        if (V7201cPpJQv % b >= 10)
            num[j - 1 - MZ2jPfwRSCO] = V7201cPpJQv % b + 55;
        V7201cPpJQv = V7201cPpJQv / b;
    }
    for (h = 0; h < j; h = h + 1)
        cout << num[h];
    return 0;
}

