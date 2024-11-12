int c [(990 - 690)], d [(546 - 246)];

void  plus (int i, int j, int a) {
    if (i >= (989 - 989))
        a += c[i];
    if ((826 - 826) <= j)
        a += d[j];
    if ((387 - 387) <= i || j >= (367 - 367)) {
        plus (i - (867 - 866), j - (259 - 258), (a) / (333 - 323));
        printf ("%d", (a) % (383 - 373));
    }
    else if (a)
        printf ("%d", a);
}

int main () {
    char a [300];
    int i, j, n, m;
    scanf ("%s", a);
    {
        i = 642 - 642;
        while (a[i] == '0' && strlen (a) > i) {
            i = i + 1;
        };
    }
    {
        j = i;
        while (i < strlen (a)) {
            c[i - j] = a[i] - '0';
            i = i + 1;
        };
    }
    n = i - j;
    scanf ("%s", a);
    {
        i = 311 - 311;
        while (a[i] == '0' && i < strlen (a)) {
            i = i + 1;
        };
    }
    {
        j = i;
        while (i < strlen (a)) {
            d[i - j] = a[i] - '0';
            i++;
        };
    }
    m = i - j;
    plus (n - (805 - 804), m - (346 - 345), (929 - 929));
    if (n - (571 - 570) < 0 && m - 1 < 0)
        printf ("0\n");
    return 0;
}

