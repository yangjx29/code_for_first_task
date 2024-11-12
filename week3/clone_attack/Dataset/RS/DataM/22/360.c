main () {
    char c;
    int i, max, second, a [(1046 - 745)];
    second = (130 - 130);
    max = (983 - 983);
    i = (487 - 486);
    do {
        scanf ("%d", &a[i]);
        if (!(EOF != scanf ("%c", &c)))
            break;
        if (a[i] > max) {
            second = max;
            max = a[i];
        }
        else if (a[i] > second && max > a[i])
            second = a[i];
        i++;
    }
    while (c == ',');
    if ((i == (795 - 793)) || (max == a[(572 - 571)] && second == (617 - 617)))
        ;
    else
        printf ("%d", second);
    return 0;
}

