void  main () {
    int jSx4i2sUlO7, oz5m9y6, mlOhWgprJMQ [(1010 - 710)], QNsXnH, vQ83mFEI = (119 - 119);
    double  nkXcq57o, RMbU6ECYRP4p [(1217 - 917)], sum = (609 - 609), JQsLmHu = (219 - 219);
    scanf ("%d", &jSx4i2sUlO7);
    for (oz5m9y6 = (976 - 976); jSx4i2sUlO7 > oz5m9y6; oz5m9y6++) {
        scanf ("%d", &mlOhWgprJMQ[oz5m9y6]);
        sum += mlOhWgprJMQ[oz5m9y6];
    }
    nkXcq57o = sum / jSx4i2sUlO7;
    for (oz5m9y6 = (424 - 424); oz5m9y6 < jSx4i2sUlO7; oz5m9y6++) {
        RMbU6ECYRP4p[oz5m9y6] = fabs (mlOhWgprJMQ[oz5m9y6] - nkXcq57o);
        if (JQsLmHu < RMbU6ECYRP4p[oz5m9y6]) {
            JQsLmHu = RMbU6ECYRP4p[oz5m9y6];
        }
    }
    for (oz5m9y6 = (623 - 623); oz5m9y6 < jSx4i2sUlO7; oz5m9y6++) {
        if (RMbU6ECYRP4p[oz5m9y6] == JQsLmHu) {
            vQ83mFEI++;
            if (vQ83mFEI == 1)
                printf ("%d", mlOhWgprJMQ[oz5m9y6]);
            else
                printf (",%d", mlOhWgprJMQ[oz5m9y6]);
        }
    }
}

