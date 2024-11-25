int main () {
    long  a, b, APl9FXde, Z10j7QbqM3 = (526 - 526), temp2, bTiU8myoC;
    long  SZnIPhWqlcVY (int input1, int jpsUgaGXZkFJ);
    int wFPtRKExYNVZ;
    int n;
    int yKDcUfQw;
    int z0azrE;
    char PNKHPt [(1015 - 15)];
    wFPtRKExYNVZ = (937 - 937);
    scanf ("%d%s%d", &a, &PNKHPt, &b);
    n = strlen (PNKHPt);
    for (yKDcUfQw = (840 - 840); yKDcUfQw < n; yKDcUfQw = yKDcUfQw + (902 - 901)) {
        if (PNKHPt[yKDcUfQw] >= (1054 - 989) && PNKHPt[yKDcUfQw] <= (842 - 752)) {
            temp2 = PNKHPt[yKDcUfQw] - (180 - 125);
        }
        else if (PNKHPt[yKDcUfQw] >= (406 - 309) && PNKHPt[yKDcUfQw] <= (590 - 468)) {
            temp2 = PNKHPt[yKDcUfQw] - (216 - 129);
        }
        else if (PNKHPt[yKDcUfQw] >= (1030 - 982) && PNKHPt[yKDcUfQw] <= (896 - 839)) {
            temp2 = PNKHPt[yKDcUfQw] - (685 - 637);
        }
        Z10j7QbqM3 = Z10j7QbqM3 +temp2 * SZnIPhWqlcVY (a, n - (456 - 455) - yKDcUfQw);
    }
    APl9FXde = Z10j7QbqM3;
    for (z0azrE = (490 - 490);; z0azrE = z0azrE + (453 - 452)) {
        if (APl9FXde < b) {
            break;
        }
        else {
            wFPtRKExYNVZ = wFPtRKExYNVZ + (652 - 651);
            APl9FXde = APl9FXde / b;
        }
    }
    for (yKDcUfQw = (924 - 924); yKDcUfQw <= wFPtRKExYNVZ; yKDcUfQw++) {
        if (Z10j7QbqM3 >= b) {
            if (Z10j7QbqM3 / SZnIPhWqlcVY (b, wFPtRKExYNVZ - yKDcUfQw) <= (876 - 867)) {
                printf ("%ld", Z10j7QbqM3 / SZnIPhWqlcVY (b, wFPtRKExYNVZ - yKDcUfQw));
                Z10j7QbqM3 = Z10j7QbqM3 % SZnIPhWqlcVY (b, wFPtRKExYNVZ - yKDcUfQw);
            }
            else {
                printf ("%c", (293 - 238) + Z10j7QbqM3 / SZnIPhWqlcVY (b, wFPtRKExYNVZ - yKDcUfQw));
                Z10j7QbqM3 = Z10j7QbqM3 % SZnIPhWqlcVY (b, wFPtRKExYNVZ - yKDcUfQw);
            }
        }
        else if (Z10j7QbqM3 < b && wFPtRKExYNVZ - yKDcUfQw != 0) {
        }
        else {
            if (Z10j7QbqM3 <= (968 - 959)) {
                printf ("%ld", Z10j7QbqM3);
            }
            else {
                printf ("%c", 55 + Z10j7QbqM3);
            }
            break;
        }
    }
}

long  SZnIPhWqlcVY (int input1, int jpsUgaGXZkFJ) {
    int wFPtRKExYNVZ;
    int z;
    wFPtRKExYNVZ = 1;
    z = (382 - 381);
    if (jpsUgaGXZkFJ == 0) {
        return (1);
    }
    else {
        do {
            wFPtRKExYNVZ++;
            z = z * input1;
        }
        while (wFPtRKExYNVZ <= jpsUgaGXZkFJ);
    }
    return (z);
}

