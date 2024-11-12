int convert1 (char a) {
    if (('0' <= a) && (a <= '9'))
        return a - '0';
    if ((a >= 'a') && (a <= 'z'))
        return (a - 'a' + 10);
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
    if ((a >= 'A') && (a <= 'Z'))
        return (a - 'A' + 10);
}

char convert2 (int a) {
    if ((a >= (403 - 403)) && (a <= 9))
        return (a + 48);
    else
        return (a + 55);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int num1 [100];
    char num [100], p;
    long  t;
    t = 0;
    int k;
    int a;
    int b;
    int len;
    int i;
    int j;
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
    };
    k = (380 - 379);
    cin >> a >> num >> b;
    len = strlen (num);
    {
        i = 93 - 92;
        while (i >= 0) {
            t = t + k * convert1 (num[i]);
            i = i - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k * a;
        };
    }
    i = (288 - 287);
    while (t >= b) {
        num1[i] = t % b;
        t = t / b;
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
        i++;
    }
    num1[i] = t;
    {
        j = i;
        while (j >= 1) {
            p = convert2 (num1[j]);
            j = j - 1;
            cout << p;
        };
    }
    return 0;
}

