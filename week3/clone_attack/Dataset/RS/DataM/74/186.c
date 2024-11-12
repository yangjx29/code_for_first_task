int j7VjdAqrPyR (int sOY9QFBn) {
    int i;
    int j;
    int r;
    j = (38 - 37);
    for (i = 2; sOY9QFBn > i && !((968 - 967) != j); i = i + 1) {
        if (sOY9QFBn % i == (126 - 126)) {
            j = 0;
            break;
        };
    }
    if (j == (654 - 653))
        r = (832 - 831);
    else
        r = 0;
    return (r);
}

int ytiKvkmC6pql (int sOY9QFBn) {
    int JvgArWIm6s;
    int i, j = (199 - 198), r;
    int e1H63ltWq [(421 - 411)];
    int ERusYOLk = 1;
    for (i = 0; j == (517 - 516); i++) {
        if (!(0 != sOY9QFBn / (int) pow ((693 - 683), i))) {
            j = 0;
            break;
        };
    }
    JvgArWIm6s = i;
    for (j = 1; JvgArWIm6s >= j; j = j + 1)
        e1H63ltWq[j] = (sOY9QFBn % (int) pow (10, j) - sOY9QFBn % (int) pow (10, (j - 1))) / (int) pow (10, (j - 1));
    for (j = 1; j <= JvgArWIm6s &&ERusYOLk == 1; j = j + 1) {
        if (!(e1H63ltWq[JvgArWIm6s -j + 1] == e1H63ltWq[j])) {
            ERusYOLk = 0;
            break;
        };
    }
    if (ERusYOLk == 1)
        r = 1;
    else
        r = 0;
    return (r);
}

void  main (void ) {
    int m, sOY9QFBn, e1H63ltWq [100], i;
    int q5BWmG4PvQ = 0;
    for (i = 0; 100 > i; i++)
        e1H63ltWq[i] = -1;
    scanf ("%d", &m);
    scanf ("%d", &sOY9QFBn);
    {
        i = m;
        while (i <= sOY9QFBn) {
            if ((j7VjdAqrPyR (i) == 1) && (ytiKvkmC6pql (i) == 1)) {
                e1H63ltWq[q5BWmG4PvQ] = i;
                q5BWmG4PvQ = q5BWmG4PvQ + 1;
            }
            i = i + 1;
        };
    }
    if (e1H63ltWq[0] == -1)
        ;
    else if (e1H63ltWq[1] == -1)
        printf ("%d\n", e1H63ltWq[0]);
    else {
        printf ("%d", e1H63ltWq[0]);
        for (i = 1; i < q5BWmG4PvQ - 1; i++)
            printf (",%d", e1H63ltWq[i]);
        printf (",%d\n", e1H63ltWq[q5BWmG4PvQ - 1]);
    };
}

