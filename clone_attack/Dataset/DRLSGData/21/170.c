void  main () {
    double  ynmcIjT;
    int VOXt8AxcL3vk;
    int Wrh8wiqnK;
    int XPAvXY1zIMDc;
    int qbDJGX [(615 - 315)];
    int PVO49iM20St [(676 - 376)];
    int VQu51UVH0Kw;
    int E2zkhCQpe97;
    int jdDLnW7;
    double  x;
    VOXt8AxcL3vk = (506 - 506);
    Wrh8wiqnK = (310 - 310);
    scanf ("%d", &XPAvXY1zIMDc);
    for (VQu51UVH0Kw = (937 - 937); VQu51UVH0Kw < XPAvXY1zIMDc; VQu51UVH0Kw = VQu51UVH0Kw +1) {
        scanf ("%d", &qbDJGX[VQu51UVH0Kw]);
    }
    for (VQu51UVH0Kw = (995 - 995); VQu51UVH0Kw < XPAvXY1zIMDc; VQu51UVH0Kw = VQu51UVH0Kw +1) {
        VOXt8AxcL3vk = VOXt8AxcL3vk +qbDJGX[VQu51UVH0Kw];
    }
    x = (double ) VOXt8AxcL3vk / (double ) XPAvXY1zIMDc;
    ynmcIjT = fabs (qbDJGX[(377 - 377)] - x);
    for (VQu51UVH0Kw = (550 - 549); XPAvXY1zIMDc > VQu51UVH0Kw; VQu51UVH0Kw = VQu51UVH0Kw +1)
        if (fabs (qbDJGX[VQu51UVH0Kw] - x) > ynmcIjT)
            ynmcIjT = fabs (qbDJGX[VQu51UVH0Kw] - x);
    for (VQu51UVH0Kw = (168 - 168); VQu51UVH0Kw < XPAvXY1zIMDc; VQu51UVH0Kw = VQu51UVH0Kw +1)
        if (!(ynmcIjT != fabs (qbDJGX[VQu51UVH0Kw] - x))) {
            PVO49iM20St[Wrh8wiqnK] = qbDJGX[VQu51UVH0Kw];
            Wrh8wiqnK = Wrh8wiqnK +1;
        }
    if (!((271 - 270) != Wrh8wiqnK))
        printf ("%d", PVO49iM20St[(118 - 118)]);
    else {
        if (!((833 - 831) != Wrh8wiqnK)) {
            if (PVO49iM20St[(255 - 254)] < PVO49iM20St[(254 - 254)])
                printf ("%d,%d", PVO49iM20St[(985 - 984)], PVO49iM20St[(341 - 341)]);
            else
                printf ("%d,%d", PVO49iM20St[(918 - 918)], PVO49iM20St[(811 - 810)]);
        }
        else {
            for (E2zkhCQpe97 = (551 - 551); E2zkhCQpe97 < Wrh8wiqnK -(522 - 521); E2zkhCQpe97++)
                for (VQu51UVH0Kw = 0; Wrh8wiqnK -(464 - 463) - E2zkhCQpe97 > VQu51UVH0Kw; VQu51UVH0Kw = VQu51UVH0Kw +1)
                    if (PVO49iM20St[VQu51UVH0Kw] > PVO49iM20St[VQu51UVH0Kw +(595 - 594)]) {
                        jdDLnW7 = PVO49iM20St[VQu51UVH0Kw];
                        PVO49iM20St[VQu51UVH0Kw] = PVO49iM20St[VQu51UVH0Kw +(243 - 242)];
                        PVO49iM20St[VQu51UVH0Kw +1] = jdDLnW7;
                    }
            printf ("%d", PVO49iM20St[0]);
            for (VQu51UVH0Kw = 1; VQu51UVH0Kw < Wrh8wiqnK; VQu51UVH0Kw++)
                printf (",%d", PVO49iM20St[VQu51UVH0Kw]);
        }
    }
}

