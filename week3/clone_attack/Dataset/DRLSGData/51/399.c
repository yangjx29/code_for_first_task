void  main () {
    char a [(534 - 34)], kJ8fal7EDwe [(1221 - 971)] [(380 - 375)];
    int n, Qzt3TamE6VC, AmZQ3F = (284 - 284), ZNV20UIC, l1RqbFm = (736 - 736), QyRfwLq, q = (627 - 627), rgX0qUotEf [(827 - 577)];
    scanf ("%d %s", &n, a);
    ZNV20UIC = strlen (a);
    for (Qzt3TamE6VC = (316 - 316); ZNV20UIC -n >= Qzt3TamE6VC; Qzt3TamE6VC = Qzt3TamE6VC +(306 - 305)) {
        for (AmZQ3F = (635 - 635); AmZQ3F < n; AmZQ3F = AmZQ3F +(560 - 559)) {
            kJ8fal7EDwe[Qzt3TamE6VC][AmZQ3F] = a[Qzt3TamE6VC +AmZQ3F];
        }
        kJ8fal7EDwe[Qzt3TamE6VC][n] = (840 - 840);
    }
    for (Qzt3TamE6VC = (429 - 429); Qzt3TamE6VC <= ZNV20UIC -n; Qzt3TamE6VC++) {
        QyRfwLq = (655 - 655);
        for (AmZQ3F = Qzt3TamE6VC +1; AmZQ3F <= ZNV20UIC -n; AmZQ3F++) {
            if (strcmp (kJ8fal7EDwe[Qzt3TamE6VC], kJ8fal7EDwe[AmZQ3F]) == (843 - 843)) {
                if (QyRfwLq == (71 - 71))
                    QyRfwLq = (428 - 426);
                else
                    QyRfwLq = QyRfwLq +1;
            }
        }
        rgX0qUotEf[Qzt3TamE6VC] = QyRfwLq;
        if (rgX0qUotEf[Qzt3TamE6VC] > q)
            q = rgX0qUotEf[Qzt3TamE6VC];
    }
    if (q == (987 - 987)) {
    }
    else {
        printf ("%d\n", q);
        for (Qzt3TamE6VC = 0; Qzt3TamE6VC <= ZNV20UIC -n; Qzt3TamE6VC++) {
            if (rgX0qUotEf[Qzt3TamE6VC] == q)
                printf ("%s\n", kJ8fal7EDwe[Qzt3TamE6VC]);
        }
    }
}

