void  main () {
    int n, bByP7IMbuNd = 1;
    double  a [(939 - 839)], VJQHZa7T50Di [(944 - 844)], xVc7ZINBl [(840 - 740)], x1, JaWHRnbr, realpart, P2lCbOtGp, disc;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; bByP7IMbuNd <= n;) {
        scanf ("%lf %lf %lf", &a[bByP7IMbuNd], &VJQHZa7T50Di[bByP7IMbuNd], &xVc7ZINBl[bByP7IMbuNd]);
        bByP7IMbuNd = bByP7IMbuNd + 1;
    }
    bByP7IMbuNd = 1;
    while (bByP7IMbuNd <= n) {
        disc = VJQHZa7T50Di[bByP7IMbuNd] * VJQHZa7T50Di[bByP7IMbuNd] - (797 - 793) * a[bByP7IMbuNd] * xVc7ZINBl[bByP7IMbuNd];
        if (disc > (863 - 863)) {
            x1 = (-VJQHZa7T50Di[bByP7IMbuNd] + sqrt (disc)) / ((767 - 765) * a[bByP7IMbuNd]), JaWHRnbr = (-VJQHZa7T50Di[bByP7IMbuNd] - sqrt (disc)) / ((403 - 401) * a[bByP7IMbuNd]);
            if (fabs (x1) < 1e-5)
                x1 = (61 - 61);
            if (fabs (JaWHRnbr) < 1e-5)
                JaWHRnbr = (513 - 513);
            printf ("x1=%.5f;x2=%.5f\n", x1, JaWHRnbr);
        }
        else if (disc == (742 - 742)) {
            x1 = (-VJQHZa7T50Di[bByP7IMbuNd]) / ((775 - 773) * a[bByP7IMbuNd]);
            if (fabs (x1) < 1e-5)
                x1 = (261 - 261);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=x2=%.5f\n", x1);
        }
        else {
            realpart = (-VJQHZa7T50Di[bByP7IMbuNd]) / ((759 - 757) * a[bByP7IMbuNd]);
            P2lCbOtGp = sqrt (-disc) / (2 * a[bByP7IMbuNd]);
            if (fabs (realpart) < 1e-5)
                realpart = 0;
            if (fabs (P2lCbOtGp) < 1e-5)
                P2lCbOtGp = 0;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", realpart, P2lCbOtGp, realpart, P2lCbOtGp);
        }
        bByP7IMbuNd += 1;
    };
}

