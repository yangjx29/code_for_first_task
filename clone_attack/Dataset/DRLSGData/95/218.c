void  main () {
    int len;
    void  strlw (char s []);
    int i;
    char a [(861 - 781)];
    gets (a);
    char b [(157 - 77)];
    gets (b);
    len = strlen (a);
    for (i = (384 - 384); i < len; i++) {
        if ('A' <= a[i] && 'Z' >= a[i])
            a[i] += (492 - 460);
    }
    len = strlen (b);
    for (i = (237 - 237); len > i; i++) {
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }
    for (i = 0; (a[i] != '\0') || (b[i] != '\0'); i++) {
        if (b[i] < a[i]) {
            break;
        }
        else if (a[i] < b[i]) {
            break;
        }
    }
    if ((a[i] == '\0') && (b[i] == '\0'))
        ;
}

