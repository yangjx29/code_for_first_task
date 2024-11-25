int main () {
    unsigned  int jHqtUy9ETf [(713 - 413)];
    float l4riLlg3Wz;
    int gEPwa7NSFY1q, i, liW5T9AJZk, qE2cDwzPYR = (657 - 657), b1 = (126 - 126), b2 = (791 - 791);
    liW5T9AJZk = (765 - 765);
    scanf ("%d", &gEPwa7NSFY1q);
    for (i = (286 - 286); gEPwa7NSFY1q > i; i++) {
        scanf ("%d", &jHqtUy9ETf[i]);
        qE2cDwzPYR = qE2cDwzPYR + jHqtUy9ETf[i];
    }
    l4riLlg3Wz = (float) qE2cDwzPYR / gEPwa7NSFY1q;
    {
        i = 886 - 886;
        while (gEPwa7NSFY1q > i) {
            if (fabs (jHqtUy9ETf[i] - l4riLlg3Wz) >= liW5T9AJZk) {
                if (jHqtUy9ETf[i] < l4riLlg3Wz) {
                    liW5T9AJZk = fabs (jHqtUy9ETf[i] - l4riLlg3Wz);
                    b1 = i;
                }
                else {
                    liW5T9AJZk = fabs (jHqtUy9ETf[i] - l4riLlg3Wz);
                    b2 = i;
                };
            }
            i++;
        };
    }
    if ((jHqtUy9ETf[b2] - l4riLlg3Wz) > (l4riLlg3Wz - jHqtUy9ETf[b1]))
        printf ("%d", jHqtUy9ETf[b2]);
    else if ((jHqtUy9ETf[b2] - l4riLlg3Wz) < (l4riLlg3Wz - jHqtUy9ETf[b1]))
        printf ("%d", jHqtUy9ETf[b1]);
    else
        printf ("%d,%d", jHqtUy9ETf[b1], jHqtUy9ETf[b2]);
    return 0;
}

