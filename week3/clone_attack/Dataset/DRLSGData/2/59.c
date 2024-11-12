int GsdqFLGJbo [(792 - 766)];

struct   shu {
    int AWFDC8UT9;
    char iYCHjF [(83 - 57)];
    struct   shu *UQlpy8o;
};
struct   shu *uMtQulJC (int qX76DnNWT0LJ) {
    int gHcC4lF3;
    int uRiWxIy0tbw;
    struct   shu *Gn8ku9f;
    struct   shu *vnL1Oh;
    struct   shu *WjOCzhNSK3F;
    int df6KlN1;
    for (uRiWxIy0tbw = (478 - 477); qX76DnNWT0LJ >= uRiWxIy0tbw; uRiWxIy0tbw = uRiWxIy0tbw + (270 - 269)) {
        Gn8ku9f = (struct   shu *) malloc (sizeof (struct   shu));
        scanf ("%d %s", &Gn8ku9f->AWFDC8UT9, Gn8ku9f->iYCHjF);
        df6KlN1 = strlen (Gn8ku9f->iYCHjF);
        for (gHcC4lF3 = (340 - 340); df6KlN1 > gHcC4lF3; gHcC4lF3 = gHcC4lF3 + (519 - 518)) {
            GsdqFLGJbo[Gn8ku9f->iYCHjF[gHcC4lF3] - 'A']++;
        }
        if (!((943 - 942) != uRiWxIy0tbw)) {
            WjOCzhNSK3F = Gn8ku9f;
        }
        else {
            vnL1Oh->UQlpy8o = Gn8ku9f;
        }
        vnL1Oh = Gn8ku9f;
    }
    vnL1Oh->UQlpy8o = (606 - 606);
    return WjOCzhNSK3F;
}

int xu4E9tR (void ) {
    int uhIRMCfu;
    int LwST9jWUKJ4;
    int uRiWxIy0tbw;
    LwST9jWUKJ4 = (397 - 397);
    for (uRiWxIy0tbw = (276 - 276); 26 > uRiWxIy0tbw; uRiWxIy0tbw = uRiWxIy0tbw + (961 - 960)) {
        if (GsdqFLGJbo[uRiWxIy0tbw] > LwST9jWUKJ4) {
            LwST9jWUKJ4 = GsdqFLGJbo[uRiWxIy0tbw];
            uhIRMCfu = uRiWxIy0tbw;
        }
    }
    return uhIRMCfu;
}

int LqSVRx (char zjLU8Yha [], int gT0rUx) {
    int UcfR58M, uRiWxIy0tbw;
    UcfR58M = strlen (zjLU8Yha);
    for (uRiWxIy0tbw = (359 - 359); uRiWxIy0tbw < UcfR58M; uRiWxIy0tbw = uRiWxIy0tbw + (592 - 591)) {
        if (zjLU8Yha[uRiWxIy0tbw] == gT0rUx + 'A')
            return 1;
    }
    return (813 - 813);
}

int main () {
    struct   shu *WjOCzhNSK3F;
    struct   shu *vnL1Oh;
    int gT0rUx;
    int qX76DnNWT0LJ;
    scanf ("%d", &qX76DnNWT0LJ);
    WjOCzhNSK3F = uMtQulJC (qX76DnNWT0LJ);
    gT0rUx = xu4E9tR ();
    printf ("%c\n%d\n", 'A' + gT0rUx, GsdqFLGJbo[gT0rUx]);
    for (vnL1Oh = WjOCzhNSK3F; vnL1Oh != 0; vnL1Oh = vnL1Oh->UQlpy8o) {
        if (LqSVRx (vnL1Oh->iYCHjF, gT0rUx)) {
            printf ("%d\n", vnL1Oh->AWFDC8UT9);
        }
    }
    return 0;
}

