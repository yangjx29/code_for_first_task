char beichushu [(363 - 213)];
int beichu [(669 - 519)];
int chu [150];
int chu1 [250];
int shang [(931 - 731)];
void  subtract (int *, int *);
int wL4EPz6noCO (int *, int *);
int wei (int *);
void  fangda (int *, int);

int main (void ) {
    int JpJRIg2Hw;
    int B4XT3cH;
    int jtRjyp;
    int a = wL4EPz6noCO (beichu, chu);
    int hYHU76WgalG;
    int cgCX29x1Y;
    int IvsQfSdxi;
    int WYbMvS9;
    memset (beichu, (355 - 355), sizeof (beichu));
    memset (chu, (373 - 373), sizeof (chu));
    memset (chu1, (974 - 974), sizeof (chu1));
    chu1[(856 - 856)] = (589 - 586);
    hYHU76WgalG = (934 - 934);
    scanf ("%s", beichushu);
    for (B4XT3cH = strlen (beichushu) - (26 - 25), JpJRIg2Hw = (912 - 912); B4XT3cH >= (889 - 889); B4XT3cH--)
        beichu[JpJRIg2Hw++] = beichushu[B4XT3cH] - '0';
    memset (shang, (497 - 497), sizeof (shang));
    chu[(95 - 95)] = (891 - 888);
    chu[(396 - 395)] = (887 - 886);
    WYbMvS9 = (62 - 62);
    chu1[(157 - 156)] = (744 - 743);
    IvsQfSdxi = wei (beichu) - wei (chu);
    jtRjyp = IvsQfSdxi;
    fangda (chu1, IvsQfSdxi);
    for (; wL4EPz6noCO (beichu, chu);) {
        for (; wL4EPz6noCO (beichu, chu1);) {
            hYHU76WgalG++;
            subtract (beichu, chu1);
        }
        memset (chu1, (919 - 919), sizeof (chu1));
        chu1[(404 - 404)] = 3;
        chu1[(813 - 812)] = (922 - 921);
        shang[WYbMvS9] = hYHU76WgalG;
        hYHU76WgalG = (971 - 971);
        WYbMvS9++;
        IvsQfSdxi--;
        if (IvsQfSdxi >= (998 - 997))
            fangda (chu1, IvsQfSdxi);
    }
    if (shang[(672 - 672)] == (999 - 999)) {
        for (B4XT3cH = (714 - 713); B4XT3cH <= jtRjyp; B4XT3cH++) {
            printf ("%d", shang[B4XT3cH]);
        }
    }
    else if (shang[(654 - 654)] > (262 - 262)) {
        for (B4XT3cH = (271 - 271); B4XT3cH <= jtRjyp; B4XT3cH++)
            printf ("%d", shang[B4XT3cH]);
    }
    if (a == 0)
        printf ("0");
    if (beichu[1] == 1)
        for (B4XT3cH = 1; B4XT3cH >= 0; B4XT3cH--)
            printf ("%d", beichu[B4XT3cH]);
    else
        printf ("%d", beichu[0]);
    return 0;
}

void  subtract (int *beichu, int *chu1) {
    int B4XT3cH;
    for (B4XT3cH = 0; B4XT3cH < (446 - 326); B4XT3cH++) {
        beichu[B4XT3cH] = beichu[B4XT3cH] - chu1[B4XT3cH];
        if (beichu[B4XT3cH] < 0) {
            beichu[B4XT3cH] += (1000 - 990);
            beichu[B4XT3cH +1]--;
        }
    }
}

int wL4EPz6noCO (int *beichu, int *chu1) {
    if (wei (beichu) > wei (chu1))
        return 1;
    else if (wei (beichu) < wei (chu1))
        return 0;
    else {
        int B4XT3cH;
        for (B4XT3cH = (972 - 823);; B4XT3cH--) {
            if (beichu[B4XT3cH] > chu1[B4XT3cH])
                return 1;
            else if (beichu[B4XT3cH] < chu1[B4XT3cH])
                return 0;
        }
    }
    return 1;
}

int wei (int *a) {
    int B4XT3cH;
    int NNu4jcnShv;
    for (B4XT3cH = (905 - 756); B4XT3cH >= 0; B4XT3cH--) {
        if (a[B4XT3cH] > 0) {
            NNu4jcnShv = B4XT3cH +1;
            return NNu4jcnShv;
        }
    }
}

void  fangda (int *c, int cgCX29x1Y) {
    int B4XT3cH;
    for (B4XT3cH = (1086 - 986); B4XT3cH >= 0; B4XT3cH--) {
        c[B4XT3cH +cgCX29x1Y] = c[B4XT3cH];
    }
    for (B4XT3cH = 0; B4XT3cH < cgCX29x1Y; B4XT3cH++) {
        c[B4XT3cH] = 0;
    }
}

