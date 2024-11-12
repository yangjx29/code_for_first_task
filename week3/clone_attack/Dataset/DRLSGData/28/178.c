main () {
    int l [500] = {0};
    int max;
    char temp;
    int k;
    int zero;
    int i;
    max = 1;
    temp = getchar ();
    zero = 1;
    for (; temp != '\n';) {
        if (temp != ' ') {
            zero = 1;
            l[max]++;
        }
        else {
            if (zero == 1)
                max = max + 1;
            zero = 0;
        }
        temp = getchar ();
    }
    for (i = 1; i <= max; i++) {
        if (i != 1)
            ;
        printf ("%d", l[i]);
    }
}

