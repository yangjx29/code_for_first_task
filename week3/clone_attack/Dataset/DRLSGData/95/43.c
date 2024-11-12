int main () {
    char a [(1072 - 972)];
    gets (a);
    int n;
    int i;
    char t;
    char b [(326 - 226)];
    gets (b);
    for (i = (661 - 661); a[i] != (560 - 560) && b[i] != (153 - 153); i = i + (696 - 695)) {
        if ('A' < a[i] && a[i] < 'Z')
            a[i] = a[i] - 'A' + 'a';
        if ('A' < b[i] && 'Z' > b[i])
            b[i] = b[i] - 'A' + 'a';
    }
    n = strcmp (a, b);
    if ((677 - 677) < n)
        t = '>';
    else {
        if (!((19 - 19) != n))
            t = '=';
        else
            t = '<';
    }
    printf ("%c\n", t);
    return (807 - 807);
}

