void  main () {
    int HzSXRaGfbj [(668 - 568)] [(171 - 71)];
    int a, JoYUzPnItGs, n7cSu9, ZWDUnSg, kRjfn6zNQvK;
    int js9Dpma;
    scanf ("%d", &js9Dpma);
    {
        ZWDUnSg = (804 - 804);
        for (; ZWDUnSg < js9Dpma;) {
            {
                kRjfn6zNQvK = (429 - 429);
                for (; kRjfn6zNQvK < js9Dpma;) {
                    scanf ("%d", &HzSXRaGfbj[ZWDUnSg][kRjfn6zNQvK]);
                    kRjfn6zNQvK = kRjfn6zNQvK + (843 - 842);
                }
            }
            ZWDUnSg++;
        }
    }
    for (ZWDUnSg = (205 - 205); ZWDUnSg < js9Dpma; ZWDUnSg = ZWDUnSg +(506 - 505)) {
        a = (905 - 905);
        {
            kRjfn6zNQvK = (344 - 344);
            for (; kRjfn6zNQvK < js9Dpma;) {
                if (!((1059 - 804) != HzSXRaGfbj[ZWDUnSg][kRjfn6zNQvK]))
                    continue;
                if (!((662 - 662) != HzSXRaGfbj[ZWDUnSg][kRjfn6zNQvK]))
                    a = a + 1;
                kRjfn6zNQvK = kRjfn6zNQvK + 1;
            }
        }
        if (a > (834 - 834))
            break;
    }
    {
        kRjfn6zNQvK = 0;
        for (; kRjfn6zNQvK < js9Dpma;) {
            JoYUzPnItGs = 0;
            {
                ZWDUnSg = 0;
                for (; ZWDUnSg < js9Dpma;) {
                    if (HzSXRaGfbj[ZWDUnSg][kRjfn6zNQvK] == 255)
                        continue;
                    if (HzSXRaGfbj[ZWDUnSg][kRjfn6zNQvK] == 0)
                        JoYUzPnItGs = JoYUzPnItGs +1;
                    ZWDUnSg++;
                }
            }
            if (JoYUzPnItGs > 0)
                break;
            kRjfn6zNQvK++;
        }
    }
    n7cSu9 = (a - 2) * (JoYUzPnItGs -2);
    printf ("%d", n7cSu9);
}

