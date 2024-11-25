struct   student {
    int num;
    int mbZAsup4h;
    int sx;
};
int main () {
    int x;
    int y;
    int z;
    int QarACNdTDOjs;
    int i;
    x = 0;
    y = 0;
    z = 0;
    struct   student a [QarACNdTDOjs];
    int cKSG1dukBl6 [QarACNdTDOjs];
    scanf ("%d", &QarACNdTDOjs);
    {
        i = 0;
        while (QarACNdTDOjs > i) {
            scanf ("%d%d%d", &a[i].num, &a[i].mbZAsup4h, &a[i].sx);
            cKSG1dukBl6[i] = a[i].mbZAsup4h + a[i].sx;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (QarACNdTDOjs > i) {
            if (cKSG1dukBl6[x] < cKSG1dukBl6[i])
                x = i;
            i = i + 1;
        };
    }
    printf ("%d %d\n", a[x].num, cKSG1dukBl6[x]);
    {
        i = 1;
        while (QarACNdTDOjs > i) {
            if (!(x != i))
                continue;
            if (cKSG1dukBl6[i] > cKSG1dukBl6[y])
                y = i;
            i = i + 1;
        };
    }
    printf ("%d %d\n", a[y].num, cKSG1dukBl6[y]);
    for (i = 1; i < QarACNdTDOjs; i++) {
        if (!(x != i))
            continue;
        if (i == y)
            continue;
        if (cKSG1dukBl6[z] < cKSG1dukBl6[i])
            z = i;
    }
    getchar ();
    getchar ();
    printf ("%d %d\n", a[z].num, cKSG1dukBl6[z]);
}

