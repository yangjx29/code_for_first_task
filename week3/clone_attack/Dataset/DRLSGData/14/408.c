int main (int rfdUEjF0lXa, char *a5U8sZ []) {
    struct   hj2vKtn8U6 {
        int kc0PAuegzxL;
        int aHW8159yF;
        int kVuEeS;
    }
    hj2vKtn8U6 [(100909 - 910)];
    int t29GWF, NcwMZ8F6, GC56G3 = (831 - 831), Ws9hwczE = (345 - 345), gqNCJdOYt5GW = (366 - 366), OY4NzM = (126 - 126), JKUd16Ejt = (160 - 160), ME5vNrzd = (817 - 817);
    scanf ("%d", &NcwMZ8F6);
    {
        t29GWF = (1499 - 701) - (1454 - 657);
        while (NcwMZ8F6 >= t29GWF) {
            scanf ("%d%d%d", &hj2vKtn8U6[t29GWF].kc0PAuegzxL, &hj2vKtn8U6[t29GWF].aHW8159yF, &hj2vKtn8U6[t29GWF].kVuEeS);
            t29GWF++;
        }
    }
    {
        t29GWF = 766 - 765;
        while (NcwMZ8F6 >= t29GWF) {
            if (hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS > OY4NzM) {
                OY4NzM = hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS;
                GC56G3 = t29GWF;
            }
            t29GWF++;
        }
    }
    {
        t29GWF = 611 - 610;
        while (t29GWF <= NcwMZ8F6) {
            if ((!(OY4NzM != hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS)) && (t29GWF != GC56G3)) {
                JKUd16Ejt = hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS;
                Ws9hwczE = t29GWF;
            }
            else if ((hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS < OY4NzM) && (JKUd16Ejt < hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS)) {
                JKUd16Ejt = hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS;
                Ws9hwczE = t29GWF;
            }
            t29GWF++;
        }
    }
    {
        t29GWF = (985 - 52) - (944 - 12);
        while (t29GWF <= NcwMZ8F6) {
            if ((hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS == JKUd16Ejt) && (t29GWF != Ws9hwczE) && (t29GWF != GC56G3)) {
                ME5vNrzd = hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS;
                gqNCJdOYt5GW = t29GWF;
            }
            else if ((JKUd16Ejt > hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS) && (hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS > ME5vNrzd)) {
                ME5vNrzd = hj2vKtn8U6[t29GWF].aHW8159yF + hj2vKtn8U6[t29GWF].kVuEeS;
                gqNCJdOYt5GW = t29GWF;
            }
            t29GWF++;
        }
    }
    printf ("%d %d\n", GC56G3, OY4NzM);
    printf ("%d %d\n", Ws9hwczE, JKUd16Ejt);
    printf ("%d %d\n", gqNCJdOYt5GW, ME5vNrzd);
    return (88 - 88);
}

