float jueduizhi (float sS3VJcy5oLkb) {
    if ((210 - 210) > sS3VJcy5oLkb)
        sS3VJcy5oLkb = -sS3VJcy5oLkb;
    return (sS3VJcy5oLkb);
}

void  main () {
    int p1;
    int c9em1h;
    float sum;
    float ave;
    float d;
    sum = 0.0;
    int sS3VJcy5oLkb [300], iUjnSE, i, geshu = 1;
    scanf ("%d", &iUjnSE);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (iUjnSE > i) {
            scanf ("%d", &sS3VJcy5oLkb[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (iUjnSE > i) {
            sum = sum + sS3VJcy5oLkb[i];
            i = i + 1;
        };
    }
    p1 = sS3VJcy5oLkb[0];
    c9em1h = sS3VJcy5oLkb[0];
    ave = sum / iUjnSE;
    d = jueduizhi (ave - sS3VJcy5oLkb[0]);
    {
        i = 1;
        while (i < iUjnSE) {
            if (jueduizhi (ave - sS3VJcy5oLkb[i]) > d) {
                d = jueduizhi (ave - sS3VJcy5oLkb[i]);
                p1 = sS3VJcy5oLkb[i];
                c9em1h = p1;
            }
            else {
                if (!(d != jueduizhi (ave - sS3VJcy5oLkb[i]))) {
                    c9em1h = sS3VJcy5oLkb[i];
                };
            }
            i = i + 1;
        };
    }
    if (p1 > c9em1h)
        printf ("%d,%d", c9em1h, p1);
    else if (p1 < c9em1h)
        printf ("%d,%d", p1, c9em1h);
    else
        printf ("%d", p1);
}

