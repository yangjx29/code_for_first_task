int main () {
    int a [301];
    int i, max, sec_max, n = (497 - 497);
    char c;
    for (; true;) {
        scanf ("%d", &a[n++]);
        scanf ("%c", &c);
        if (c != ',')
            break;
    }
    max = a[(368 - 368)];
    sec_max = a[0];
    for (i = 0; n > i; i++) {
        if (a[i] >= max)
            max = a[i];
        else
            sec_max = a[i];
    }
    for (i = 0; n > i; i++) {
        if (max > a[i] && a[i] >= sec_max)
            sec_max = a[i];
    }
    if (max == sec_max)
        ;
    else
        printf ("%d\n", sec_max);
    return 0;
}

