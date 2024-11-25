int main () {
    int hYNV43jAv1, XyxfM5p, v5vfLtd = 0, tNXmRQGEwZj = 0;
    int V9agmGt4r7 [200], pMsDJkn [200];
    scanf ("%d", &hYNV43jAv1);
    {
        XyxfM5p = 0;
        for (; XyxfM5p < hYNV43jAv1;) {
            scanf ("%d %d", &(V9agmGt4r7[XyxfM5p]), &(pMsDJkn[XyxfM5p]));
            XyxfM5p = XyxfM5p +1;
        }
    }
    {
        XyxfM5p = 0;
        for (; XyxfM5p < hYNV43jAv1;) {
            if (V9agmGt4r7[XyxfM5p] == 0 && pMsDJkn[XyxfM5p] == 1) {
                v5vfLtd = v5vfLtd + 1;
            }
            else {
                if (V9agmGt4r7[XyxfM5p] == 1 && pMsDJkn[XyxfM5p] == 2) {
                    v5vfLtd = v5vfLtd + 1;
                }
                else {
                    if (V9agmGt4r7[XyxfM5p] == 2 && pMsDJkn[XyxfM5p] == 0) {
                        v5vfLtd = v5vfLtd + 1;
                    }
                    else
                        ;
                }
            }
            if (V9agmGt4r7[XyxfM5p] == 1 && pMsDJkn[XyxfM5p] == 0) {
                tNXmRQGEwZj = tNXmRQGEwZj + 1;
            }
            else {
                if (V9agmGt4r7[XyxfM5p] == 2 && pMsDJkn[XyxfM5p] == 1) {
                    tNXmRQGEwZj = tNXmRQGEwZj + 1;
                }
                else {
                    if (V9agmGt4r7[XyxfM5p] == 0 && pMsDJkn[XyxfM5p] == 2) {
                        tNXmRQGEwZj = tNXmRQGEwZj + 1;
                    }
                    else
                        ;
                }
            }
            XyxfM5p = XyxfM5p +1;
        }
    }
    if (v5vfLtd > tNXmRQGEwZj) {
    }
    if (v5vfLtd < tNXmRQGEwZj) {
    }
    if (v5vfLtd == tNXmRQGEwZj) {
    }
    return 0;
}

