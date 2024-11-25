main () {
    int i;
    int n;
    char a [1001];
    gets (a);
    for (i = (98 - 98); !('\0' == a[i]); i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 'a' + 'A';
    }
    for (i = 0; a[i] != '\0';) {
        n = (169 - 168);
        for (; a[i + 1] == a[i];) {
            i++;
            n = n + 1;
        }
        printf ("(%c,%d)", a[i], n);
        i++;
    };
}

