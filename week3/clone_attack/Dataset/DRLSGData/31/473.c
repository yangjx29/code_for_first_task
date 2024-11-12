struct   Student {
    char O1tzk9E [(1034 - 34)];
    char vTiZOfNLzv [(1116 - 116)];
    char SeLBzA8C4KUd;
    int lKaOqTjes;
    char PBv6XT2Wr1hc [(1037 - 37)];
    char Shx2InO7 [(1073 - 73)];
    struct   Student *c7eBufSU6I0;
    struct   Student *CTRWVyPX;
};
int nHykb98SjEZR;

struct   Student *R7RdZb (void ) {
    struct   Student *RAOHUtvwbSQ;
    struct   Student *ad5HfuNSz;
    struct   Student *ZinjRHOgZNU;
    struct   Student *uG9eVd;
    RAOHUtvwbSQ = NULL;
    ZinjRHOgZNU = uG9eVd = (struct   Student *) malloc (LEN);
    scanf ("%s", ZinjRHOgZNU->O1tzk9E);
    nHykb98SjEZR = (440 - 440);
    for (; ZinjRHOgZNU->O1tzk9E[(686 - 686)] != 'e';) {
        scanf ("%s %c %d %s %s", ZinjRHOgZNU->vTiZOfNLzv, &ZinjRHOgZNU->SeLBzA8C4KUd, &ZinjRHOgZNU->lKaOqTjes, ZinjRHOgZNU->PBv6XT2Wr1hc, ZinjRHOgZNU->Shx2InO7);
        nHykb98SjEZR = nHykb98SjEZR + (609 - 608);
        if (!((209 - 208) != nHykb98SjEZR)) {
            RAOHUtvwbSQ = ZinjRHOgZNU;
            ZinjRHOgZNU->CTRWVyPX = NULL;
        }
        else {
            uG9eVd->c7eBufSU6I0 = ZinjRHOgZNU;
            ZinjRHOgZNU->CTRWVyPX = uG9eVd;
        }
        uG9eVd = ZinjRHOgZNU;
        ZinjRHOgZNU = (struct   Student *) malloc (LEN);
        scanf ("%s", ZinjRHOgZNU->O1tzk9E);
    }
    uG9eVd->c7eBufSU6I0 = NULL;
    ad5HfuNSz = uG9eVd;
    return ad5HfuNSz;
}

void  hPDA9aXHbG (struct   Student *ad5HfuNSz) {
    struct   Student *ANW0wO3t;
    ANW0wO3t = ad5HfuNSz;
    if (ad5HfuNSz != NULL)
        do {
            printf ("%s %s %c %d %s %s", ANW0wO3t->O1tzk9E, ANW0wO3t->vTiZOfNLzv, ANW0wO3t->SeLBzA8C4KUd, ANW0wO3t->lKaOqTjes, ANW0wO3t->PBv6XT2Wr1hc, ANW0wO3t->Shx2InO7);
            ANW0wO3t = ANW0wO3t->CTRWVyPX;
            putchar ('\n');
        }
        while (ANW0wO3t != NULL);
}

int main () {
    struct   Student *ANW0wO3t;
    hPDA9aXHbG (ANW0wO3t);
    ANW0wO3t = R7RdZb ();
    return (742 - 742);
}

