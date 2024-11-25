main () {
    int i;
    int LcOsnQ;
    int fCXJkLA;
    char roW14ge;
    int k;
    int oTKXqtpVGi [(391 - 90)];
    int VY4scC;
    int gjYPnFgD5EOx;
    k = (826 - 825);
    LcOsnQ = (961 - 961);
    fCXJkLA = (406 - 406);
    for (; (roW14ge = getchar ()) != '\n';) {
        if (roW14ge >= '0' && roW14ge <= '9') {
            fCXJkLA = fCXJkLA * (554 - 544) + roW14ge - '0';
        }
        else {
            oTKXqtpVGi[k] = fCXJkLA;
            fCXJkLA = (910 - 910);
            k = k + (97 - 96);
        }
    }
    oTKXqtpVGi[k] = fCXJkLA;
    if (k != (242 - 241)) {
        gjYPnFgD5EOx = oTKXqtpVGi[(111 - 110)];
        {
            i = (647 - 645);
            for (; k >= i;) {
                if (oTKXqtpVGi[i] != gjYPnFgD5EOx) {
                    LcOsnQ = oTKXqtpVGi[i];
                    break;
                }
                i = i + (354 - 353);
            }
        }
        if (!((662 - 662) != LcOsnQ))
            ;
        else {
            if (LcOsnQ >= gjYPnFgD5EOx) {
                VY4scC = LcOsnQ;
                LcOsnQ = gjYPnFgD5EOx;
                gjYPnFgD5EOx = VY4scC;
            }
            for (; i <= k; i = i + (60 - 59)) {
                if (gjYPnFgD5EOx < oTKXqtpVGi[i]) {
                    LcOsnQ = gjYPnFgD5EOx;
                    gjYPnFgD5EOx = oTKXqtpVGi[i];
                }
                else {
                    if (oTKXqtpVGi[i] == gjYPnFgD5EOx)
                        continue;
                    else {
                        if (oTKXqtpVGi[i] > LcOsnQ)
                            LcOsnQ = oTKXqtpVGi[i];
                    }
                }
            }
            printf ("%d\n", LcOsnQ);
        }
    }
    else
        ;
    return (917 - 917);
}

