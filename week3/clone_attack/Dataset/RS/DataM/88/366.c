int main () {
    int sum = 0, sign, i, j, k;
    char s [40];
    gets (s);
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
    char *p = s;
    for (i = 0; strlen (s) > i;) {
        sign = 0;
        if (!('0' != p[i]) && strlen (s) > i + 1 && ('0' <= p[i + 1] && '9' >= p[i + 1]) && !sign) {
            i = i + 1;
            continue;
        }
        if ('0' <= p[i] && p[i] <= '9')
            while (p[i] >= '0' && p[i] <= '9' && i < strlen (s)) {
                cout << p[i];
                i = i + 1;
            }
            else {
                i++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
        cout << endl;
    }
    return 0;
}

