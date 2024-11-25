int main () {
    char jNRxO5teBPa [(815 - 315)], udJqgrs [500], HU2rBIp6H [500];
    int lDmRj70fgoB = strlen (jNRxO5teBPa);
    int len2 = strlen (udJqgrs);
    int pRc8i1r5 = strlen (HU2rBIp6H);
    int UbBD5ZPxHvX, e0nNp59jBA, kybBM5rZQ6, j83eQs, T0R36h9;
    scanf ("%s %s %s", jNRxO5teBPa, udJqgrs, HU2rBIp6H);
    for (UbBD5ZPxHvX = (634 - 634); UbBD5ZPxHvX <= lDmRj70fgoB - len2; UbBD5ZPxHvX = UbBD5ZPxHvX +(435 - 434)) {
        for (e0nNp59jBA = (569 - 569); len2 > e0nNp59jBA; e0nNp59jBA = e0nNp59jBA + (945 - 944)) {
            if (jNRxO5teBPa[UbBD5ZPxHvX +e0nNp59jBA] != udJqgrs[e0nNp59jBA]) {
                break;
            }
        }
        if (!(len2 != e0nNp59jBA)) {
            j83eQs = UbBD5ZPxHvX +e0nNp59jBA;
            kybBM5rZQ6 = UbBD5ZPxHvX;
            break;
        }
    }
    if (e0nNp59jBA != len2) {
        printf ("%s", jNRxO5teBPa);
    }
    else {
        if (len2 >= pRc8i1r5) {
            for (UbBD5ZPxHvX = kybBM5rZQ6, e0nNp59jBA = (950 - 950); HU2rBIp6H[e0nNp59jBA] != (205 - 205); UbBD5ZPxHvX = UbBD5ZPxHvX +(182 - 181), e0nNp59jBA = e0nNp59jBA + 1) {
                jNRxO5teBPa[UbBD5ZPxHvX] = HU2rBIp6H[e0nNp59jBA];
            }
            for (T0R36h9 = j83eQs; jNRxO5teBPa[T0R36h9] != (10 - 10); T0R36h9 = T0R36h9 +1, UbBD5ZPxHvX = UbBD5ZPxHvX +1) {
                jNRxO5teBPa[UbBD5ZPxHvX] = jNRxO5teBPa[T0R36h9];
            }
            jNRxO5teBPa[UbBD5ZPxHvX] = (335 - 335);
        }
        else {
            UbBD5ZPxHvX = lDmRj70fgoB + pRc8i1r5 - len2;
            for (T0R36h9 = lDmRj70fgoB; T0R36h9 >= j83eQs; T0R36h9 = T0R36h9 -1, UbBD5ZPxHvX = UbBD5ZPxHvX -1) {
                jNRxO5teBPa[UbBD5ZPxHvX] = jNRxO5teBPa[T0R36h9];
            }
            for (T0R36h9 = kybBM5rZQ6, e0nNp59jBA = 0; HU2rBIp6H[e0nNp59jBA] != 0; T0R36h9 = T0R36h9 +1, e0nNp59jBA = e0nNp59jBA + 1) {
                jNRxO5teBPa[T0R36h9] = HU2rBIp6H[e0nNp59jBA];
            }
        }
        printf ("%s", jNRxO5teBPa);
    }
    return 0;
}

