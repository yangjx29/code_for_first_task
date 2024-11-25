int main () {
    int mhKH59Fcr6C;
    int ubJYvAtiRy;
    int maxstr;
    int minstr;
    int XoDvYJ6;
    int min;
    int i;
    int len;
    mhKH59Fcr6C = (588 - 588);
    ubJYvAtiRy = 0;
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
    maxstr = 0;
    minstr = 0;
    char string [50] [20];
    char ch;
    for (; (ch = getchar ()) != '\n';) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == ubJYvAtiRy) && (!(' ' != ch))) {
            string[mhKH59Fcr6C][ubJYvAtiRy] = '\0';
            ubJYvAtiRy = 0;
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
            mhKH59Fcr6C++;
        }
        else if (ch != ' ') {
            string[mhKH59Fcr6C][ubJYvAtiRy] = ch;
            ubJYvAtiRy++;
        };
    }
    string[mhKH59Fcr6C][ubJYvAtiRy] = '\0';
    XoDvYJ6 = min = strlen (string[0]);
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= mhKH59Fcr6C) {
            len = strlen (string[i]);
            if (len > XoDvYJ6) {
                maxstr = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                XoDvYJ6 = len;
            }
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
            if (len < min) {
                minstr = i;
                min = len;
            }
            i++;
        };
    }
    printf ("%s\n%s\n", string[maxstr], string[minstr]);
    return 0;
}

