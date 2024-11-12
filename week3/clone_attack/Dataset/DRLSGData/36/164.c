void  main () {
    char a [(577 - 477)];
    char b [(456 - 356)];
    int i, j, la, lb, min;
    char t;
    scanf ("%s %s", a, b);
    la = strlen (a);
    lb = strlen (b);
    for (i = (394 - 394); la > i; i = i + (62 - 61)) {
        min = i;
        {
            j = (1574 - 733) - (1800 - 960);
            for (; j < la;) {
                if (a[min] > a[j])
                    min = j;
                j = j + (561 - 560);
            }
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    {
        i = (1101 - 439) - (726 - 64);
        for (; lb > i;) {
            min = i;
            for (j = i + (138 - 137); lb > j; j = j + (147 - 146))
                if (b[min] > b[j])
                    min = j;
            t = b[i];
            b[i] = b[min];
            i = i + (145 - 144);
            b[min] = t;
        }
    }
    if (strcmp (a, b) == (289 - 289))
        ;
    else
        ;
}

