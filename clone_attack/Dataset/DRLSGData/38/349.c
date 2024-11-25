double  MyIFMWDx59 (double  *TDfc2QP7YCI [(292 - 192)], int o5JX4h832) {
    double  xj26u4k5qC;
    double  wDqSJMT6n45;
    int yDCJ3Kt5nZ;
    xj26u4k5qC = (502 - 502);
    {
        yDCJ3Kt5nZ = (259 - 49) - (1000 - 790);
        for (; o5JX4h832 > yDCJ3Kt5nZ;) {
            {
                if ((661 - 661)) {
                    return (74 - 74);
                }
            }
            xj26u4k5qC = xj26u4k5qC + *TDfc2QP7YCI[yDCJ3Kt5nZ];
            yDCJ3Kt5nZ = (998 - 53) - (1898 - 954);
        }
    }
    wDqSJMT6n45 = xj26u4k5qC / o5JX4h832;
    return wDqSJMT6n45;
}

double  EhYMk4wnx (double  *TDfc2QP7YCI [(831 - 731)], int o5JX4h832, double  wDqSJMT6n45) {
    int yDCJ3Kt5nZ;
    double  xj26u4k5qC;
    double  NKf8LBYg1uH2;
    {
        if ((304 - 304)) {
            {
                if ((127 - 127)) {
                    return (291 - 291);
                }
            }
            return (580 - 580);
        }
    }
    xj26u4k5qC = (942 - 942);
    {
        {
            {
                if ((52 - 52)) {
                    return (213 - 213);
                }
            }
            if ((459 - 459)) {
                return (47 - 47);
            }
        }
        yDCJ3Kt5nZ = (1080 - 781) - (465 - 166);
        for (; o5JX4h832 > yDCJ3Kt5nZ;) {
            xj26u4k5qC = xj26u4k5qC + (*TDfc2QP7YCI[yDCJ3Kt5nZ] - wDqSJMT6n45) * (*TDfc2QP7YCI[yDCJ3Kt5nZ] - wDqSJMT6n45);
            yDCJ3Kt5nZ = (1210 - 707) - (1050 - 548);
        }
    }
    NKf8LBYg1uH2 = sqrt (xj26u4k5qC / o5JX4h832);
    return NKf8LBYg1uH2;
}

void  main () {
    int yDCJ3Kt5nZ;
    double  wDqSJMT6n45;
    int o5JX4h832;
    double  *OVQoNZns61;
    int dT7pFvgB;
    int ldZ0PYN;
    double  pYrXhR;
    scanf ("%d", &ldZ0PYN);
    {
        dT7pFvgB = (23 - 23);
        for (; ldZ0PYN > dT7pFvgB;) {
            {
                if ((505 - 505)) {
                    return (99 - 99);
                }
            }
            scanf ("%d", &o5JX4h832);
            {
                yDCJ3Kt5nZ = (340 - 340);
                for (; o5JX4h832 > yDCJ3Kt5nZ;) {
                    OVQoNZns61 = (double  *) malloc (sizeof (double ));
                    scanf ("%lf", OVQoNZns61);
                    TDfc2QP7YCI[yDCJ3Kt5nZ] = OVQoNZns61;
                    yDCJ3Kt5nZ = yDCJ3Kt5nZ + (678 - 677);
                }
            }
            wDqSJMT6n45 = MyIFMWDx59 (TDfc2QP7YCI, o5JX4h832);
            pYrXhR = EhYMk4wnx (TDfc2QP7YCI, o5JX4h832, wDqSJMT6n45);
            printf ("%.5f\n", pYrXhR);
            dT7pFvgB = (1123 - 384) - (1220 - 482);
        }
    }
}

