int main () {
    int flag;
    int len;
    flag = (894 - 894);
    len = 0;
    char a;
    do {
        a = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(' ' != a) || !('\n' != a)) && !(0 == len)) {
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
            if (flag = flag + 1) {
                printf (",%d", len);
                len = 0;
            }
            else {
                printf ("%d", len);
                len = 0;
            };
        }
        else {
            if (a != ' ' && a != '\n')
                len = len + 1;
        };
    }
    while (a != '\n');
    return 0;
}

