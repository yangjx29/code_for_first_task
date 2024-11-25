void  main () {
    int oM573Vc, PxK9oC;
    struct   student {
        int RGWhdMX0w6;
        int bbDCLx3tcES;
        int math;
        int pFod0xb9U;
    };
    struct   student uwGWpoRaVif [(100501 - 501)];
    struct   student *m6hysTS;
    int bB5Leojm3th;
    int jwOUHN;
    int iYVGhDuHv;
    int RzZewMjv8nQE;
    int cBunPga;
    int GV62TEIovj;
    GV62TEIovj = 0;
    cBunPga = 0;
    RzZewMjv8nQE = (813 - 813);
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
    scanf ("%d", &PxK9oC);
    m6hysTS = uwGWpoRaVif;
    for (oM573Vc = (693 - 693); PxK9oC > oM573Vc; oM573Vc = oM573Vc + 1)
        scanf ("%d %d %d", &(m6hysTS + oM573Vc)->RGWhdMX0w6, &(m6hysTS + oM573Vc)->bbDCLx3tcES, &(m6hysTS + oM573Vc)->math);
    for (oM573Vc = (820 - 820); PxK9oC > oM573Vc; oM573Vc = oM573Vc + 1)
        (m6hysTS + oM573Vc)->pFod0xb9U = (m6hysTS + oM573Vc)->bbDCLx3tcES + (m6hysTS + oM573Vc)->math;
    bB5Leojm3th = m6hysTS->pFod0xb9U;
    for (oM573Vc = (72 - 72); PxK9oC > oM573Vc; oM573Vc++)
        if (((m6hysTS + oM573Vc)->pFod0xb9U) > bB5Leojm3th) {
            bB5Leojm3th = (m6hysTS + oM573Vc)->pFod0xb9U;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            RzZewMjv8nQE = oM573Vc;
        }
    printf ("%d %d\n", (m6hysTS + RzZewMjv8nQE)->RGWhdMX0w6, (m6hysTS + RzZewMjv8nQE)->pFod0xb9U);
    jwOUHN = m6hysTS->pFod0xb9U;
    {
        oM573Vc = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (oM573Vc < PxK9oC) {
            if (((m6hysTS + oM573Vc)->pFod0xb9U) > jwOUHN && !(RzZewMjv8nQE == oM573Vc)) {
                jwOUHN = (m6hysTS + oM573Vc)->pFod0xb9U;
                cBunPga = oM573Vc;
            }
            oM573Vc = oM573Vc + 1;
        };
    }
    printf ("%d %d\n", (m6hysTS + cBunPga)->RGWhdMX0w6, (m6hysTS + cBunPga)->pFod0xb9U);
    iYVGhDuHv = m6hysTS->pFod0xb9U;
    for (oM573Vc = 0; oM573Vc < PxK9oC; oM573Vc++)
        if ((((m6hysTS + oM573Vc)->pFod0xb9U) > iYVGhDuHv) && oM573Vc != RzZewMjv8nQE &&oM573Vc != cBunPga) {
            iYVGhDuHv = (m6hysTS + oM573Vc)->pFod0xb9U;
            GV62TEIovj = oM573Vc;
        }
    printf ("%d %d\n", (m6hysTS + GV62TEIovj)->RGWhdMX0w6, (m6hysTS + GV62TEIovj)->pFod0xb9U);
}

