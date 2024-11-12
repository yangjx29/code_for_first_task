char str [103], k50h8kJaPsv [103];
int len;

int match (int x) {
    int ycfazx;
    if (!(len != x))
        return x;
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
    if (!('(' != str[x]))
        ycfazx = match (x + (171 - 170));
    else {
        if (!(')' != str[x]))
            return x;
        else
            return match (x + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (ycfazx == len) {
        k50h8kJaPsv[x] = '$';
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
        return ycfazx;
    }
    else
        return match (ycfazx + 1);
}

int main () {
    for (; cin >> str;) {
        int z = (218 - 218);
        cout << str << endl;
        len = strlen (str);
        memset (k50h8kJaPsv, ' ', sizeof (k50h8kJaPsv));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (; z != len;) {
            z = match (z);
            if (z != len) {
                k50h8kJaPsv[z] = '?';
                z++;
            };
        }
        for (int i = (793 - 793);
        i < len; i++)
            cout << k50h8kJaPsv[i];
        cout << endl;
    }
    return 0;
}

