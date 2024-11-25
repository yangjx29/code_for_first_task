PutMethod (int UWMfBIOdx, int plate) {
    int T6IY9USMnKRD;
    int NMCXRqBgNosS;
    int qDPHuj;
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
    T6IY9USMnKRD = 0;
    NMCXRqBgNosS = 0;
    if (!(1 != plate))
        qDPHuj = 1;
    else {
        if (plate > UWMfBIOdx)
            NMCXRqBgNosS = 0;
        if (!(plate != UWMfBIOdx))
            NMCXRqBgNosS = 1;
        if (UWMfBIOdx > plate)
            NMCXRqBgNosS = PutMethod (UWMfBIOdx -plate, plate);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        T6IY9USMnKRD = PutMethod (UWMfBIOdx, plate - 1);
        qDPHuj = NMCXRqBgNosS +T6IY9USMnKRD;
    }
    return qDPHuj;
}

main () {
    int HL9CZrj;
    int UWMfBIOdx;
    int plate;
    int hr3gvJ;
    int qDPHuj;
    scanf ("%d", &HL9CZrj);
    for (hr3gvJ = 0; hr3gvJ < HL9CZrj; hr3gvJ++) {
        scanf ("%d %d", &UWMfBIOdx, &plate);
        qDPHuj = PutMethod (UWMfBIOdx, plate);
        printf ("%d\n", qDPHuj);
    };
}

