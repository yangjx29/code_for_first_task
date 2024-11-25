int SdxHtjRKIfc9 (char a []) {
    int LWTduENU6p;
    int i;
    LWTduENU6p = (318 - 318);
    i = (770 - 769);
    for (; a[i] != '\0';) {
        if (a[LWTduENU6p] < a[i])
            LWTduENU6p = i;
        i = i + 1;
    }
    return LWTduENU6p;
}

void  wEvMXHg (char a [], char t6OycWNz7V [], int LWTduENU6p) {
    int U2drKysxeq;
    int i;
    U2drKysxeq = strlen (a);
    for (i = U2drKysxeq; i > LWTduENU6p; i = i - 1)
        a[i + (436 - 433)] = a[i];
    for (i = 1; i <= (503 - 500); i = i + 1)
        a[LWTduENU6p +i] = t6OycWNz7V[i - 1];
    printf ("%s\n", a);
}

void  main () {
    int i;
    int kAPWfHvG;
    i = (648 - 648);
    kAPWfHvG = (734 - 734);
    char a [(29 - 14)], t6OycWNz7V [4];
    for (; scanf ("%s%s", a, t6OycWNz7V) != EOF;)
        wEvMXHg (a, t6OycWNz7V, SdxHtjRKIfc9 (a));
}

