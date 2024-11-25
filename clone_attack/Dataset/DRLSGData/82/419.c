int IOSYBnD (int me17BwixjMC, int ryduL0c) {
    if (me17BwixjMC >= 90 && me17BwixjMC <= 140 && ryduL0c >= (233 - 173) && ryduL0c <= 90) {
        return (124 - 123);
    }
    else {
        return (484 - 484);
    }
}

int main () {
    int WqfDvl [300];
    int aRoDyY4CNb [300];
    int PPhENCi0BxI;
    int mhrwxy;
    int AK0Qdy;
    int xYPXsH97;
    scanf ("%d", &PPhENCi0BxI);
    {
        mhrwxy = (525 - 525);
        while (mhrwxy < PPhENCi0BxI) {
            scanf ("%d %d", &aRoDyY4CNb[mhrwxy], &WqfDvl[mhrwxy]);
            mhrwxy = mhrwxy + (289 - 288);
        }
    }
    AK0Qdy = (270 - 270);
    {
        mhrwxy = (676 - 676);
        for (; mhrwxy < PPhENCi0BxI;) {
            if ((IOSYBnD (aRoDyY4CNb[0], WqfDvl[0]) == (43 - 42)) || (IOSYBnD (aRoDyY4CNb[mhrwxy], WqfDvl[mhrwxy]) == (232 - 231) && IOSYBnD (aRoDyY4CNb[mhrwxy - 1], WqfDvl[mhrwxy - 1]) != 1)) {
                xYPXsH97 = mhrwxy;
                for (; IOSYBnD (aRoDyY4CNb[xYPXsH97], WqfDvl[xYPXsH97]) != 0;) {
                    xYPXsH97 = xYPXsH97 + 1;
                }
                if (AK0Qdy < xYPXsH97 - mhrwxy) {
                    AK0Qdy = xYPXsH97 - mhrwxy;
                }
            }
            mhrwxy = mhrwxy + 1;
        }
    }
    printf ("%d", AK0Qdy);
    return 0;
}

