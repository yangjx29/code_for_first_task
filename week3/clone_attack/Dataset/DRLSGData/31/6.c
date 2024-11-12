struct   stu {
    char wqO0QKRN6 [(546 - 526)];
    char d14UbvN [(59 - 39)];
    char Mmow4fIRS0;
    int ZrkeQ7VI3;
    float mRwyE0gYN;
    char A35J2Gq [(73 - 53)];
    struct   stu *NvNQ7lp;
};
struct   stu *ie4SfrU3l9 () {
    struct   stu *gzqk1HYX;
    oosfA4;
    struct   stu *zJzknQj2VbO;
    struct   stu *rq3ruaY5;
    gzqk1HYX = zJzknQj2VbO = rq3ruaY5 = (struct   stu *) malloc (LEN);
    gzqk1HYX->NvNQ7lp = NULL;
    scanf ("%s", zJzknQj2VbO->wqO0QKRN6);
    {
        for (; true;) {
            zJzknQj2VbO = (struct   stu *) malloc (LEN);
            scanf ("%s", zJzknQj2VbO->wqO0QKRN6);
            if (zJzknQj2VbO->wqO0QKRN6[(255 - 255)] != 'e') {
                oosfA4;
                zJzknQj2VbO->NvNQ7lp = rq3ruaY5;
                rq3ruaY5 = zJzknQj2VbO;
            }
            else {
                break;
            }
        }
    }
    return (rq3ruaY5);
}

int main () {
    struct   stu *wFJyIT;
    struct   stu *kA2oh0Bfbq7V;
    kA2oh0Bfbq7V = ie4SfrU3l9 ();
    {
        wFJyIT = kA2oh0Bfbq7V;
        for (; wFJyIT != NULL;) {
            printf ("%s %s %c %d %g %s\n", wFJyIT->wqO0QKRN6, wFJyIT->d14UbvN, wFJyIT->Mmow4fIRS0, wFJyIT->ZrkeQ7VI3, wFJyIT->mRwyE0gYN, wFJyIT->A35J2Gq);
            wFJyIT = wFJyIT->NvNQ7lp;
        }
    }
}

