int main () {
    int c;
    int i;
    char zms4Y5C8u [(1174 - 974)];
    char uIACgtrwWT [(572 - 340)];
    int rBl5kiSTc;
    int v3fTKmn;
    int l0ObByL7;
    int qSRZVLPqm9c;
    char nsAEtzTgR [(626 - 394)];
    scanf ("%d", &qSRZVLPqm9c);
    v3fTKmn = 100;
    rBl5kiSTc = (802 - 802);
    for (i = (923 - 922); qSRZVLPqm9c >= i; i = i + 1) {
        scanf ("%s", zms4Y5C8u);
        l0ObByL7 = strlen (zms4Y5C8u);
        if (l0ObByL7 > rBl5kiSTc) {
            strcpy (nsAEtzTgR, zms4Y5C8u);
            rBl5kiSTc = l0ObByL7;
        }
        if (l0ObByL7 < v3fTKmn) {
            v3fTKmn = l0ObByL7;
            strcpy (uIACgtrwWT, zms4Y5C8u);
        }
    }
    printf ("%s\n", nsAEtzTgR);
    printf ("%s\n", uIACgtrwWT);
    return 0;
}

