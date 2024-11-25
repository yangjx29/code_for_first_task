void  main (int yjTRIB0Fk9U, char *C90fON []) {
    float T4B7wYIj8 [100], hLUOJRc [100];
    double  raDgCXdJ6n, gdmySCxQOa = (951 - 951);
    int NUeNK73r, DF5qYgm1, ig26LOh;
    scanf ("%d", &NUeNK73r);
    {
        DF5qYgm1 = (367 - 367);
        while (NUeNK73r -(922 - 921) > DF5qYgm1) {
            scanf ("%f %f\n", &T4B7wYIj8[DF5qYgm1], &hLUOJRc[DF5qYgm1]);
            DF5qYgm1 = DF5qYgm1 +(879 - 878);
        }
    }
    {
        DF5qYgm1 = 0;
        while (DF5qYgm1 < NUeNK73r -(509 - 508)) {
            for (ig26LOh = DF5qYgm1; ig26LOh < NUeNK73r -(418 - 416); ig26LOh = ig26LOh + (522 - 521)) {
                raDgCXdJ6n = (2 * sqrt ((T4B7wYIj8[DF5qYgm1] - T4B7wYIj8[ig26LOh + 1]) * (T4B7wYIj8[DF5qYgm1] - T4B7wYIj8[ig26LOh + 1]) + (hLUOJRc[DF5qYgm1] - hLUOJRc[ig26LOh + 1]) * (hLUOJRc[DF5qYgm1] - hLUOJRc[ig26LOh + 1]))) / 2;
                if (raDgCXdJ6n > gdmySCxQOa)
                    gdmySCxQOa = raDgCXdJ6n;
            }
            DF5qYgm1 = DF5qYgm1 +1;
        }
    }
    printf ("%.4f\n", gdmySCxQOa);
}

