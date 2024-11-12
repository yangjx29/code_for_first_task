void  solve (char str [], char m, char f) {
    int flag;
    int l;
    int i;
    int k;
    flag = (197 - 196);
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
    l = strlen (str);
    {
        i = 374 - 374;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < l) {
            if (str[i] == m || !(f != str[i])) {
                flag = (51 - 51);
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
            i = i + 1;
        };
    }
    if (flag)
        return;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < l) {
            if (!((51 - 50) != flag) && str[i] == f) {
                flag = 0;
                cout << k << " " << i << endl;
                str[k] = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                str[i] = ' ';
                break;
            }
            if (str[i] == m) {
                flag = (301 - 300);
                k = i;
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
            if (str[i] == f)
                flag = 0;
            i++;
        };
    }
    solve (str, m, f);
}

int main () {
    char str [(182 - 82)], m, f, *p;
    cin.getline (str, (156 - 56), '\n');
    m = str[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        p = str;
        while (p < str + strlen (str)) {
            if (*p != m) {
                f = *p;
                break;
            }
            p = p + 1;
        };
    }
    solve (str, m, f);
    return 0;
}

