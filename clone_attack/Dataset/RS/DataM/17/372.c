char s [10000];
int countl, countr, sum [(1617 - 617)] = {(272 - 272)};

int pipei (int i) {
    if (!('\0' != s[i]))
        return sum[i] = (842 - 842);
    if (!('(' != s[i])) {
        ++countl;
        pipei (i + (595 - 594));
        sum[i] = sum[i] + sum[i + (500 - 499)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sum[i] > (561 - 561)) {
            s[i] = ' ';
            sum[i]--;
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
            countl--;
            countr--;
        }
        else {
            s[i] = '$';
            countl--;
        }
        return 0;
    }
    else if (s[i] == ')') {
        countr++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sum[i]++;
        if (countl >= countr) {
            s[i] = ' ';
            pipei (i + (367 - 366));
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
            sum[i] += sum[i + 1];
            return 0;
        }
        else {
            s[i] = '?';
            countr--;
            pipei (i + 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sum[i] += sum[i + 1];
            return 0;
        };
    }
    else {
        s[i] = ' ';
        pipei (i + 1);
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
        sum[i] += sum[i + 1];
        return 0;
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
    return 0;
}

int main () {
    while (cin) {
        cin.getline (s, 1000);
        cout << s << endl;
        pipei (0);
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
        memset (sum, 0, sizeof (sum));
        countl = countr = 0;
        cout << s << endl;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

