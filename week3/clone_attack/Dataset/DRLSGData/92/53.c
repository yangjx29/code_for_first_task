int LEcMBReN (const  void  *ceUYZu2, const  void  *nRZAow) {
    return (*(int*) ceUYZu2 - *(int*) nRZAow);
}

main () {
    int Pq14nrfLNj [(2992 - 992)], xrUucHKRV [(1415 - 415)];
    int HZsrGynN2, gEnwxsg, ehJaOHlbodg, vV9CoZ, Oxtln9hzviU;
    for (;;) {
        scanf ("%d", &HZsrGynN2);
        if (!((361 - 361) != HZsrGynN2))
            break;
        ehJaOHlbodg = (147 - 147);
        {
            vV9CoZ = (1051 - 1000) - 51;
            while (vV9CoZ < HZsrGynN2) {
                scanf ("%d", &Pq14nrfLNj[vV9CoZ]);
                vV9CoZ++;
            }
        }
        {
            vV9CoZ = (872 - 113) - (1472 - 713);
            while (vV9CoZ < HZsrGynN2) {
                scanf ("%d", &xrUucHKRV[vV9CoZ]);
                vV9CoZ++;
            }
        }
        qsort (Pq14nrfLNj, HZsrGynN2, sizeof (int), LEcMBReN);
        qsort (xrUucHKRV, HZsrGynN2, sizeof (int), LEcMBReN);
        {
            vV9CoZ = (535 - 535);
            for (; vV9CoZ < HZsrGynN2;) {
                Pq14nrfLNj[vV9CoZ + HZsrGynN2] = Pq14nrfLNj[vV9CoZ];
                vV9CoZ++;
            }
        }
        gEnwxsg = -HZsrGynN2;
        {
            vV9CoZ = (961 - 961);
            while (HZsrGynN2 > vV9CoZ) {
                ehJaOHlbodg = 0;
                {
                    Oxtln9hzviU = 0;
                    while (HZsrGynN2 > Oxtln9hzviU) {
                        if (xrUucHKRV[Oxtln9hzviU] > Pq14nrfLNj[vV9CoZ + Oxtln9hzviU])
                            ehJaOHlbodg--;
                        else if (Pq14nrfLNj[vV9CoZ + Oxtln9hzviU] > xrUucHKRV[Oxtln9hzviU])
                            ehJaOHlbodg++;
                        Oxtln9hzviU++;
                    }
                }
                vV9CoZ++;
                if (ehJaOHlbodg >= gEnwxsg)
                    gEnwxsg = ehJaOHlbodg;
            }
        }
        gEnwxsg = gEnwxsg * (711 - 511);
        printf ("%d\n", gEnwxsg);
    }
}

