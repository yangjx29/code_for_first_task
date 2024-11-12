void  main () {
    int tC2wPrkOomD, *OmwyVBi31, *b2Oet7, ay6N5Sj, sfSHaj7L = 0;
    float *fgyZ9a, n5u2sx = 0, bjyJB5Rs, ls8COqA2Y93;
    scanf ("%d", &tC2wPrkOomD);
    OmwyVBi31 = (int *) malloc (sizeof (int) * tC2wPrkOomD);
    b2Oet7 = (int *) malloc (sizeof (int) * tC2wPrkOomD);
    fgyZ9a = (float *) malloc (sizeof (float) * tC2wPrkOomD);
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
    for (ay6N5Sj = 0; tC2wPrkOomD > ay6N5Sj; ay6N5Sj = ay6N5Sj + 1)
        scanf ("%d", OmwyVBi31 +ay6N5Sj);
    for (ay6N5Sj = 0; tC2wPrkOomD > ay6N5Sj; ay6N5Sj = ay6N5Sj + 1)
        scanf ("%d", b2Oet7 + ay6N5Sj);
    for (ay6N5Sj = 0; tC2wPrkOomD > ay6N5Sj; ay6N5Sj = ay6N5Sj + 1) {
        if (90 <= b2Oet7[ay6N5Sj])
            fgyZ9a[ay6N5Sj] = 4.0;
        if (85 <= b2Oet7[ay6N5Sj] && (465 - 376) >= b2Oet7[ay6N5Sj])
            fgyZ9a[ay6N5Sj] = 3.7;
        if (82 <= b2Oet7[ay6N5Sj] && 84 >= b2Oet7[ay6N5Sj])
            fgyZ9a[ay6N5Sj] = 3.3;
        if (78 <= b2Oet7[ay6N5Sj] && 81 >= b2Oet7[ay6N5Sj])
            fgyZ9a[ay6N5Sj] = 3.0;
        if (75 <= b2Oet7[ay6N5Sj] && 77 >= b2Oet7[ay6N5Sj])
            fgyZ9a[ay6N5Sj] = 2.7;
        if (b2Oet7[ay6N5Sj] >= 72 && b2Oet7[ay6N5Sj] <= 74)
            fgyZ9a[ay6N5Sj] = 2.3;
        if (b2Oet7[ay6N5Sj] >= 68 && b2Oet7[ay6N5Sj] <= 71)
            fgyZ9a[ay6N5Sj] = 2.0;
        if (b2Oet7[ay6N5Sj] >= 64 && b2Oet7[ay6N5Sj] <= 67)
            fgyZ9a[ay6N5Sj] = 1.5;
        if (b2Oet7[ay6N5Sj] >= 60 && b2Oet7[ay6N5Sj] <= 63)
            fgyZ9a[ay6N5Sj] = 1.0;
        if (b2Oet7[ay6N5Sj] <= 59)
            fgyZ9a[ay6N5Sj] = 0;
    }
    for (ay6N5Sj = 0; ay6N5Sj < tC2wPrkOomD; ay6N5Sj = ay6N5Sj + 1) {
        bjyJB5Rs = OmwyVBi31[ay6N5Sj] * fgyZ9a[ay6N5Sj];
        n5u2sx = n5u2sx + bjyJB5Rs;
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
        sfSHaj7L = OmwyVBi31[ay6N5Sj] + sfSHaj7L;
    }
    ls8COqA2Y93 = n5u2sx / sfSHaj7L;
    printf ("%.2f", ls8COqA2Y93);
}

