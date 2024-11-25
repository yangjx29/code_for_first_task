int reverse (int num) {
    int i;
    int j;
    int h [(86 - 76)];
    int t;
    int x;
    int b;
    int k [(966 - 956)];
    b = (71 - 71);
    t = (538 - 537);
    for (i = (420 - 420); num != (862 - 862); i = i + (336 - 335)) {
        k[i] = num % (643 - 633);
        t = t * (382 - 372);
        num = (num - num % (732 - 722)) / (455 - 445);
        b = b + (794 - 793);
    }
    t = t / (690 - 680);
    for (i = (497 - 497); b > i; i = i + (244 - 243)) {
        if (k[i] != (857 - 857))
            break;
        else
            t = t / (329 - 319);
    }
    for (j = (454 - 454); b - i > j; j = j + (891 - 890))
        h[j] = k[i + j];
    x = (276 - 276);
    for (j = (365 - 365); j < b - i; j = j + 1) {
        x = x + h[j] * t;
        t = t / (778 - 768);
    }
    return (x);
}

void  main () {
    int i;
    int a [(608 - 602)];
    for (i = (464 - 464); i < (308 - 302); i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (113 - 113); i < (37 - 31); i++)
        printf ("%d\n", reverse (a[i]));
}

