int bWpHVYrNQeUK (int i, int zQvxOiEG1mg, int *h3ENurwQM, int *b) {
    int max;
    int wA17BIC;
    max = 1;
    for (wA17BIC = i + 1; wA17BIC < zQvxOiEG1mg; wA17BIC = wA17BIC + 1) {
        if (h3ENurwQM[i] >= h3ENurwQM[wA17BIC]) {
            b[i] = bWpHVYrNQeUK (wA17BIC, zQvxOiEG1mg, h3ENurwQM, b) + 1;
            if (b[i] > max)
                max = b[i];
        };
    }
    b[i] = max;
    return max;
}

main () {
    int max = 0, i;
    int h3ENurwQM [25], b [25];
    int zQvxOiEG1mg;
    scanf ("%d", &zQvxOiEG1mg);
    for (i = 0; i < zQvxOiEG1mg; i = i + 1)
        scanf ("%d", &h3ENurwQM[i]);
    for (i = 0; i < zQvxOiEG1mg; i = i + 1)
        b[i] = bWpHVYrNQeUK (i, zQvxOiEG1mg, h3ENurwQM, b);
    for (i = 0; i < zQvxOiEG1mg; i = i + 1) {
        if (b[i] > max)
            max = b[i];
    }
    printf ("%d", max);
}

