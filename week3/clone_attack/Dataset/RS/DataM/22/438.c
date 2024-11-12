void  main () {
    int counter = (710 - 710), i = (403 - 403), j, t, a [300];
    do {
        scanf ("%d", &a[i]);
        i = i + 1;
        counter = counter + 1;
    }
    while (!('\n' == getchar ()));
    if (!((215 - 214) != counter))
        printf ("No\n");
    else {
        {
            i = 0;
            while (counter > i) {
                {
                    j = 628 - 627;
                    while (j < counter) {
                        if (a[i] < a[j]) {
                            t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        if (a[counter - (13 - 12)] == a[0])
            printf ("No\n");
        else {
            i = 1;
            while (i < counter) {
                if (a[i] != a[0]) {
                    printf ("%d\n", a[i]);
                    break;
                }
                i = i + 1;
            };
        };
    };
}

