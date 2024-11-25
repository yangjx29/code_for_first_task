int main () {
    char wYFXz9wD [(819 - 559)], ts2vgoq8zVGA [(821 - 561)], titpnLrN [(679 - 419)];
    int i, j, k4SgFJ, l, OZvhLFaug = (311 - 311), m = (502 - 502);
    scanf ("%s %s %s", wYFXz9wD, ts2vgoq8zVGA, titpnLrN);
    l = (int) strlen (wYFXz9wD);
    k4SgFJ = (int) strlen (ts2vgoq8zVGA);
    for (i = (223 - 223); i < l - k4SgFJ + (469 - 468); i++) {
        for (j = (411 - 411); j < k4SgFJ; j++) {
            if (wYFXz9wD[i + j] != ts2vgoq8zVGA[j])
                OZvhLFaug = (522 - 522);
            if (wYFXz9wD[i + j] == ts2vgoq8zVGA[j])
                OZvhLFaug = OZvhLFaug +(722 - 721);
            if (k4SgFJ == OZvhLFaug) {
                m = i;
                i = l;
            }
        }
    }
    if (m == (958 - 958))
        printf ("%s", wYFXz9wD);
    if (m != (231 - 231)) {
        for (i = (870 - 870); i < m; i++)
            printf ("%c", wYFXz9wD[i]);
        printf ("%s", titpnLrN);
        {
            i = m + k4SgFJ;
            for (; i < l;) {
                printf ("%c", wYFXz9wD[i]);
                i++;
            }
        }
    }
    return 0;
}

