struct   student {
    long  number;
    int chinese;
    int NazNVk5UPTR;
    int S5ymRYth0Tsq;
    struct   student *Z4A6SgCdy;
    struct   student *previous;
};
struct   student *yjSbqN8Ao3x (long  ILIG6vbJj) {
    struct   student *qvJAPWHYEdC;
    struct   student *jSm4zWk;
    struct   student *nX8OCaiZG5z;
    int rh8CM2;
    jSm4zWk = (struct   student *) malloc (len);
    qvJAPWHYEdC = null;
    scanf ("%d %d %d", &jSm4zWk->number, &jSm4zWk->chinese, &jSm4zWk->NazNVk5UPTR);
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
    jSm4zWk->S5ymRYth0Tsq = jSm4zWk->chinese + jSm4zWk->NazNVk5UPTR;
    jSm4zWk->Z4A6SgCdy = null;
    jSm4zWk->previous = null;
    qvJAPWHYEdC = jSm4zWk;
    nX8OCaiZG5z = jSm4zWk;
    {
        rh8CM2 = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ILIG6vbJj >= rh8CM2) {
            rh8CM2++;
            jSm4zWk = (struct   student *) malloc (len);
            scanf ("%d %d %d", &jSm4zWk->number, &jSm4zWk->chinese, &jSm4zWk->NazNVk5UPTR);
            jSm4zWk->S5ymRYth0Tsq = jSm4zWk->chinese + jSm4zWk->NazNVk5UPTR;
            jSm4zWk->Z4A6SgCdy = null;
            jSm4zWk->previous = nX8OCaiZG5z;
            nX8OCaiZG5z->Z4A6SgCdy = jSm4zWk;
            nX8OCaiZG5z = jSm4zWk;
        };
    }
    return (qvJAPWHYEdC);
}

struct   student *WaXTAd0GCB (struct   student *qvJAPWHYEdC) {
    struct   student *jsX3VlcLUW, *p;
    jsX3VlcLUW = qvJAPWHYEdC;
    for (p = qvJAPWHYEdC; !(null == p); p = p->Z4A6SgCdy)
        if (p->S5ymRYth0Tsq > jsX3VlcLUW->S5ymRYth0Tsq)
            jsX3VlcLUW = p;
    printf ("%d %d\n", jsX3VlcLUW->number, jsX3VlcLUW->S5ymRYth0Tsq);
    if (jsX3VlcLUW == qvJAPWHYEdC)
        qvJAPWHYEdC = jsX3VlcLUW->Z4A6SgCdy;
    else
        jsX3VlcLUW->previous->Z4A6SgCdy = jsX3VlcLUW->Z4A6SgCdy;
    return (qvJAPWHYEdC);
}

void  main () {
    struct   student *qvJAPWHYEdC;
    WaXTAd0GCB (qvJAPWHYEdC);
    WaXTAd0GCB (qvJAPWHYEdC);
    WaXTAd0GCB (qvJAPWHYEdC);
    long  ILIG6vbJj;
    scanf ("%d", &ILIG6vbJj);
    qvJAPWHYEdC = yjSbqN8Ao3x (ILIG6vbJj);
}

