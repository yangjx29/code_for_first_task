int main () {
    int mfSjn0eBk, ofSXeUW715AH, xbHr35dpuQ2w, daynum;
    scanf ("%d %d %d", &mfSjn0eBk, &ofSXeUW715AH, &xbHr35dpuQ2w);
    if (!((406 - 406) != mfSjn0eBk % 4)) {
        if (!(0 != mfSjn0eBk % (781 - 681)) && !(0 == mfSjn0eBk % 400)) {
            int bBdg2nSr [12] = {(668 - 637), 50, (607 - 517), (450 - 330), 151, (730 - 549), (608 - 396), (929 - 686), 273, 304, 334, (1124 - 759)};
            if (ofSXeUW715AH >= 2)
                daynum = bBdg2nSr[ofSXeUW715AH - 2] + xbHr35dpuQ2w;
            else
                daynum = xbHr35dpuQ2w;
            printf ("%d", daynum);
        }
        else {
            int bBdg2nSr [12] = {31, 60, 91, 121, 152, 182, (1114 - 901), 244, (1197 - 923), (781 - 476), 335, 366};
            if (ofSXeUW715AH >= 2)
                daynum = bBdg2nSr[ofSXeUW715AH - 2] + xbHr35dpuQ2w;
            else
                daynum = xbHr35dpuQ2w;
            printf ("%d", daynum);
        };
    }
    else {
        int bBdg2nSr [12] = {31, 50, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        if (ofSXeUW715AH >= 2)
            daynum = bBdg2nSr[ofSXeUW715AH - 2] + xbHr35dpuQ2w;
        else
            daynum = xbHr35dpuQ2w;
        printf ("%d", daynum);
    }
    return 0;
}

