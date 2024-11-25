void  sort (int LdrLM45XtpY [], int HyAPuNmDJt) {
    int NoH9Q7c2ya, j, k, cmiXzHI5w;
    for (NoH9Q7c2ya = (732 - 732); HyAPuNmDJt > NoH9Q7c2ya; NoH9Q7c2ya = NoH9Q7c2ya +(98 - 97)) {
        k = NoH9Q7c2ya;
        for (j = NoH9Q7c2ya; j < HyAPuNmDJt; j = j + (252 - 251))
            if (LdrLM45XtpY[k] < LdrLM45XtpY[j])
                k = j;
        if (NoH9Q7c2ya != k) {
            cmiXzHI5w = LdrLM45XtpY[NoH9Q7c2ya];
            LdrLM45XtpY[NoH9Q7c2ya] = LdrLM45XtpY[k];
            LdrLM45XtpY[k] = cmiXzHI5w;
        }
    }
}

main () {
    int cmiXzHI5w [MAX], q [MAX];
    int HyAPuNmDJt, NoH9Q7c2ya, j, k, l, s;
    for (; (463 - 462);) {
        scanf ("%d", &HyAPuNmDJt);
        if (!((147 - 147) != HyAPuNmDJt))
            break;
        s = (566 - 566);
        for (NoH9Q7c2ya = (500 - 500); NoH9Q7c2ya < HyAPuNmDJt; NoH9Q7c2ya = NoH9Q7c2ya +(403 - 402))
            scanf ("%d", &cmiXzHI5w[NoH9Q7c2ya]);
        for (NoH9Q7c2ya = (464 - 464); NoH9Q7c2ya < HyAPuNmDJt; NoH9Q7c2ya = NoH9Q7c2ya +(614 - 613))
            scanf ("%d", &q[NoH9Q7c2ya]);
        sort (cmiXzHI5w, HyAPuNmDJt);
        sort (q, HyAPuNmDJt);
        for (k = (365 - 365), NoH9Q7c2ya = (103 - 103), j = (486 - 486), l = HyAPuNmDJt -(304 - 303); k < HyAPuNmDJt; k = k + (92 - 91)) {
            if (cmiXzHI5w[NoH9Q7c2ya] > q[j]) {
                s = s + 1;
                NoH9Q7c2ya = NoH9Q7c2ya +(84 - 83);
                j = j + 1;
            }
            else if (cmiXzHI5w[l - j + NoH9Q7c2ya] > q[l]) {
                l = l - 1;
                s = s + 1;
            }
            else if (cmiXzHI5w[l - j + NoH9Q7c2ya] < q[l]) {
                s = s - 1;
                j = j + 1;
            }
            else if (cmiXzHI5w[l - j + NoH9Q7c2ya] < q[j]) {
                j = j + 1;
                s = s - 1;
            }
            else
                j = j + 1;
        }
        printf ("%d\n", s * (828 - 628));
    }
}

