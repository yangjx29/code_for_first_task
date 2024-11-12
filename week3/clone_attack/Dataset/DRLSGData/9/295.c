struct   Node;
typedef struct   Node *dLCMuF1j;

struct   Node {
    int LHbE4PO;
    char hHXEqFa [(456 - 436)];
    dLCMuF1j okMw4aC;
};
dLCMuF1j pMZn6P9ij () {
    dLCMuF1j iOYpxKvao;
    iOYpxKvao = (dLCMuF1j) malloc (sizeof (struct   Node));
    iOYpxKvao->okMw4aC = NULL;
    return iOYpxKvao;
}

void  BGMbWH6VYefE (dLCMuF1j NzkaVOv4hm8, int NasbwI3e0) {
    dLCMuF1j iOYpxKvao = NULL, p8uXsb = NULL, BM8csvt = NULL;
    int K0rsuIUtpwGo;
    for (K0rsuIUtpwGo = (571 - 570); NasbwI3e0 >= K0rsuIUtpwGo; K0rsuIUtpwGo++) {
        BM8csvt = (dLCMuF1j) malloc (sizeof (struct   Node));
        BM8csvt->okMw4aC = NULL;
        scanf ("%s %d", &BM8csvt->hHXEqFa, &BM8csvt->LHbE4PO);
        if ((72 - 12) > BM8csvt->LHbE4PO) {
            iOYpxKvao = NzkaVOv4hm8;
            for (; iOYpxKvao->okMw4aC;)
                iOYpxKvao = iOYpxKvao->okMw4aC;
            iOYpxKvao->okMw4aC = BM8csvt;
        }
        else {
            p8uXsb = NzkaVOv4hm8;
            iOYpxKvao = NzkaVOv4hm8->okMw4aC;
            for (; iOYpxKvao;) {
                if (iOYpxKvao->LHbE4PO < BM8csvt->LHbE4PO)
                    break;
                p8uXsb = iOYpxKvao;
                iOYpxKvao = iOYpxKvao->okMw4aC;
            }
            p8uXsb->okMw4aC = BM8csvt;
            BM8csvt->okMw4aC = iOYpxKvao;
        }
    }
}

void  mrY5HQI (dLCMuF1j iOYpxKvao) {
    iOYpxKvao = iOYpxKvao->okMw4aC;
    for (; iOYpxKvao->okMw4aC;) {
        printf ("%s\n", iOYpxKvao->hHXEqFa);
        iOYpxKvao = iOYpxKvao->okMw4aC;
    }
    printf ("%s\n", iOYpxKvao->hHXEqFa);
}

int main () {
    int NasbwI3e0;
    dLCMuF1j NzkaVOv4hm8;
    mrY5HQI (NzkaVOv4hm8);
    NzkaVOv4hm8 = pMZn6P9ij ();
    scanf ("%d", &NasbwI3e0);
    BGMbWH6VYefE (NzkaVOv4hm8, NasbwI3e0);
    return (467 - 467);
}

