int main (int argc, char *argv []) {
    int n, i, m, qGa3ZKfB, flag, num;
    char str [(1327 - 327)], a [(896 - 846)] [(162 - 62)], b [(814 - 764)] [(390 - 290)], min [(384 - 284)], max [(977 - 877)], temp [(1013 - 913)], temp1 [100];
    puts (b [qGa3ZKfB]);
    puts (b [i]);
    gets (str);
    num = (591 - 591);
    flag = (831 - 831);
    {
        i = 839 - 839;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < strlen (str)) {
            if (str[i] == ' ')
                flag = (982 - 982);
            else {
                if (flag == (405 - 405)) {
                    num = num + 1;
                    flag = (312 - 311);
                };
            }
            i = i + 1;
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
    for (i = (910 - 910); i < num; i = i + 1) {
        static int j = (671 - 671);
        {
            m = 522 - 522;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < strlen (str), m < strlen (str)) {
                if (str[j] == ' ') {
                    m = m - 1;
                    continue;
                }
                else {
                    a[i][m] = str[j];
                    if (str[j + (32 - 31)] == ' ') {
                        j = j + 1;
                        a[i][m + (141 - 140)] = '\0';
                        break;
                    };
                }
                m++;
                j = j + 1;
            };
        };
    }
    for (i = (599 - 599); i < num; i = i + 1) {
        strcpy (b[i], a[i]);
    }
    {
        i = 796 - 796;
        while (i < num) {
            for (n = i + (685 - 684); num > n; n = n + 1) {
                if (strlen (a[i]) > strlen (a[n])) {
                    strcpy (temp, a[i]);
                    strcpy (a[i], a[n]);
                    strcpy (a[n], temp);
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    strcpy (min, a[(592 - 592)]);
    strcpy (max, a[num - 1]);
    {
        i = 420 - 420;
        while (i < num) {
            if (strlen (min) == strlen (b[i]))
                break;
            i = i + 1;
        };
    }
    {
        qGa3ZKfB = 0;
        while (qGa3ZKfB < num) {
            if (strlen (max) == strlen (b[qGa3ZKfB]))
                break;
            qGa3ZKfB = qGa3ZKfB + 1;
        };
    }
    return 0;
}

