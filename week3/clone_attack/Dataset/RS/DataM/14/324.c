struct   student {
    int ID;
    int LN64F175Ij;
    int Math;
    int Score;
};
main () {
    int first;
    int uvYZLjEK;
    int third;
    int n;
    int i;
    int HupqxUsIPZjB;
    int isecond;
    int ithird;
    first = (335 - 335);
    uvYZLjEK = (995 - 995);
    third = (742 - 742);
    struct   student aY3MFXHzZ [n];
    scanf ("%d", &n);
    {
        i = 274 - 274;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d %d", &aY3MFXHzZ[i].ID, &aY3MFXHzZ[i].LN64F175Ij, &aY3MFXHzZ[i].Math);
            aY3MFXHzZ[i].Score = aY3MFXHzZ[i].LN64F175Ij + aY3MFXHzZ[i].Math;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (first < aY3MFXHzZ[i].Score) {
            first = aY3MFXHzZ[i].Score;
            HupqxUsIPZjB = i;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (uvYZLjEK < aY3MFXHzZ[i].Score && aY3MFXHzZ[i].Score <= first && i != HupqxUsIPZjB) {
                uvYZLjEK = aY3MFXHzZ[i].Score;
                isecond = i;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (third < aY3MFXHzZ[i].Score && aY3MFXHzZ[i].Score <= uvYZLjEK && i != HupqxUsIPZjB &&i != isecond) {
                third = aY3MFXHzZ[i].Score;
                ithird = i;
            }
            i++;
        };
    }
    printf ("%d %d\n", aY3MFXHzZ[HupqxUsIPZjB].ID, first);
    printf ("%d %d\n", aY3MFXHzZ[isecond].ID, uvYZLjEK);
    printf ("%d %d\n", aY3MFXHzZ[ithird].ID, third);
}

