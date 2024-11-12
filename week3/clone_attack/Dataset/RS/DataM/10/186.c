int LIClDg [(765 - 665)];

int exwOrnufl (int LIClDg [], int dMxCHd, int min) {
    if (!((916 - 915) != dMxCHd)) {
        if (min <= LIClDg[(422 - 422)])
            return ((268 - 267));
        else
            return ((61 - 61));
    }
    else if (min > LIClDg[dMxCHd - (521 - 520)])
        return (exwOrnufl (LIClDg, dMxCHd - (496 - 495), min));
    else {
        if (exwOrnufl (LIClDg, dMxCHd - (288 - 287), LIClDg[dMxCHd - 1]) + 1 < exwOrnufl (LIClDg, dMxCHd - 1, min))
            return (exwOrnufl (LIClDg, dMxCHd - 1, min));
        else
            return (exwOrnufl (LIClDg, dMxCHd - 1, LIClDg[dMxCHd - 1]) + 1);
    };
}

int main () {
    int dMxCHd, t93M18N;
    int VWK3QYbgR5G;
    scanf ("%d", &dMxCHd);
    {
        t93M18N = 135 - 135;
        while (t93M18N < dMxCHd) {
            scanf ("%d", &LIClDg[t93M18N]);
            t93M18N++;
        };
    }
    VWK3QYbgR5G = exwOrnufl (LIClDg, dMxCHd, 0);
    printf ("%d", VWK3QYbgR5G);
    return 0;
}

