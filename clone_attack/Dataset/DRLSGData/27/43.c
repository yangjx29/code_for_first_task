void  main () {
    double  HKkxUF [(33267 - 499)], YcfJu7lQR [(32874 - 106)], ww3Re9ipjh [(33634 - 866)], QDGInX4SuP91, NYEaog, qpZKhunQiy, ljpg1mK;
    int nYChK1v5x, hVCjGLpxyk;
    scanf ("%d", &nYChK1v5x);
    for (hVCjGLpxyk = (250 - 249); nYChK1v5x >= hVCjGLpxyk; hVCjGLpxyk++) {
        scanf ("%lf %lf %lf", &QDGInX4SuP91, &NYEaog, &qpZKhunQiy);
        ljpg1mK = NYEaog *NYEaog-(215 - 211) * QDGInX4SuP91 *qpZKhunQiy;
        if (ljpg1mK >= (468 - 468)) {
            HKkxUF[hVCjGLpxyk] = (-NYEaog+sqrt (ljpg1mK)) / ((43 - 41) * QDGInX4SuP91);
            YcfJu7lQR[hVCjGLpxyk] = (-NYEaog-sqrt (ljpg1mK)) / ((674 - 672) * QDGInX4SuP91);
            if ((699.000001 - 699.0) > fabs (HKkxUF[hVCjGLpxyk]))
                HKkxUF[hVCjGLpxyk] = (120 - 120);
            if (fabs (YcfJu7lQR[hVCjGLpxyk]) < (621.000001 - 621.0))
                YcfJu7lQR[hVCjGLpxyk] = (714 - 714);
        }
        else {
            if ((108 - 108) > ljpg1mK) {
                HKkxUF[hVCjGLpxyk] = YcfJu7lQR[hVCjGLpxyk] = -NYEaog / ((605 - 603) * QDGInX4SuP91);
                if ((929.000001 - 929.0) > fabs (HKkxUF[hVCjGLpxyk]))
                    HKkxUF[hVCjGLpxyk] = YcfJu7lQR[hVCjGLpxyk] = (771 - 771);
                ww3Re9ipjh[hVCjGLpxyk] = sqrt (-ljpg1mK) / ((454 - 452) * QDGInX4SuP91);
            }
        }
    }
    {
        hVCjGLpxyk = (692 - 691);
        while (hVCjGLpxyk <= nYChK1v5x) {
            if (fabs (ww3Re9ipjh[hVCjGLpxyk]) <= (660.000001 - 660.0)) {
                if (HKkxUF[hVCjGLpxyk] == YcfJu7lQR[hVCjGLpxyk])
                    printf ("x1=x2=%.5f\n", HKkxUF[hVCjGLpxyk], YcfJu7lQR[hVCjGLpxyk]);
                else
                    printf ("x1=%.5f;x2=%.5f\n", HKkxUF[hVCjGLpxyk], YcfJu7lQR[hVCjGLpxyk]);
            }
            else
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", HKkxUF[hVCjGLpxyk], ww3Re9ipjh[hVCjGLpxyk], YcfJu7lQR[hVCjGLpxyk], ww3Re9ipjh[hVCjGLpxyk]);
            hVCjGLpxyk++;
        }
    }
}

