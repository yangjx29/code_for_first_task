int main () {
    int KxvWdacb;
    int lNmalx;
    char RMS0hR;
    char HD7EzbR32e [80];
    char hAqjE06Xs [80];
    RMS0hR = (703 - 703);
    gets (HD7EzbR32e);
    gets (hAqjE06Xs);
    KxvWdacb = strlen (HD7EzbR32e);
    if (KxvWdacb >= strlen (hAqjE06Xs))
        KxvWdacb = strlen (hAqjE06Xs);
    for (lNmalx = 0; lNmalx < KxvWdacb; lNmalx = lNmalx + 1) {
        if (!(hAqjE06Xs[lNmalx] != HD7EzbR32e[lNmalx]) || !(hAqjE06Xs[lNmalx] - 'a' + 'A' != HD7EzbR32e[lNmalx]) || !(hAqjE06Xs[lNmalx] + 'a' - 'A' != HD7EzbR32e[lNmalx])) {
            RMS0hR++;
            continue;
        }
        if ('z' >= HD7EzbR32e[lNmalx] && 'a' <= HD7EzbR32e[lNmalx] && 'z' >= hAqjE06Xs[lNmalx] && 'a' <= hAqjE06Xs[lNmalx]) {
            if (hAqjE06Xs[lNmalx] < HD7EzbR32e[lNmalx])
                ;
            else
                ;
            break;
        }
        if ('Z' >= HD7EzbR32e[lNmalx] && HD7EzbR32e[lNmalx] >= 'A' && 'Z' >= hAqjE06Xs[lNmalx] && 'A' <= hAqjE06Xs[lNmalx]) {
            if (HD7EzbR32e[lNmalx] > hAqjE06Xs[lNmalx])
                ;
            else
                ;
            break;
        }
        if (HD7EzbR32e[lNmalx] <= 'Z' && HD7EzbR32e[lNmalx] >= 'A' && hAqjE06Xs[lNmalx] <= 'z' && hAqjE06Xs[lNmalx] >= 'a') {
            hAqjE06Xs[lNmalx] = hAqjE06Xs[lNmalx] + 'A' - 'a';
            if (HD7EzbR32e[lNmalx] > hAqjE06Xs[lNmalx])
                ;
            else
                printf ("<");
            break;
        }
        if (hAqjE06Xs[lNmalx] <= 'Z' && hAqjE06Xs[lNmalx] >= 'A' && HD7EzbR32e[lNmalx] <= 'z' && HD7EzbR32e[lNmalx] >= 'a') {
            hAqjE06Xs[lNmalx] = hAqjE06Xs[lNmalx] - 'A' + 'a';
            if (HD7EzbR32e[lNmalx] > hAqjE06Xs[lNmalx])
                ;
            else
                printf ("<");
            break;
        };
    }
    if (RMS0hR == KxvWdacb &&strlen (HD7EzbR32e) == strlen (hAqjE06Xs))
        printf ("=");
    if (RMS0hR == KxvWdacb &&strlen (HD7EzbR32e) < strlen (hAqjE06Xs))
        printf ("<");
    if (RMS0hR == KxvWdacb &&strlen (HD7EzbR32e) > strlen (hAqjE06Xs))
        printf (">");
    return 0;
}

