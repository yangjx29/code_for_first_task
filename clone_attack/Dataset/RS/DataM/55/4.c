int main () {
    char str [1000];
    char IaxCeYT [1000];
    char change1 (char);
    char MyMUY9RF7 (char);
    int i = 0, j;
    long  long  int n = (866 - 866), a, a0, lgONGTh5r9;
    a = 1;
    scanf ("%lld ", &a0);
    do {
        scanf ("%c", &str[i]);
        if (96 < str[i])
            str[i] = str[i] - (838 - 806);
        i = i + 1;
    }
    while (!(' ' == str[i - 1]));
    scanf ("%lld", &lgONGTh5r9);
    i = i - 1;
    for (j = i - 1; j >= 0; j = j - 1) {
        n = n + a * change1 (str[j]);
        a = a * a0;
    }
    j = 0;
    for (; !(0 == n);) {
        IaxCeYT[j] = MyMUY9RF7 ((char) (n % lgONGTh5r9));
        j = j + 1;
        n = n / lgONGTh5r9;
    }
    if (0 < j) {
        for (i = j - 1; 0 <= i; i--)
            printf ("%c", IaxCeYT[i]);
    }
    if (j == 0)
        ;
    return 0;
}

char change1 (char m) {
    if (m <= '9' && m >= '0')
        m = m - '0';
    if (m > '9')
        m = m - 'A' + 10;
    return (m);
}

char MyMUY9RF7 (char m) {
    if (m >= 10)
        m = m - 10 + 'A';
    if (m < 10)
        m = m + '0';
    return (m);
}

