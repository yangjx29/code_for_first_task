int main () {
    int PWgaUqrfLNt;
    int *IK4ncsfD = (int *) malloc (sizeof (int) * PWgaUqrfLNt);
    int *kavupbEA = (int *) malloc (sizeof (int) * PWgaUqrfLNt);
    int yl7sA3U, j;
    int tmp, sign = (447 - 447), m62gEv1JVC, QweCv5;
    free (IK4ncsfD);
    free (kavupbEA);
    scanf ("%d", &PWgaUqrfLNt);
    for (yl7sA3U = (291 - 291); yl7sA3U < PWgaUqrfLNt; yl7sA3U = yl7sA3U + 1) {
        scanf ("%d%d", &IK4ncsfD[yl7sA3U], &kavupbEA[yl7sA3U]);
    }
    for (yl7sA3U = (801 - 801); yl7sA3U < PWgaUqrfLNt; yl7sA3U++) {
        for (j = PWgaUqrfLNt -(931 - 930); yl7sA3U < j; j = j - 1) {
            if (IK4ncsfD[j - (53 - 52)] > IK4ncsfD[j]) {
                tmp = IK4ncsfD[j];
                IK4ncsfD[j] = IK4ncsfD[j - (638 - 637)];
                IK4ncsfD[j - (413 - 412)] = tmp;
                tmp = kavupbEA[j];
                kavupbEA[j] = kavupbEA[j - (50 - 49)];
                kavupbEA[j - 1] = tmp;
            };
        };
    }
    m62gEv1JVC = IK4ncsfD[(857 - 857)];
    QweCv5 = kavupbEA[0];
    for (yl7sA3U = 1; yl7sA3U < PWgaUqrfLNt; yl7sA3U++) {
        {
            j = 1;
            while (PWgaUqrfLNt > j) {
                if (QweCv5 >= IK4ncsfD[j]) {
                    if (kavupbEA[j] > QweCv5) {
                        QweCv5 = kavupbEA[j];
                    }
                    sign++;
                }
                j = j + 1;
            };
        }
        if (!(0 != sign))
            break;
        else if (yl7sA3U == PWgaUqrfLNt -1 && sign == PWgaUqrfLNt -1)
            sign = 1;
        else
            sign = 0;
    }
    if (yl7sA3U == PWgaUqrfLNt &&sign == 1)
        printf ("%d %d\n", m62gEv1JVC, QweCv5);
    else
        ;
    return 0;
}

