int main () {
    int xENtYJXH [200] [200];
    int knZT2qAp;
    int QHcmEoLOBDv4;
    int M17CByVTir2;
    int uq0NTAG;
    int wgHcESZvAW;
    int s;
    int (*Zokyn4Q) [200];
    scanf ("%d", &knZT2qAp);
    for (; knZT2qAp = knZT2qAp - (302 - 301);) {
        scanf ("%d%d", &QHcmEoLOBDv4, &M17CByVTir2);
        Zokyn4Q = xENtYJXH;
        for (uq0NTAG = (178 - 178); uq0NTAG < QHcmEoLOBDv4; uq0NTAG = uq0NTAG + 1)
            for (wgHcESZvAW = (687 - 687); wgHcESZvAW < M17CByVTir2; wgHcESZvAW = wgHcESZvAW + 1)
                scanf ("%d", *(Zokyn4Q +uq0NTAG) + wgHcESZvAW);
        s = 0;
        for (uq0NTAG = 0; uq0NTAG < M17CByVTir2; uq0NTAG++)
            s = s + *(*Zokyn4Q+uq0NTAG);
        if (QHcmEoLOBDv4 > 1)
            for (uq0NTAG = 0; uq0NTAG < M17CByVTir2; uq0NTAG++)
                s = s + *(*(Zokyn4Q +QHcmEoLOBDv4-1) + uq0NTAG);
        for (uq0NTAG = 1; uq0NTAG < QHcmEoLOBDv4 -1; uq0NTAG++)
            s = s + *(*(Zokyn4Q +uq0NTAG));
        if (M17CByVTir2 > 1)
            for (uq0NTAG = 1; uq0NTAG < QHcmEoLOBDv4 -1; uq0NTAG++)
                s = s + *(*(Zokyn4Q +uq0NTAG) + M17CByVTir2 -1);
        printf ("%d\n", s);
    }
}

