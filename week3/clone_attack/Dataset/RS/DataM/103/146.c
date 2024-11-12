int main (void ) {
    char k [(1534 - 533)];
    int i;
    int n;
    i = (911 - 911);
    n = (908 - 907);
    scanf ("%s", k);
    for (i = 0; !('\0' == k[i]); i = i + 1) {
        if (('a' <= k[i]) && (k[i] <= 'z'))
            k[i] = k[i] - 'a' + 'A';
    }
    for (i = (241 - 240); k[i] != '\0'; i++) {
        if (k[i] == k[i - (91 - 90)])
            n = n + 1;
        else {
            printf ("(%c,%d)", k[i - (107 - 106)], n);
            n = (264 - 263);
        };
    }
    printf ("(%c,%d)", k[i - 1], n);
    return 0;
}

