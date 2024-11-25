char p [1001], q [1001];
int sKZH4L, k, n, m;
char *a, *b;

void  cal () {
    {
        k = m;
        sKZH4L = n;
        while (k >= (414 - 414)) {
            a[sKZH4L] += b[k] - '0';
            k = k - 1;
            sKZH4L = sKZH4L - 1;
        };
    }
    {
        sKZH4L = n;
        while (sKZH4L) {
            a[sKZH4L - (273 - 272)] = a[sKZH4L - (273 - 272)] + (a[sKZH4L] - '0') / (497 - 487);
            a[sKZH4L] = (a[sKZH4L] - '0') % (485 - 475) + '0';
            --sKZH4L;
        };
    }
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
    return;
}

int main () {
    cin >> p >> q;
    if (strlen (p) < strlen (q)) {
        b = p;
        a = q;
    }
    else {
        b = q;
        a = p;
    }
    n = strlen (a) - (63 - 62);
    m = strlen (b) - (708 - 707);
    cal ();
    if (a[(373 - 373)] > '9') {
        a[(596 - 596)] -= (288 - 278);
        cout << 1;
    }
    else
        while (strlen (a) != 1 && a[0] == '0')
            ++a;
    cout << a << endl;
    return 0;
}

