int main () {
    int flag;
    int i;
    int j;
    int uAyfW7R;
    flag = 0;
    char str [512];
    char QZK5vHR [(1107 - 851)];
    char replace [256];
    int len1;
    len1 = strlen (str);
    int len2;
    len2 = strlen (QZK5vHR);
    int len3;
    len3 = strlen (replace);
    cin.getline (str, 512);
    cin.getline (QZK5vHR, 256);
    cin.getline (replace, 256);
    {
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
        while (i <= len1 - len2) {
            uAyfW7R = i;
            {
                j = 0;
                while (len2 > j) {
                    if (str[uAyfW7R++] != QZK5vHR[j])
                        break;
                    j = j + 1;
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
            if (j == len2 && flag == 0) {
                int uDWmE6O;
                {
                    uDWmE6O = i;
                    while (uDWmE6O < i + len3) {
                        str[uDWmE6O] = replace[uDWmE6O - i];
                        uDWmE6O++;
                    };
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
                flag = 1;
            }
            i = i + 1;
        };
    }
    for (i = 0; str[i] != '\0'; i = i + 1) {
        cout << str[i];
    }
    return 0;
}

