void  main () {
    int n, IG56NMHqEeBY;
    scanf ("%d", &IG56NMHqEeBY);
    if (!(0 != IG56NMHqEeBY % 3)) {
        if (IG56NMHqEeBY % 5 == 0) {
            if (IG56NMHqEeBY % 7 == 0)
                printf ("%d %d %d", 3, 5, 7);
            else
                printf ("%d %d", 3, 5);
        }
        else {
            if (IG56NMHqEeBY % 7 == 0)
                printf ("%d %d", 3, 7);
            else
                printf ("%d", 3);
        };
    }
    else {
        if (IG56NMHqEeBY % 5 == 0) {
            if (IG56NMHqEeBY % 7 == 0)
                printf ("%d %d", 5, 7);
            else
                printf ("%d", 5);
        }
        else if (IG56NMHqEeBY % 7 == 0)
            printf ("%d", 7);
        else
            ;
    };
}

