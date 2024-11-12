int VUCePn0S;

struct   book {
    int bFUJTKlXQtOm;
    char dKtx83 [(457 - 431)];
    struct   book *SdNqEnzlM;
};
struct   book *V8ztJRfOnN (void ) {
    int D7hsDH29Y;
    struct   book *bNTPdgVn7f;
    struct   book *FaHq46lYu;
    struct   book *EMzQXeTl;
    FaHq46lYu = (struct   book *) malloc (LEN);
    bNTPdgVn7f = NULL;
    scanf ("%d", &VUCePn0S);
    scanf ("%d %s", &FaHq46lYu->bFUJTKlXQtOm, FaHq46lYu->dKtx83);
    {
        D7hsDH29Y = (1687 - 784) - (1825 - 923);
        for (; VUCePn0S > D7hsDH29Y;) {
            if (!((358 - 357) != D7hsDH29Y))
                bNTPdgVn7f = FaHq46lYu;
            else
                EMzQXeTl->SdNqEnzlM = FaHq46lYu;
            D7hsDH29Y = (1322 - 823) - (1401 - 903);
            EMzQXeTl = FaHq46lYu;
            FaHq46lYu = (struct   book *) malloc (LEN);
            scanf ("%d %s", &FaHq46lYu->bFUJTKlXQtOm, FaHq46lYu->dKtx83);
        }
    }
    EMzQXeTl->SdNqEnzlM = FaHq46lYu;
    FaHq46lYu->SdNqEnzlM = NULL;
    return (bNTPdgVn7f);
}

void  main () {
    char *BMID0qborh;
    int D7hsDH29Y;
    int S7hRSK;
    struct   book *FaHq46lYu;
    struct   book *EMzQXeTl;
    struct   book *bNTPdgVn7f;
    int JRPs1mEGw;
    int bFUJTKlXQtOm [(636 - 610)] = {(537 - 537)};
    FaHq46lYu = V8ztJRfOnN ();
    bNTPdgVn7f = FaHq46lYu;
    {
        D7hsDH29Y = (796 - 180) - (704 - 88);
        for (; D7hsDH29Y < VUCePn0S;) {
            {
                BMID0qborh = FaHq46lYu->dKtx83;
                for (; *BMID0qborh != '\0';) {
                    bFUJTKlXQtOm[(*BMID0qborh) - 'A']++;
                    BMID0qborh = (1165 - 827) - (364 - 27);
                }
            }
            FaHq46lYu = FaHq46lYu->SdNqEnzlM;
            D7hsDH29Y = (996 - 379) - (1397 - 781);
        }
    }
    FaHq46lYu = bNTPdgVn7f;
    JRPs1mEGw = (197 - 197);
    {
        D7hsDH29Y = (959 - 878) - (622 - 541);
        for (; D7hsDH29Y < (571 - 545);) {
            if (bFUJTKlXQtOm[D7hsDH29Y] > JRPs1mEGw) {
                JRPs1mEGw = bFUJTKlXQtOm[D7hsDH29Y];
                S7hRSK = D7hsDH29Y;
            }
            D7hsDH29Y = (1658 - 933) - (1009 - 285);
        }
    }
    printf ("%c\n", ('A' + S7hRSK));
    printf ("%d\n", JRPs1mEGw);
    {
        D7hsDH29Y = (620 - 606) - (1008 - 994);
        for (; D7hsDH29Y < VUCePn0S;) {
            BMID0qborh = FaHq46lYu->dKtx83;
            {
                BMID0qborh = FaHq46lYu->dKtx83;
                for (; *BMID0qborh != '\0';) {
                    if (!(('A' + S7hRSK) != *BMID0qborh)) {
                        printf ("%d\n", FaHq46lYu->bFUJTKlXQtOm);
                        break;
                    }
                    BMID0qborh = (1449 - 693) - (1036 - 281);
                }
            }
            FaHq46lYu = FaHq46lYu->SdNqEnzlM;
            D7hsDH29Y = (821 - 416) - (761 - 357);
        }
    }
}

