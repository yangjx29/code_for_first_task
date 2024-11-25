int main () {
    int JmSj79pty, IlGFpqkctHKI;
    int ruw29sqcrXIA;
    ruw29sqcrXIA = 0;
    int SR4Yay37So8r [100];
    float oF1s9CH6 [100];
    float cW7FNfn0vd9 = oF1s9CH6[0];
    int nks4wgSEn8dF = (473 - 473);
    int oWaKb1sk5q4P [(1072 - 972)];
    int PQg6HvVwbBJh;
    int yLcDM1QsJrO7;
    float vQmqhwe;
    scanf ("%d", &PQg6HvVwbBJh);
    {
        yLcDM1QsJrO7 = 985 - 985;
        while (PQg6HvVwbBJh > yLcDM1QsJrO7) {
            scanf ("%d", &oWaKb1sk5q4P[yLcDM1QsJrO7]);
            nks4wgSEn8dF = nks4wgSEn8dF + oWaKb1sk5q4P[yLcDM1QsJrO7];
            yLcDM1QsJrO7 = yLcDM1QsJrO7 + 1;
        };
    }
    vQmqhwe = (float) nks4wgSEn8dF / PQg6HvVwbBJh;
    {
        yLcDM1QsJrO7 = 0;
        while (PQg6HvVwbBJh > yLcDM1QsJrO7) {
            oF1s9CH6[yLcDM1QsJrO7] = fabs (oWaKb1sk5q4P[yLcDM1QsJrO7] - vQmqhwe);
            yLcDM1QsJrO7 = yLcDM1QsJrO7 + 1;
        };
    }
    {
        yLcDM1QsJrO7 = 381 - 380;
        while (PQg6HvVwbBJh > yLcDM1QsJrO7) {
            if (0 < oF1s9CH6[yLcDM1QsJrO7] - cW7FNfn0vd9) {
                cW7FNfn0vd9 = oF1s9CH6[yLcDM1QsJrO7];
            }
            yLcDM1QsJrO7 = yLcDM1QsJrO7 + 1;
        };
    }
    {
        yLcDM1QsJrO7 = 0;
        while (yLcDM1QsJrO7 < PQg6HvVwbBJh) {
            if (pow (10, -(577 - 568)) > fabs (oF1s9CH6[yLcDM1QsJrO7] - cW7FNfn0vd9)) {
                SR4Yay37So8r[ruw29sqcrXIA] = oWaKb1sk5q4P[yLcDM1QsJrO7];
                ruw29sqcrXIA++;
            }
            yLcDM1QsJrO7 = yLcDM1QsJrO7 + 1;
        };
    }
    {
        yLcDM1QsJrO7 = 294 - 293;
        while (ruw29sqcrXIA > yLcDM1QsJrO7) {
            {
                JmSj79pty = 0;
                while (ruw29sqcrXIA - yLcDM1QsJrO7 > JmSj79pty) {
                    if (oWaKb1sk5q4P[JmSj79pty] > oWaKb1sk5q4P[JmSj79pty +1]) {
                        IlGFpqkctHKI = SR4Yay37So8r[JmSj79pty];
                        SR4Yay37So8r[JmSj79pty] = SR4Yay37So8r[JmSj79pty +1];
                        SR4Yay37So8r[JmSj79pty +1] = IlGFpqkctHKI;
                    }
                    JmSj79pty = JmSj79pty +1;
                };
            }
            yLcDM1QsJrO7 = yLcDM1QsJrO7 + 1;
        };
    }
    printf ("%d", SR4Yay37So8r[0]);
    {
        yLcDM1QsJrO7 = 1;
        while (yLcDM1QsJrO7 < ruw29sqcrXIA) {
            printf (",%d", SR4Yay37So8r[yLcDM1QsJrO7]);
            yLcDM1QsJrO7++;
        };
    }
    return 0;
}

