void  main () {
    int gRFE3lz;
    int yLJ5EY4Mr;
    int hg2w9odVyAh ();
    scanf ("%d", &gRFE3lz);
    for (yLJ5EY4Mr = 0; gRFE3lz > yLJ5EY4Mr; yLJ5EY4Mr = yLJ5EY4Mr + 1)
        printf ("%d\n", hg2w9odVyAh ());
}

int hg2w9odVyAh () {
    int Iw6rQ5t [10000];
    int *RBQnrK = Iw6rQ5t;
    int h2ZBQF1, gRFE3lz, yLJ5EY4Mr, SOVKoSd, oO2W9o, mqZBpe = 0;
    scanf ("%d%d", &h2ZBQF1, &gRFE3lz);
    oO2W9o = h2ZBQF1 * gRFE3lz;
    for (yLJ5EY4Mr = 0; oO2W9o > yLJ5EY4Mr; yLJ5EY4Mr = yLJ5EY4Mr + 1)
        scanf ("%d", RBQnrK +yLJ5EY4Mr);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(1 != oO2W9o))
        return *RBQnrK;
    for (yLJ5EY4Mr = 0; yLJ5EY4Mr < gRFE3lz - 1; yLJ5EY4Mr = yLJ5EY4Mr + 1)
        mqZBpe += *(RBQnrK +yLJ5EY4Mr);
    for (yLJ5EY4Mr = 1; h2ZBQF1 > yLJ5EY4Mr; yLJ5EY4Mr++)
        mqZBpe = mqZBpe + *(RBQnrK +yLJ5EY4Mr * gRFE3lz) + *(RBQnrK +yLJ5EY4Mr * gRFE3lz - 1);
    {
        yLJ5EY4Mr = 1;
        while (yLJ5EY4Mr < gRFE3lz) {
            mqZBpe += *(RBQnrK +(h2ZBQF1 - 1) * gRFE3lz + yLJ5EY4Mr);
            yLJ5EY4Mr = yLJ5EY4Mr + 1;
        };
    }
    return mqZBpe;
}

