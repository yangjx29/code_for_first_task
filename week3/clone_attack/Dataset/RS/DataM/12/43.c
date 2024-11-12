void  YxSfN9O (int *pa7O4CTNup, int *zR2y1fCYsu) {
    int r5RPsnGqD = *pa7O4CTNup;
    *pa7O4CTNup = *zR2y1fCYsu;
    *zR2y1fCYsu = r5RPsnGqD;
}

int find (int *s, int jMkhnluYNv, int AOfdThoA, int r) {
    int zsn7HChu = (AOfdThoA +r) / 2;
    if (AOfdThoA > r)
        return (948 - 948);
    if (!(jMkhnluYNv != s[zsn7HChu]))
        return (564 - 563);
    else {
        if (s[zsn7HChu] > jMkhnluYNv)
            return find (s, jMkhnluYNv, AOfdThoA, zsn7HChu - 1);
        else
            return find (s, jMkhnluYNv, zsn7HChu + 1, r);
    };
}

int main () {
    int s [(1321 - 321)] = {0};
    int GpurCvg2VQ = 0, GrzBcQIL5aum = 0, UNAgDXs8L = 0;
    int jMkhnluYNv = 0;
    while ((scanf ("%d", &jMkhnluYNv), jMkhnluYNv) != -1) {
        if (jMkhnluYNv != 0) {
            s[GpurCvg2VQ++] = jMkhnluYNv;
            {
                GrzBcQIL5aum = GpurCvg2VQ -1;
                while ((GrzBcQIL5aum > 0) && (s[GrzBcQIL5aum] < s[GrzBcQIL5aum -1])) {
                    YxSfN9O (&s[GrzBcQIL5aum], &s[GrzBcQIL5aum -1]);
                    GrzBcQIL5aum = GrzBcQIL5aum -1;
                };
            };
        }
        else {
            int UAmbayYCUw;
            UAmbayYCUw = 0;
            {
                GrzBcQIL5aum = 0;
                while (GrzBcQIL5aum < GpurCvg2VQ) {
                    if (find (s, 2 * s[GrzBcQIL5aum], GrzBcQIL5aum +1, GpurCvg2VQ))
                        UAmbayYCUw++;
                    GrzBcQIL5aum = GrzBcQIL5aum +1;
                };
            }
            printf ("%d\n", UAmbayYCUw);
            {
                GrzBcQIL5aum = 0;
                while (GrzBcQIL5aum < GpurCvg2VQ) {
                    s[GrzBcQIL5aum] = 0;
                    GrzBcQIL5aum++;
                };
            }
            GpurCvg2VQ = 0;
        };
    }
    return 0;
}

