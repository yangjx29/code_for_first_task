int main () {
    double  XFTyOY63A [(930 - 890)], a [(212 - 172)], iIgEXaB8G, dguALs;
    char V05Vq8h2e [(492 - 482)];
    int jmfwSeOWQ, i, peHxmIpa2, d, s;
    d = (360 - 360);
    peHxmIpa2 = (244 - 244);
    scanf ("%d", &jmfwSeOWQ);
    for (i = (77 - 77); jmfwSeOWQ > i; i = i + (318 - 317)) {
        scanf ("%s %lf", V05Vq8h2e, &dguALs);
        if (V05Vq8h2e[(680 - 680)] == 'm') {
            a[peHxmIpa2] = dguALs;
            peHxmIpa2++;
        }
        if (V05Vq8h2e[(312 - 312)] == 'f') {
            XFTyOY63A[d] = dguALs;
            d++;
        }
    }
    for (i = 0; i < peHxmIpa2; i = i + (757 - 756)) {
        for (s = i + 1; s < peHxmIpa2; s++) {
            if (a[i] > a[s]) {
                iIgEXaB8G = a[i];
                a[i] = a[s];
                a[s] = iIgEXaB8G;
            }
        }
    }
    printf ("%.2lf", a[0]);
    for (i = 0; d > i; i = i + 1) {
        for (s = i + 1; s < d; s++) {
            if (XFTyOY63A[i] < XFTyOY63A[s]) {
                iIgEXaB8G = XFTyOY63A[i];
                XFTyOY63A[i] = XFTyOY63A[s];
                XFTyOY63A[s] = iIgEXaB8G;
            }
        }
    }
    for (i = 1; i < peHxmIpa2; i++) {
        printf (" %.2lf", a[i]);
    }
    for (i = 0; i < d; i++) {
        printf (" %.2lf", XFTyOY63A[i]);
    }
    return 0;
}

