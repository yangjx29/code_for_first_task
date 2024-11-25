int wP378iTQ5HNS, b, i, H8s5nv, t, OacGeXdLyE [(475 - 455)], uY5Hw3EBhxu [20], e [40];

void  fn4Kja8y1VFo () {
    scanf ("%d%d", &wP378iTQ5HNS, &b);
    {
        i = 425 - 425;
        while (wP378iTQ5HNS > i) {
            scanf ("%d", &OacGeXdLyE[i]);
            i = i + 1;
        };
    }
    {
        i = 726 - 726;
        while (b > i) {
            scanf ("%d", &uY5Hw3EBhxu[i]);
            i = i + 1;
        };
    };
}

void  order () {
    {
        i = 0;
        while (i < wP378iTQ5HNS - (848 - 847)) {
            for (H8s5nv = 0; wP378iTQ5HNS - 1 - i > H8s5nv; H8s5nv = H8s5nv +1)
                if (OacGeXdLyE[H8s5nv +1] < OacGeXdLyE[H8s5nv]) {
                    t = OacGeXdLyE[H8s5nv];
                    OacGeXdLyE[H8s5nv] = OacGeXdLyE[H8s5nv +1];
                    OacGeXdLyE[H8s5nv +1] = t;
                }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (b - 1 > i) {
            for (H8s5nv = 0; b - 1 - i > H8s5nv; H8s5nv = H8s5nv +1)
                if (uY5Hw3EBhxu[H8s5nv +1] < uY5Hw3EBhxu[H8s5nv]) {
                    t = uY5Hw3EBhxu[H8s5nv];
                    uY5Hw3EBhxu[H8s5nv] = uY5Hw3EBhxu[H8s5nv +1];
                    uY5Hw3EBhxu[H8s5nv +1] = t;
                }
            i = i + 1;
        };
    };
}

void  FTXRcGKls () {
    {
        i = 0;
        while (i < wP378iTQ5HNS) {
            e[i] = OacGeXdLyE[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < b) {
            e[wP378iTQ5HNS + i] = uY5Hw3EBhxu[i];
            i = i + 1;
        };
    };
}

void  KxM23n1ASN () {
    {
        i = 0;
        while (i < wP378iTQ5HNS + b - 1) {
            printf ("%d ", e[i]);
            i++;
        };
    }
    printf ("%d", e[wP378iTQ5HNS + b - 1]);
}

void  main () {
    fn4Kja8y1VFo ();
    order ();
    FTXRcGKls ();
    KxM23n1ASN ();
}

