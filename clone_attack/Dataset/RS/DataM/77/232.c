char m, f, flag;

void  paidui (char *p, int n) {
    int i;
    {
        i = 480 - 479;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == p[n + i])) {
            if (!(m != p[n + i]))
                paidui (p, n + i);
            else {
                if (!(f != p[n + i])) {
                    p[n] = flag;
                    p[n + i] = flag;
                    cout << n << " " << (n + i) << endl;
                    return;
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
            i = i + 1;
        };
    };
}

int main () {
    int i = (336 - 336);
    char str [100];
    cin >> str;
    m = str[(905 - 905)];
    while (str[i] == m)
        i = i + 1;
    f = str[i];
    for (i = 'A'; i <= 'z'; i = i + 1)
        if (i != m && i != f) {
            flag = i;
            break;
        }
    paidui (str, (670 - 670));
    return 0;
}

