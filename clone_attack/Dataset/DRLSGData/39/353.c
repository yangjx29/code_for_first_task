struct   s {
    char XhqQDU [20], H6fm5zMl, AJq9h836GB;
    int YHl7ForwMif, LiGhq1Q6LeR, Sic1x9a3J, hTOsYgWV2n;
};
int main () {
    struct   s hMbnk3 [101];
    struct   s b;
    int oL5kUTlj2hMn;
    int thFJMEvWXY;
    int mLl5QhDF6;
    char c;
    int z1FWKMrA;
    thFJMEvWXY = 0;
    scanf ("%d", &oL5kUTlj2hMn);
    z1FWKMrA = 0;
    {
        mLl5QhDF6 = 0;
        for (; oL5kUTlj2hMn > mLl5QhDF6;) {
            c = getchar ();
            scanf ("%s", hMbnk3[mLl5QhDF6].XhqQDU);
            scanf ("%d%d %c %c%d", &hMbnk3[mLl5QhDF6].YHl7ForwMif, &hMbnk3[mLl5QhDF6].LiGhq1Q6LeR, &hMbnk3[mLl5QhDF6].H6fm5zMl, &hMbnk3[mLl5QhDF6].AJq9h836GB, &hMbnk3[mLl5QhDF6].Sic1x9a3J);
            hMbnk3[mLl5QhDF6].hTOsYgWV2n = 0;
            if (hMbnk3[mLl5QhDF6].YHl7ForwMif > 80 && 1 <= hMbnk3[mLl5QhDF6].Sic1x9a3J)
                hMbnk3[mLl5QhDF6].hTOsYgWV2n += 8000;
            if (hMbnk3[mLl5QhDF6].YHl7ForwMif > 85 && hMbnk3[mLl5QhDF6].LiGhq1Q6LeR > 80)
                hMbnk3[mLl5QhDF6].hTOsYgWV2n += 4000;
            if (hMbnk3[mLl5QhDF6].YHl7ForwMif > 90)
                hMbnk3[mLl5QhDF6].hTOsYgWV2n += 2000;
            if (hMbnk3[mLl5QhDF6].YHl7ForwMif > 85 && hMbnk3[mLl5QhDF6].AJq9h836GB == 'Y')
                hMbnk3[mLl5QhDF6].hTOsYgWV2n += 1000;
            if (hMbnk3[mLl5QhDF6].LiGhq1Q6LeR > 80 && hMbnk3[mLl5QhDF6].H6fm5zMl == 'Y')
                hMbnk3[mLl5QhDF6].hTOsYgWV2n += 850;
            z1FWKMrA += hMbnk3[mLl5QhDF6].hTOsYgWV2n;
            if (hMbnk3[mLl5QhDF6].hTOsYgWV2n > thFJMEvWXY) {
                thFJMEvWXY = hMbnk3[mLl5QhDF6].hTOsYgWV2n;
                b = hMbnk3[mLl5QhDF6];
            }
            mLl5QhDF6 = mLl5QhDF6 + 1;
        }
    }
    printf ("%s\n%d\n%d", b.XhqQDU, thFJMEvWXY, z1FWKMrA);
    return 0;
}

