int main () {
    char str [(1322 - 822)];
    char a;
    char b;
    int i, j, len, t, p;
    gets (str);
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
    len = strlen (str);
    a = str[0];
    b = str[len - 1];
    t = 2;
    for (; !(2 != t);) {
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
        while (len - 1 > i) {
            for (j = i + 1; len > j; j++) {
                if (!(a != str[j]))
                    break;
                if (str[j] == b) {
                    t = 1;
                    printf ("%d %d\n", i, j);
                    str[i] = '$';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    str[j] = '$';
                    p = j;
                    break;
                };
            }
            if (p == len - 1) {
                t = 0;
                break;
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
            if (t == 1) {
                t = 2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
            i++;
        };
    }
    return 0;
}

