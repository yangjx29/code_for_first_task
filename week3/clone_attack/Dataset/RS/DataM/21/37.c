float DWMiEdfbke (float OXSep5xIG) {
    if (0 <= OXSep5xIG)
        return OXSep5xIG;
    else
        return -OXSep5xIG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    int YzGuYB, RSWh7Iq [400], QsNwo0k = 0, jOhCd4xNc0qz = 0, wmeXJNp, xBIEGy8bDMq = 0, OXSep5xIG;
    float bCB1Mz0;
    scanf ("%d", &YzGuYB);
    for (OXSep5xIG = 0; YzGuYB > OXSep5xIG; OXSep5xIG++) {
        scanf ("%d", &RSWh7Iq[OXSep5xIG]);
        QsNwo0k = QsNwo0k +RSWh7Iq[OXSep5xIG];
    }
    bCB1Mz0 = ((float) QsNwo0k) / YzGuYB;
    {
        wmeXJNp = 0;
        OXSep5xIG = 0;
        while (YzGuYB > OXSep5xIG) {
            if (jOhCd4xNc0qz < RSWh7Iq[OXSep5xIG])
                jOhCd4xNc0qz = RSWh7Iq[OXSep5xIG];
            if (wmeXJNp > RSWh7Iq[OXSep5xIG])
                wmeXJNp = RSWh7Iq[OXSep5xIG];
            OXSep5xIG++;
        };
    }
    if (((float) jOhCd4xNc0qz - bCB1Mz0) > (-(float)wmeXJNp + bCB1Mz0))
        printf ("%d", jOhCd4xNc0qz);
    if (((float) jOhCd4xNc0qz - bCB1Mz0) < (-(float)wmeXJNp + bCB1Mz0))
        printf ("%d", wmeXJNp);
    if (((float) jOhCd4xNc0qz - bCB1Mz0) == (-(float)wmeXJNp + bCB1Mz0))
        printf ("%d,%d", wmeXJNp, jOhCd4xNc0qz);
}

