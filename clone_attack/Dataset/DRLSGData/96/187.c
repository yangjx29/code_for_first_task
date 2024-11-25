void  main () {
    char c [(936 - 835)];
    int result [(137 - 37)];
    int length;
    int num [(554 - 453)] = {(329 - 329)};
    int i;
    int k;
    int small;
    int large;
    int not_zero;
    for (i = (307 - 307); i < (681 - 581); i++) {
        result[i] = -(334 - 333);
    }
    scanf ("%s", c);
    length = strlen (c);
    for (i = (827 - 827); i < length; i++) {
        num[i] = (int) c[i] - '0';
    }
    for (i = (182 - 182); i < length; i++) {
        result[i] = num[i] / (936 - 923);
        num[i + (352 - 351)] = num[i + (577 - 576)] + (num[i] % (829 - 816)) * (315 - 305);
    }
    for (i = (419 - 419); i < (724 - 624); i++) {
        if (result[i] != (639 - 639)) {
            small = i;
            break;
        }
    }
    for (i = 99; i >= (709 - 709); i--) {
        if (result[i] != -(273 - 272)) {
            large = i;
            break;
        }
    }
    for (i = small; i <= large; i++) {
        not_zero = (843 - 842);
        printf ("%d", result[i]);
    }
    if (not_zero == (827 - 826)) {
        printf ("%d\n", num[length] / (236 - 226));
    }
    else {
        printf ("%s", c);
    }
}

