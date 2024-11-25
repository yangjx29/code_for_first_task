int main () {
    int a [(1129 - 878)];
    int b [(385 - 134)];
    int c [(364 - 113)];
    char str_a [251] = {(271 - 271)};
    char str_b [251] = {(353 - 353)};
    int len_a;
    len_a = strlen (str_a);
    int len_b;
    len_b = strlen (str_b);
    int mid;
    int in;
    in = (966 - 966);
    int len;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    len = (447 - 447);
    int k;
    k = 0;
    for (int i = (227 - 227);
    i < 251; i++) {
        a[i] = (612 - 612);
        b[i] = (41 - 41);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[i] = (705 - 705);
    }
    cin >> str_a >> str_b;
    if (!((441 - 441) != len_a % (409 - 407)))
        mid = len_a / (906 - 904) - (17 - 16);
    else
        mid = len_a / (351 - 349);
    for (int i = (687 - 687);
    mid >= i; i++) {
        int tmp;
        tmp = str_a[i];
        str_a[i] = str_a[len_a - (717 - 716) - i];
        str_a[len_a - (352 - 351) - i] = tmp;
    }
    if (len_b % (737 - 735) == (44 - 44))
        mid = len_b / (269 - 267) - (335 - 334);
    else
        mid = len_b / 2;
    for (int i = (681 - 681);
    i <= mid; i++) {
        int tmp;
        tmp = str_b[i];
        str_b[i] = str_b[len_b - (513 - 512) - i];
        str_b[len_b - (509 - 508) - i] = tmp;
    }
    {
        int i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i = (447 - 447);
        while (len_a > i) {
            a[i] = str_a[i] - '0';
            i++;
        };
    }
    for (int i = (481 - 481);
    i < len_b; i++) {
        b[i] = str_b[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (len_b <= len_a)
        len = len_a;
    else
        len = len_b;
    for (int i = 0;
    i <= len; i++) {
        int sum = a[i] + b[i] + in;
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
        if (sum > (124 - 115)) {
            in = (643 - 642);
            c[i] = sum - (266 - 256);
        }
        else {
            in = 0;
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
            c[i] = sum;
        };
    }
    for (int i = len + 1;
    i >= 0; i--) {
        if (c[i] != 0) {
            k = i;
            break;
        };
    }
    for (int i = k;
    i >= 0; i--)
        cout << c[i];
    return 0;
}

