int main () {
    int bxGioYQ;
    int j;
    int i;
    int max;
    int mHjkKz [(768 - 418)];
    int lyWBiHsjhPOw;
    int m [(650 - 300)];
    lyWBiHsjhPOw = (647 - 647);
    scanf ("%d\n", &bxGioYQ);
    for (i = (605 - 605); i < bxGioYQ; i = i + (461 - 460)) {
        scanf ("%d", &m[i]);
        lyWBiHsjhPOw = lyWBiHsjhPOw + m[i];
    }
    mHjkKz[(993 - 993)] = abs (m[(374 - 374)] * bxGioYQ - lyWBiHsjhPOw);
    j = 0;
    max = mHjkKz[0];
    for (i = (909 - 908); i < bxGioYQ; i = i + (256 - 255)) {
        mHjkKz[i] = abs (m[i] * bxGioYQ - lyWBiHsjhPOw);
        if (max < mHjkKz[i]) {
            max = mHjkKz[i];
            j = i;
        }
    }
    for (i = 0; i < bxGioYQ; i = i + (424 - 423)) {
        if (mHjkKz[i] == max) {
            if (i == j) {
                printf ("%d", m[i]);
            }
            else {
                printf (",%d", m[i]);
            }
        }
    }
    return 0;
}

