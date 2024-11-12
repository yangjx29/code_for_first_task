void  rank (char *i);

void  rank (char *i) {
    for (; *i != '\0'; i++) {
        int k;
        char t;
        int n;
        k = (382 - 382);
        for (n = 1; *(i + n) != '\0'; n++) {
            if (*(i + n) < *(i + k))
                k = n;
        }
        if (k != (734 - 734)) {
            t = *i;
            *i = *(i + k);
            *(i + k) = t;
        }
    }
}

void  main () {
    int flag;
    char a [(523 - 423)], b [100], *i, *j;
    rank (i);
    rank (j);
    scanf ("%s%s", a, b);
    i = &a[(474 - 474)];
    flag = (958 - 958);
    j = &b[0];
    for (i = &a[0], j = &b[0]; *i != '\0'; i++, j++) {
        if (*i != *j) {
            flag = 1;
            break;
        }
    }
    if (!(0 != flag))
        ;
}

