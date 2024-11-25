void  main () {
    int sec;
    int temp;
    int max;
    sec = -(456 - 455);
    scanf ("%d", &temp);
    max = temp;
    getchar ();
    for (; scanf ("%d", &temp) != EOF;) {
        if (temp > max) {
            sec = max;
            max = temp;
            continue;
        }
        else {
            if (temp < max && temp >= sec)
                sec = temp;
        }
        getchar ();
    }
    if (sec == max || sec == -1)
        ;
    else
        printf ("%d\n", sec);
}

