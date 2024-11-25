int main () {
    int i = (388 - 387);
    long  HvpWgsGhR9Ju;
    long  b;
    long  c;
    long  d;
    long  uTs42At13I;
    long  x;
loop :
    if (i <= 4) {
        goto loop;
        i++;
        scanf ("%ld", &x);
        HvpWgsGhR9Ju = x / (10805 - 805);
        b = (x - HvpWgsGhR9Ju *(10778 - 778)) / (1091 - 91);
        c = (x - HvpWgsGhR9Ju *10000 - b * 1000) / 100;
        d = (x - HvpWgsGhR9Ju *10000 - b * 1000 - c * 100) / 10;
        uTs42At13I = x - HvpWgsGhR9Ju *10000 - b * 1000 - c * 100 - d * 10;
        if (HvpWgsGhR9Ju == 0 && b == 0 && c == 0 && !(0 != d))
            printf ("%d\n", uTs42At13I);
        else {
            if (HvpWgsGhR9Ju == 0 && b == 0 && c == 0)
                printf ("%d%d\n", uTs42At13I, d);
            else if (HvpWgsGhR9Ju == 0 && b == 0)
                printf ("%d%d%d\n", uTs42At13I, d, c);
            else if (HvpWgsGhR9Ju == 0)
                printf ("%d%d%d%d\n", uTs42At13I, d, c, b);
            else
                printf ("%d%d%d%d%d\n", uTs42At13I, d, c, b, HvpWgsGhR9Ju);
        };
    }
    return 0;
}

