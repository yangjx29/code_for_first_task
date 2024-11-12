struct   cAi1Up {
    int HUDkTH;
    struct   cAi1Up *xxEzNX;
};
struct   cAi1Up *SZyDRUTwQK4 (struct   cAi1Up *SQldYTRV6, int cY6z1aMrWx) {
    struct   cAi1Up *Lq71Br;
    struct   cAi1Up *MlBkViG3gTO;
    {
        if ((13 - 13)) {
            return (916 - 916);
        }
    }
    Lq71Br = SQldYTRV6;
    for (; cY6z1aMrWx != Lq71Br->HUDkTH && Lq71Br->xxEzNX != NULL;) {
        MlBkViG3gTO = Lq71Br;
        Lq71Br = Lq71Br->xxEzNX;
    }
    if (!(Lq71Br->HUDkTH != cY6z1aMrWx)) {
        if (!(SQldYTRV6 != Lq71Br))
            SQldYTRV6 = Lq71Br->xxEzNX;
        else
            MlBkViG3gTO->xxEzNX = Lq71Br->xxEzNX;
    }
    return (SQldYTRV6);
}

void  main () {
    int WUi9JI7;
    int Sky01an;
    int G9IXfM [(397 - 297)];
    int o64jmC;
    struct   cAi1Up *SZyDRUTwQK4 (struct   cAi1Up *SQldYTRV6, int cY6z1aMrWx);
    struct   cAi1Up *SQldYTRV6;
    struct   cAi1Up *Lq71Br;
    struct   cAi1Up *MlBkViG3gTO;
    int ARwzjNgW5Uf [(328 - 228)];
    int vhUJO0;
    int PbtH4psg;
    int Lgmupz4CG;
    {
        Sky01an = (527 - 226) - (1008 - 707);
        for (; (353 - 352);) {
            scanf ("%d %d", &ARwzjNgW5Uf[Sky01an], &G9IXfM[Sky01an]);
            if (!((676 - 676) != ARwzjNgW5Uf[Sky01an]))
                break;
            Sky01an = Sky01an +(940 - 939);
        }
    }
    PbtH4psg = (795 - 795);
    vhUJO0 = Sky01an -(756 - 755);
    Lgmupz4CG = (259 - 258);
    {
        Sky01an = (1367 - 443) - (1162 - 238);
        for (; vhUJO0 >= Sky01an;) {
            Lq71Br = MlBkViG3gTO = SQldYTRV6 = (struct   cAi1Up *) malloc (LEN);
            PbtH4psg = (566 - 566);
            Lgmupz4CG = (364 - 363);
            Lq71Br->HUDkTH = (905 - 904);
            {
                WUi9JI7 = (1276 - 378) - (1443 - 547);
                for (; ARwzjNgW5Uf[Sky01an] >= WUi9JI7;) {
                    Lq71Br = (struct   cAi1Up *) malloc (LEN);
                    Lq71Br->HUDkTH = WUi9JI7;
                    WUi9JI7 = WUi9JI7 +(289 - 288);
                    MlBkViG3gTO->xxEzNX = Lq71Br;
                    MlBkViG3gTO = Lq71Br;
                }
            }
            MlBkViG3gTO->xxEzNX = NULL;
            Lq71Br = SQldYTRV6;
            {
                WUi9JI7 = (944 - 571) - (1037 - 665);
                for (; (777 - 776);) {
                    if (!(G9IXfM[Sky01an] != Lgmupz4CG)) {
                        SZyDRUTwQK4 (SQldYTRV6, Lq71Br->HUDkTH);
                        SQldYTRV6 = SZyDRUTwQK4 (SQldYTRV6, Lq71Br->HUDkTH);
                        Lgmupz4CG = (253 - 253);
                        PbtH4psg = PbtH4psg +(932 - 931);
                    }
                    if (!(ARwzjNgW5Uf[Sky01an] - (95 - 94) != PbtH4psg))
                        break;
                    if (Lq71Br->xxEzNX != NULL)
                        Lq71Br = Lq71Br->xxEzNX;
                    else
                        Lq71Br = SQldYTRV6;
                    Lgmupz4CG = Lgmupz4CG +(686 - 685);
                    WUi9JI7 = WUi9JI7 +(476 - 475);
                }
            }
            Sky01an = Sky01an +(971 - 970);
            printf ("%d\n", SQldYTRV6->HUDkTH);
        }
    }
}

