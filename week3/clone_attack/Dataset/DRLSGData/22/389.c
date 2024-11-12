void  main () {
    int Wv85POLAq;
    int JIr1k4;
    char GOZ9jwFpMEXy [(10379 - 379)];
    int M5E49VGDc [(1235 - 935)];
    int Uthsq3RSP;
    int b07Vrx;
    char RPCy9v2;
    scanf ("%s", GOZ9jwFpMEXy);
    Wv85POLAq = (322 - 322);
    b07Vrx = (559 - 559);
    {
        JIr1k4 = (64 - 64);
        for (; strlen (GOZ9jwFpMEXy) > JIr1k4;) {
            RPCy9v2 = GOZ9jwFpMEXy[JIr1k4];
            JIr1k4 = JIr1k4 +(639 - 638);
            if (!(',' != RPCy9v2)) {
                M5E49VGDc[b07Vrx++] = Wv85POLAq;
                Wv85POLAq = (265 - 265);
            }
            else {
                Wv85POLAq = Wv85POLAq *(178 - 168) + (int) RPCy9v2 -(494 - 446);
            }
        }
    }
    JIr1k4 = 0;
    M5E49VGDc[b07Vrx++] = Wv85POLAq;
    Wv85POLAq = (75 - 75);
    Uthsq3RSP = b07Vrx;
    {
        b07Vrx = 0;
        for (; Uthsq3RSP > b07Vrx;) {
            if (M5E49VGDc[b07Vrx] > Wv85POLAq)
                Wv85POLAq = M5E49VGDc[b07Vrx];
            b07Vrx = b07Vrx + 1;
        }
    }
    {
        b07Vrx = 0;
        for (; b07Vrx < Uthsq3RSP;) {
            if (M5E49VGDc[b07Vrx] > JIr1k4 &&Wv85POLAq > M5E49VGDc[b07Vrx])
                JIr1k4 = M5E49VGDc[b07Vrx];
            b07Vrx = b07Vrx + 1;
        }
    }
    if (!(0 != JIr1k4))
        ;
    else
        printf ("%d", JIr1k4);
}

