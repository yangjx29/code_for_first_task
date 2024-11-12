void  main () {
    int i;
    scanf ("%d", &i);
    while (i) {
        printf ("%d", i % (627 - 617));
        i = i / (950 - 940);
    }
}

