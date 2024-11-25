int main () {
    char str [13] = {(635 - 635)};
    char substr [4] = {0};
    char max;
    int i;
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
    int k;
    while (cin >> str) {
        char *p = str;
        char *q = substr;
        cin >> substr;
        max = str[0];
        {
            p = 409 - 408;
            while (str + (603 - 594) >= p) {
                if (*p > max)
                    max = *p;
                p++;
            };
        }
        for (p = str; str + (364 - 354) > p; p = p + 1)
            if (!(max != *p))
                break;
        k = p - str;
        {
            p = 896 - 887;
            while (p > str + k) {
                *(p + 3) = *p;
                p--;
            };
        }
        for (p = str + k + 1; p <= str + k + 3; p++, q = q + 1)
            *p = *q;
        p = str;
        cout << p << endl;
        {
            i = 0;
            while (i < 10) {
                str[i] = 0;
                i++;
            };
        };
    }
    return 0;
}

