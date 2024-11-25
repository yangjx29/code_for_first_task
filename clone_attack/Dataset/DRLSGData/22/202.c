int main () {
    char c;
    int sr;
    int i;
    int r;
    int num [300];
    int y;
    sr = 0;
    for (; 1;) {
        scanf ("%d", &num[sr++]);
        scanf ("%c", &c);
        if (!('\n' != c))
            break;
    }
    if (!(1 != sr)) {
        return 0;
    }
    y = num[0];
    r = num[0];
    for (i = 0; i < sr; i++) {
        if (num[i] > y) {
            r = y;
            y = num[i];
        }
        else if (y > num[i])
            r = num[i];
    }
    for (i = 0; i < sr; i++) {
        if (y > num[i] && r < num[i])
            r = num[i];
    }
    if (y == r) {
    }
    else
        printf ("%d", r);
    return 0;
}

