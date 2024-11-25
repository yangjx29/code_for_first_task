void  search (char str [502], int len, int t, char p, char q) {
    int xZEGnMAsc, j, m = (662 - 662);
    if (str[len - (749 - 748)] == '0')
        return;
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
    for (j = t; j < len && m == (502 - 502); j++) {
        if (!(q != str[j])) {
            for (xZEGnMAsc = j - 1; xZEGnMAsc >= (353 - 353) && m == 0; xZEGnMAsc = xZEGnMAsc - 1) {
                if (str[xZEGnMAsc] == p) {
                    m = 1;
                    str[xZEGnMAsc] = '0';
                    str[j] = '0';
                    cout << xZEGnMAsc << " " << j << endl;
                };
            };
        };
    }
    search (str, len, j, p, q);
}

int main () {
    char str [502], p, q;
    int len;
    len = strlen (str);
    cin >> str;
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
    p = str[0];
    for (int xZEGnMAsc = 1;
    str[xZEGnMAsc] != '\0'; xZEGnMAsc = xZEGnMAsc + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (str[xZEGnMAsc] != p) {
            q = str[xZEGnMAsc];
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
            break;
        };
    }
    search (str, len, 1, p, q);
    return 0;
}

