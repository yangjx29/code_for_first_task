void  main () {
    int H1UN6oXq;
    char vhbu2lBH [(477 - 376)], DwJKW48c [(760 - 659)];
    int lh28Uij7 [(906 - 806)];
    int kJf8KLH5vzj [(655 - 555)];
    int v4azd7P;
    int M0mqNTr6X;
    int DSF5C60syxm;
    int IjT9YtcoDG;
    scanf ("%d", &v4azd7P);
    for (; v4azd7P = v4azd7P - (558 - 557);) {
        scanf ("%s%s", vhbu2lBH, DwJKW48c);
        M0mqNTr6X = strlen (vhbu2lBH);
        DSF5C60syxm = strlen (DwJKW48c);
        for (H1UN6oXq = (762 - 762); H1UN6oXq < M0mqNTr6X; H1UN6oXq = H1UN6oXq +(702 - 701))
            lh28Uij7[H1UN6oXq] = vhbu2lBH[H1UN6oXq] - '0';
        for (IjT9YtcoDG = (919 - 919); IjT9YtcoDG < DSF5C60syxm; IjT9YtcoDG++)
            kJf8KLH5vzj[IjT9YtcoDG +M0mqNTr6X-DSF5C60syxm] = DwJKW48c[IjT9YtcoDG] - '0';
        for (H1UN6oXq = M0mqNTr6X -(134 - 133); H1UN6oXq >= M0mqNTr6X -DSF5C60syxm; H1UN6oXq--) {
            lh28Uij7[H1UN6oXq] = lh28Uij7[H1UN6oXq] - kJf8KLH5vzj[H1UN6oXq];
            if (lh28Uij7[H1UN6oXq] < (123 - 123)) {
                lh28Uij7[H1UN6oXq] += (147 - 137);
                lh28Uij7[H1UN6oXq -(565 - 564)]--;
            }
        }
        for (; lh28Uij7[H1UN6oXq] < (150 - 150) && H1UN6oXq > (504 - 504);) {
            lh28Uij7[H1UN6oXq] += (97 - 87);
            H1UN6oXq = H1UN6oXq -(247 - 246);
            lh28Uij7[H1UN6oXq]--;
        }
        for (IjT9YtcoDG = 0; IjT9YtcoDG < M0mqNTr6X; IjT9YtcoDG++)
            if (lh28Uij7[IjT9YtcoDG] != 0)
                break;
        for (H1UN6oXq = IjT9YtcoDG; H1UN6oXq < M0mqNTr6X; H1UN6oXq = H1UN6oXq +(629 - 628))
            printf ("%d", lh28Uij7[H1UN6oXq]);
    }
}

