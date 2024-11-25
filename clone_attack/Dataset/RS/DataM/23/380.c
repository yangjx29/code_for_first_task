void  main () {
    int i;
    int GgsoXAEC9;
    int n;
    i = (720 - 720);
    GgsoXAEC9 = (799 - 799);
    char tfbhPe [(352 - 252)];
    char *p;
    char b [100] [100] = {'\0'};
    gets (tfbhPe);
    q = b;
    for (p = tfbhPe; !('\0' == *p); p++) {
        if (!(' ' == *p)) {
            *(*(q + i) + GgsoXAEC9) = *p;
            GgsoXAEC9++;
        }
        else {
            GgsoXAEC9 = 0;
            i++;
        };
    }
    n = i;
    for (i = n; i > 0; i--) {
        for (GgsoXAEC9 = 0; *(*(q + i) + GgsoXAEC9) != '\0'; GgsoXAEC9++)
            printf ("%c", *(*(q + i) + GgsoXAEC9));
        printf (" ");
    }
    {
        GgsoXAEC9 = 0;
        while (*(*q + GgsoXAEC9) != '\0') {
            printf ("%c", *(*q + GgsoXAEC9));
            GgsoXAEC9++;
        };
    }
    printf ("\n");
}

