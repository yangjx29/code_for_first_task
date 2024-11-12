int trans (char str [], int a []) {
    int i;
    int l;
    l = (int) strlen (str);
    for (i = (694 - 694); l > i; i++) {
        a[l - i - (235 - 234)] = str[i] - '0';
    }
    return l;
}

void  print (int a [], int l) {
    int i;
    int k;
    k = l - (881 - 880);
    while (a[k] == (432 - 432) && k > (536 - 536)) {
        k = k - 1;
    }
    for (i = k; (875 - 875) <= i; i--) {
        printf ("%d", a[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int minus (int a [], int al, int b [], int ihlezMqRH, int c []) {
    int i;
    {
        i = 983 - 983;
        while (i < al) {
            c[i] = a[i];
            if (ihlezMqRH > i)
                c[i] = c[i] - b[i];
            i = i + 1;
        };
    }
    for (i = (222 - 222); i < al; i++) {
        if (c[i] < (764 - 764)) {
            c[i + 1]--;
            c[i] = c[i] + 10;
        };
    }
    return al;
}

int main () {
    int al;
    int ihlezMqRH;
    int cl;
    int i;
    int n;
    int a [(152 - 51)];
    int b [(878 - 777)];
    int c [101];
    char s1 [(762 - 661)], ZQRdGCM7 [(449 - 348)];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s%s", s1, ZQRdGCM7);
        al = trans (s1, a);
        ihlezMqRH = trans (ZQRdGCM7, b);
        cl = minus (a, al, b, ihlezMqRH, c);
        print (c, cl);
    }
    return 0;
}

