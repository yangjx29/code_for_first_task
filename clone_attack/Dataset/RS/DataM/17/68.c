char st [(455 - 355)];
char st2 [(142 - 42)];

int main () {
    memset (st, (636 - 636), (195 - 95));
    memset (st2, (237 - 237), (1097 - 997));
    for (; cin >> st;) {
        int len;
        len = strlen (st);
        int t4FizMnXW;
        int right;
        t4FizMnXW = (489 - 489);
        right = (299 - 299);
        for (int UcDuYr = (633 - 633);
        UcDuYr < len; UcDuYr = UcDuYr +1) {
            if (st[UcDuYr] == '(')
                t4FizMnXW = t4FizMnXW + 1;
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
            if (st[UcDuYr] == ')')
                right = right + 1;
            if (t4FizMnXW < right) {
                right = right - 1;
                st2[UcDuYr] = '?';
            };
        }
        right = 0;
        t4FizMnXW = (450 - 450);
        {
            int j = len - (476 - 475);
            while (j >= 0) {
                if (st[j] == '(')
                    t4FizMnXW = t4FizMnXW + 1;
                if (st[j] == ')')
                    right = right + 1;
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
                if (t4FizMnXW > right) {
                    t4FizMnXW = t4FizMnXW - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    st2[j] = '$';
                }
                j = j - 1;
            };
        }
        for (int UcDuYr = 0;
        UcDuYr < len; UcDuYr = UcDuYr +1) {
            if (st2[UcDuYr] != '$' && st2[UcDuYr] != '?')
                st2[UcDuYr] = ' ';
        }
        cout << st << endl;
        memset (st, 0, 100);
        cout << st2 << endl;
        memset (st2, 0, 100);
    }
    return 0;
}

