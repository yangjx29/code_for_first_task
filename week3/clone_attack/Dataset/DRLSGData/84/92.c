int main () {
    int rqcO9X4jNVTx, OHIDv6zG, STtgPynX7ExN [100], t3n0pcu, YDVxoJ;
    scanf ("%d\n", &rqcO9X4jNVTx);
    {
        OHIDv6zG = 0;
        while (rqcO9X4jNVTx - 2 >= OHIDv6zG) {
            scanf ("%d\n", &STtgPynX7ExN[OHIDv6zG]);
            OHIDv6zG = OHIDv6zG +1;
        }
    }
    scanf ("%d", &STtgPynX7ExN[rqcO9X4jNVTx - 1]);
    t3n0pcu = STtgPynX7ExN[0];
    for (OHIDv6zG = 0; rqcO9X4jNVTx - 1 >= OHIDv6zG; OHIDv6zG = OHIDv6zG +1) {
        if (t3n0pcu < STtgPynX7ExN[OHIDv6zG])
            t3n0pcu = STtgPynX7ExN[OHIDv6zG];
    }
    printf ("%d\n", t3n0pcu);
    YDVxoJ = STtgPynX7ExN[0];
    {
        OHIDv6zG = 0;
        while (OHIDv6zG <= rqcO9X4jNVTx - 1) {
            if (STtgPynX7ExN[OHIDv6zG] != t3n0pcu && STtgPynX7ExN[OHIDv6zG] > YDVxoJ)
                YDVxoJ = STtgPynX7ExN[OHIDv6zG];
            OHIDv6zG = OHIDv6zG +1;
        }
    }
    printf ("%d", YDVxoJ);
}

