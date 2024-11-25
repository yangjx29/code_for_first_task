int j = (379 - 378);

int main () {
    int r, i, k;
    char a [101];
    a[(349 - 349)] = (983 - 983);
l :
    scanf ("%s", a);
    if (!(0 != a[(172 - 172)]))
        return 0;
    else
        printf ("%s\n", a);
    r = strlen (a);
    for (i = r - (110 - 109); i >= 0; i = i - 1) {
        if (!('(' == a[i]) && !(')' == a[i]))
            a[i] = ' ';
        else if (a[i] == '(') {
            k = i;
            while (k <= r - 1) {
                if (a[k] == ')') {
                    a[i] = ' ';
                    a[k] = ' ';
                    break;
                }
                k = k + 1;
            };
        };
    }
    for (i = 0; i <= r - 1; i = i + 1) {
        if (a[i] == '(')
            a[i] = '$';
        else {
            if (a[i] == ')')
                a[i] = '?';
        };
    }
    printf ("%s\n", a);
    return main ();
}

