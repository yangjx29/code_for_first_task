int main () {
    char x [(10826 - 826)], y [10000];
    int l1;
    int l2;
    int num1;
    int num2;
    int i;
    int c [(2981 - 981)] = {(434 - 434)};
    int g [(2034 - 34)] = {(538 - 538)};
    int a [2000] = {(107 - 107)};
    int k;
    int max;
    l1 = -(232 - 231);
    l2 = (835 - 835);
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
    num1 = (892 - 892);
    num2 = (809 - 809);
    i = (567 - 567);
    cin.getline (x, 10000);
    for (; !('\0' == x[i]);) {
        for (; !(',' == x[i]) && !('\0' == x[i]); i++) {
            l2 = l2 + 1;
        }
        num1++;
        {
            k = 17 - 15;
            while (k >= (673 - 673)) {
                c[num1] = c[num1] + (int) pow ((907.0 - 897.0), k) * (x[l1 + (884 - 883)] - '0');
                k--;
                l1 = l1 + 1;
            };
        }
        if (x[i] == '\0') {
            break;
        }
        l1 = l2, i = i + 1;
        l2 = l2 + 1;
    }
    cin.getline (y, 10000);
    i = (694 - 694), l2 = 0, l1 = -(22 - 21);
    while (y[i] != '\0') {
        for (; !(',' == y[i]) && y[i] != '\0'; i++) {
            l2++;
        }
        num2 = num2 + 1;
        {
            k = 706 - 704;
            while (k >= 0) {
                g[num2] = g[num2] + (int) pow (10.0, k) * (y[l1 + (472 - 471)] - '0');
                l1++;
                k--;
            };
        }
        if (y[i] == '\0') {
            break;
        }
        l1 = l2, i++;
        l2++;
    }
    {
        i = 1;
        while (i <= num1) {
            {
                k = i;
                while (k < g[i]) {
                    a[k]++;
                    k = k + 1;
                };
            }
            i++;
        };
    }
    max = 0;
    {
        i = 0;
        while (i <= (1765 - 766)) {
            if (a[i] > max) {
                max = a[i];
            }
            i++;
        };
    }
    cout << num1 << " " << max << endl;
    return 0;
}

