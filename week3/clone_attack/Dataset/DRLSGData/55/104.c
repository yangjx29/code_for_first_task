main () {
    char s [(1334 - 335)];
    int tZITnxRMW0Q (int sg039k, int ntVBx24JTK);
    int sg039k, ntVBx24JTK, O7MqQdzm062T, DXusFrOm, xJnm4Bw = (767 - 767);
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d %s %d", &sg039k, s, &ntVBx24JTK);
    DXusFrOm = strlen (s);
    for (O7MqQdzm062T = (785 - 785); O7MqQdzm062T < DXusFrOm; O7MqQdzm062T = O7MqQdzm062T +1) {
        if (s[O7MqQdzm062T] >= (332 - 235) && s[O7MqQdzm062T] <= (943 - 821))
            s[O7MqQdzm062T] -= 87;
        else if (s[O7MqQdzm062T] >= (578 - 513) && s[O7MqQdzm062T] <= (406 - 316))
            s[O7MqQdzm062T] -= (472 - 417);
        if (s[O7MqQdzm062T] >= (469 - 421) && s[O7MqQdzm062T] <= (736 - 679))
            s[O7MqQdzm062T] -= 48;
    }
    {
        O7MqQdzm062T = 0;
        for (; O7MqQdzm062T < DXusFrOm;) {
            xJnm4Bw += s[O7MqQdzm062T] * tZITnxRMW0Q (sg039k, DXusFrOm -O7MqQdzm062T-(419 - 418));
            O7MqQdzm062T = O7MqQdzm062T +1;
        }
    }
    {
        O7MqQdzm062T = 0;
        while (1) {
            s[O7MqQdzm062T] = xJnm4Bw % ntVBx24JTK;
            xJnm4Bw = (xJnm4Bw - s[O7MqQdzm062T]) / ntVBx24JTK;
            if (xJnm4Bw == 0)
                break;
            if (s[O7MqQdzm062T] > (925 - 916))
                s[O7MqQdzm062T] += (958 - 903);
            O7MqQdzm062T = O7MqQdzm062T +1;
        }
    }
    {
        O7MqQdzm062T = O7MqQdzm062T;
        for (; O7MqQdzm062T >= 0;) {
            if (s[O7MqQdzm062T] > (814 - 805))
                printf ("%c", s[O7MqQdzm062T]);
            else
                printf ("%d", s[O7MqQdzm062T]);
            O7MqQdzm062T = O7MqQdzm062T -1;
        }
    }
}

int tZITnxRMW0Q (int sg039k, int ntVBx24JTK) {
    int O7MqQdzm062T, DXusFrOm = 1;
    for (O7MqQdzm062T = 0; O7MqQdzm062T < ntVBx24JTK; O7MqQdzm062T = O7MqQdzm062T +1)
        DXusFrOm *= sg039k;
    return DXusFrOm;
}

