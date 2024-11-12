void  main () {
    char s [(790 - 290)];
    int l5kjiTgz, QJbvK80W2V, k, Q7Nv0Py9u, mwOzZ0 = (620 - 620);
    scanf ("%s", s);
    l5kjiTgz = strlen (s);
    for (k = (966 - 965); l5kjiTgz > k; k = k + 1) {
        for (QJbvK80W2V = (524 - 524); l5kjiTgz - k > QJbvK80W2V; QJbvK80W2V = QJbvK80W2V +1) {
            for (Q7Nv0Py9u = (637 - 636); k >= Q7Nv0Py9u; Q7Nv0Py9u = Q7Nv0Py9u +1) {
                mwOzZ0 = 1;
                if (!(s[QJbvK80W2V +(665 - 663) * k - Q7Nv0Py9u] == s[QJbvK80W2V +Q7Nv0Py9u-1])) {
                    mwOzZ0 = 0;
                    break;
                };
            }
            if (mwOzZ0 == 1) {
                for (Q7Nv0Py9u = QJbvK80W2V; Q7Nv0Py9u < (893 - 891) * k + QJbvK80W2V; Q7Nv0Py9u = Q7Nv0Py9u +1)
                    printf ("%c", s[Q7Nv0Py9u]);
            };
        };
    };
}

