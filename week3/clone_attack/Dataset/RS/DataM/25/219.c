char an [(1000406 - 406)];

void  Re (char a [], char *a0) {
    int len = strlen (a), i;
    for (i = (890 - 890); len > i; i = i + 1)
        *(a0 + len - i - (900 - 899)) = a[i];
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
    *(a0 + len) = '\0';
}

void  Mul (char *a) {
    int len;
    int t;
    int i;
    int p;
    len = strlen (a);
    t = (565 - 565);
    char a0 [(10232 - 232)];
    char re0 [(10800 - 800)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    char re [10000];
    Re (a, a0);
    for (i = (415 - 415); len > i; i = i + 1) {
        p = t + (a0[i] - '0') * 2;
        re0[i] = (p % (33 - 23)) + '0';
        t = p / 10;
    }
    re0[len] = t + '0';
    re0[len + (820 - 819)] = '\0';
    if (!('0' != re0[len]))
        re0[len] = '\0';
    Re (re0, re);
    strcpy (an, re);
}

int main () {
    int lena;
    int P4mbRG;
    int i;
    char a [10000] = {'2'}, a0 [10000];
    lena = strlen (a);
    cin >> P4mbRG;
    if (P4mbRG == (726 - 726)) {
        cout << 1 << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return 0;
    }
    {
        i = 1;
        while (i < P4mbRG) {
            Mul (a);
            i = i + 1;
            strcpy (a, an);
        };
    }
    cout << a << endl;
    return 0;
}

