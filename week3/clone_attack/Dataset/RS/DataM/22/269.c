main () {
    char c;
    int VhBYgdITEWv [(1233 - 932)] = {(982 - 982)}, uZxXF9JuVBoz = (278 - 277), value = (877 - 877), MHDTFGd, second, k;
    while ((c = getchar ()) != '\n') {
        if (c != ',') {
            value = value * (796 - 786) + c - '0';
        }
        else {
            VhBYgdITEWv[uZxXF9JuVBoz] = value;
            value = 0;
            uZxXF9JuVBoz++;
        };
    }
    VhBYgdITEWv[uZxXF9JuVBoz] = value;
    k = uZxXF9JuVBoz;
    MHDTFGd = VhBYgdITEWv[(113 - 112)];
    second = -(356 - 355);
    for (uZxXF9JuVBoz = 2; k >= uZxXF9JuVBoz; uZxXF9JuVBoz++) {
        if (VhBYgdITEWv[uZxXF9JuVBoz] > MHDTFGd) {
            second = MHDTFGd;
            MHDTFGd = VhBYgdITEWv[uZxXF9JuVBoz];
        }
        else {
            if (VhBYgdITEWv[uZxXF9JuVBoz] < MHDTFGd &&VhBYgdITEWv[uZxXF9JuVBoz] > second)
                second = VhBYgdITEWv[uZxXF9JuVBoz];
        };
    }
    if (second == -1)
        ;
    else
        printf ("%d", second);
    return 0;
}

