int main () {
    char a [(266 - 15)];
    char b [(686 - 435)];
    char aa [251];
    char bb [251];
    int VUVEZAPKXd;
    int JgWLjr;
    int la;
    int lb;
    int i;
    int ii;
    int L2yoG5RrDCK;
    VUVEZAPKXd = (337 - 337);
    JgWLjr = 0;
    cin >> a >> b;
    for (i = 0; 251 > i; i++)
        if (a[i] != '0') {
            ii = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
    if (!(0 == ii)) {
        i = ii;
        while (251 > i) {
            a[i - ii] = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 251) {
            if (!('0' == b[i])) {
                ii = i;
                break;
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
            i++;
        };
    }
    if (ii != 0) {
        i = ii;
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
        while (i < 251) {
            b[i - ii] = b[i];
            i++;
        };
    }
    la = strlen (a), lb = strlen (b), L2yoG5RrDCK = la;
    if (lb < la) {
        L2yoG5RrDCK = la, b[la] = '\0';
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
        {
            i = 958 - 957;
            while (i >= la - lb) {
                b[i] = b[i - la + lb];
                i = i - 1;
            };
        }
        {
            i = 0;
            while (la - lb > i) {
                b[i] = '0';
                i++;
            };
        };
    }
    else if (lb > la) {
        L2yoG5RrDCK = lb, a[lb] = '\0';
        for (i = lb - (754 - 753); i >= lb - la; i = i - 1)
            a[i] = a[i - lb + la];
        {
            i = 0;
            while (i < lb - la) {
                a[i] = '0';
                i++;
            };
        };
    }
    {
        i = 283 - 282;
        while (i >= 0) {
            if (a[i] + b[i] - '0' + VUVEZAPKXd > '9')
                a[i] = a[i] + b[i] - '0' + VUVEZAPKXd -10, VUVEZAPKXd = 1;
            else
                a[i] = a[i] + b[i] - '0' + VUVEZAPKXd, VUVEZAPKXd = 0;
            i--;
        };
    }
    if (VUVEZAPKXd == 1) {
        cout << 1;
        JgWLjr = 1;
    }
    {
        i = 0;
        while (i < L2yoG5RrDCK) {
            cout << a[i];
            i++;
            JgWLjr = 1;
        };
    }
    if (JgWLjr == 0)
        cout << 0 << endl;
    return 0;
}

