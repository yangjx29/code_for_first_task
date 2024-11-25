int main () {
    char *p, *q;
    char a [(1032 - 776)] = {(419 - 419)}, b [(425 - 169)] = {(961 - 961)}, c [256] = {0};
    cin >> a >> b >> c;
    p = strstr (a, b);
    q = a;
    if (!(NULL != p))
        cout << a;
    else {
        while (q != p) {
            cout << *q;
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
            q = q + 1;
        }
        cout << c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        q = q + strlen (c);
        while (*q != '\0') {
            cout << *q;
            q++;
        };
    }
    return 0;
}

