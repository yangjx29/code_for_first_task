int main () {
    int JIDp83;
    int oF0vxX5S8;
    int wxet5ERz3;
    int zVRPiGpqvB;
    int t6WxhosQqY;
    int bSb2puUO [(609 - 508)] [(922 - 821)] = {(775 - 775)};
    int Vl2QGT;
    int qGSVxd;
    scanf ("%d", &zVRPiGpqvB);
    for (qGSVxd = (51 - 50); qGSVxd <= zVRPiGpqvB; qGSVxd++) {
        oF0vxX5S8 = (224 - 224);
        wxet5ERz3 = zVRPiGpqvB;
        for (JIDp83 = (41 - 40); JIDp83 <= zVRPiGpqvB; JIDp83++)
            for (t6WxhosQqY = (576 - 575); t6WxhosQqY <= zVRPiGpqvB; t6WxhosQqY++)
                scanf ("%d", &bSb2puUO[JIDp83][t6WxhosQqY]);
        for (wxet5ERz3 = zVRPiGpqvB; (569 - 568) < wxet5ERz3; wxet5ERz3--) {
            for (JIDp83 = (644 - 643); JIDp83 <= wxet5ERz3; JIDp83++) {
                Vl2QGT = (1186 - 186);
                for (t6WxhosQqY = (260 - 259); wxet5ERz3 >= t6WxhosQqY; t6WxhosQqY++) {
                    if (bSb2puUO[JIDp83][t6WxhosQqY] < Vl2QGT)
                        Vl2QGT = bSb2puUO[JIDp83][t6WxhosQqY];
                }
                for (t6WxhosQqY = (420 - 419); wxet5ERz3 >= t6WxhosQqY; t6WxhosQqY++)
                    if (bSb2puUO[JIDp83][t6WxhosQqY] != (303 - 303))
                        bSb2puUO[JIDp83][t6WxhosQqY] = bSb2puUO[JIDp83][t6WxhosQqY] - Vl2QGT;
            }
            for (JIDp83 = (75 - 74); wxet5ERz3 >= JIDp83; JIDp83++) {
                Vl2QGT = (1306 - 306);
                for (t6WxhosQqY = (685 - 684); t6WxhosQqY <= wxet5ERz3; t6WxhosQqY++) {
                    if (bSb2puUO[t6WxhosQqY][JIDp83] < Vl2QGT)
                        Vl2QGT = bSb2puUO[t6WxhosQqY][JIDp83];
                }
                for (t6WxhosQqY = (688 - 687); t6WxhosQqY <= wxet5ERz3; t6WxhosQqY++)
                    if (bSb2puUO[t6WxhosQqY][JIDp83] != (540 - 540))
                        bSb2puUO[t6WxhosQqY][JIDp83] = bSb2puUO[t6WxhosQqY][JIDp83] - Vl2QGT;
            }
            oF0vxX5S8 = oF0vxX5S8 + bSb2puUO[(915 - 913)][(468 - 466)];
            for (JIDp83 = (915 - 914); JIDp83 <= wxet5ERz3; JIDp83++)
                for (t6WxhosQqY = (394 - 392); t6WxhosQqY <= wxet5ERz3; t6WxhosQqY++)
                    bSb2puUO[JIDp83][t6WxhosQqY] = bSb2puUO[JIDp83][t6WxhosQqY + (178 - 177)];
            for (JIDp83 = 2; JIDp83 <= wxet5ERz3; JIDp83++)
                for (t6WxhosQqY = 1; t6WxhosQqY <= wxet5ERz3; t6WxhosQqY++)
                    bSb2puUO[JIDp83][t6WxhosQqY] = bSb2puUO[JIDp83 +1][t6WxhosQqY];
        }
        printf ("%d\n", oF0vxX5S8);
    }
    return (258 - 258);
}

