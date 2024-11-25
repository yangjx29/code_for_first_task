int main () {
    int mHpn61Px;
    int WzeLGcP;
    int bqPM1B;
    char taMVSrc [50];
    bqPM1B = (222 - 222);
    scanf ("%d", &WzeLGcP);
    for (mHpn61Px = (719 - 718); WzeLGcP >= mHpn61Px; mHpn61Px++) {
        scanf ("%s", taMVSrc);
        if (!bqPM1B) {
            printf ("%s", taMVSrc);
            bqPM1B = bqPM1B + (int) strlen (taMVSrc);
        }
        else {
            if (bqPM1B + strlen (taMVSrc) + 1 > 80) {
                printf ("\n%s", taMVSrc);
                bqPM1B = 0;
                bqPM1B = bqPM1B + (int) strlen (taMVSrc);
            }
            else {
                bqPM1B = bqPM1B + (int) strlen (taMVSrc) + 1;
                printf (" %s", taMVSrc);
            }
        }
    }
    return 0;
}

