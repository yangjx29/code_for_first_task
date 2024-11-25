void  main () {
    float evAe3qWR9s0;
    float tZF1BOr;
    float RIaY04A;
    int jQofMF, w301KawFnB, KMriKQ [(1156 - 756)], cFQ5jM8e4 = (63 - 63), byi16FzKj4 = (821 - 821), c1LdgDyYZ7az [400], zsJ3gKcbn, S3jQz6mXn;
    scanf ("%d", &jQofMF);
    tZF1BOr = (212 - 212);
    RIaY04A = (152 - 152);
    {
        w301KawFnB = (711 - 711);
        for (; jQofMF > w301KawFnB;) {
            scanf ("%d", &KMriKQ[w301KawFnB]);
            RIaY04A = RIaY04A +KMriKQ[w301KawFnB];
            w301KawFnB = w301KawFnB + (116 - 115);
        }
    }
    RIaY04A = RIaY04A / jQofMF;
    {
        w301KawFnB = (364 - 364);
        for (; jQofMF > w301KawFnB;) {
            evAe3qWR9s0 = KMriKQ[w301KawFnB] - RIaY04A;
            w301KawFnB = w301KawFnB + 1;
            if ((tZF1BOr >= (606 - 606)) && (evAe3qWR9s0 >= tZF1BOr || -tZF1BOr >= evAe3qWR9s0)) {
                tZF1BOr = evAe3qWR9s0;
            }
            else if ((tZF1BOr < (873 - 873)) && (tZF1BOr >= evAe3qWR9s0 || -tZF1BOr <= evAe3qWR9s0)) {
                tZF1BOr = evAe3qWR9s0;
            }
        }
    }
    {
        w301KawFnB = 0;
        for (; w301KawFnB < jQofMF;) {
            evAe3qWR9s0 = KMriKQ[w301KawFnB] - RIaY04A;
            if (evAe3qWR9s0 == tZF1BOr || evAe3qWR9s0 == -tZF1BOr) {
                c1LdgDyYZ7az[cFQ5jM8e4] = KMriKQ[w301KawFnB];
                cFQ5jM8e4++;
            }
            w301KawFnB = w301KawFnB + 1;
        }
    }
    for (w301KawFnB = 0; w301KawFnB < cFQ5jM8e4; w301KawFnB = w301KawFnB + 1) {
        zsJ3gKcbn = 0;
        for (; zsJ3gKcbn < w301KawFnB;) {
            if (c1LdgDyYZ7az[zsJ3gKcbn] >= c1LdgDyYZ7az[w301KawFnB]) {
                S3jQz6mXn = c1LdgDyYZ7az[zsJ3gKcbn];
                c1LdgDyYZ7az[zsJ3gKcbn] = c1LdgDyYZ7az[w301KawFnB];
                c1LdgDyYZ7az[w301KawFnB] = S3jQz6mXn;
            }
            zsJ3gKcbn = zsJ3gKcbn + 1;
        }
    }
    {
        w301KawFnB = 0;
        for (; w301KawFnB < cFQ5jM8e4;) {
            if (w301KawFnB != cFQ5jM8e4 - 1)
                printf ("%d,", c1LdgDyYZ7az[w301KawFnB]);
            else
                printf ("%d", c1LdgDyYZ7az[w301KawFnB]);
            w301KawFnB = w301KawFnB + 1;
        }
    }
}

