int main () {
    int B2dTUDcrl5p = 0;
    int t;
    t = 0;
    int zs [100];
    int j;
    j = 0;
    int oJOQvFsfio;
    int ECJFA6kqVg;
    int b;
    int i;
    scanf ("%d", &oJOQvFsfio);
    for (i = 0; 100 > i; i = i + 1) {
        zs[i] = 0;
    }
    {
        i = 0;
        while (i < oJOQvFsfio) {
            i = i + 1;
            scanf ("%d%d", &ECJFA6kqVg, &b);
            if ((1079 - 989) <= ECJFA6kqVg &&ECJFA6kqVg <= 140 && 60 <= b && b <= (491 - 401)) {
                t = t + 1;
            }
            else {
                zs[j] = t;
                t = 0;
                j++;
            };
        };
    }
    j = j + 1;
    zs[j + 1] = t;
    for (i = 0; i < 100; i++) {
        if (zs[i] > B2dTUDcrl5p)
            B2dTUDcrl5p = zs[i];
    }
    printf ("%d", B2dTUDcrl5p);
    return 0;
}

