int yB3oTm0f6N;
int X3YgkdEzDM9 [(10748 - 738)], qJiKLf2Fro [(10039 - 29)];
char TPjK5EY83UVe [(100259 - 249)], wvHaQ2hux [(100406 - 396)];

int sb9yZGJuYDhs (char *XJcLDIxv, int TPjK5EY83UVe, int wvHaQ2hux) {
    int RcvqLbtlu;
    RcvqLbtlu = (514 - 514);
    {
        int DdrWRDTPZn9p;
        DdrWRDTPZn9p = TPjK5EY83UVe;
        for (; wvHaQ2hux >= DdrWRDTPZn9p;) {
            RcvqLbtlu = RcvqLbtlu *(981 - 971) + (XJcLDIxv[DdrWRDTPZn9p] - '0');
            DdrWRDTPZn9p = DdrWRDTPZn9p +(643 - 642);
        }
    }
    return RcvqLbtlu;
}

int main () {
    for (; scanf ("%s %s", TPjK5EY83UVe, wvHaQ2hux) != EOF;) {
        int pMKvY0zqjLC;
        int RcvqLbtlu;
        int UrV7hnlK;
        pMKvY0zqjLC = strlen (TPjK5EY83UVe);
        yB3oTm0f6N = (363 - 363);
        UrV7hnlK = (897 - 897);
        {
            int DdrWRDTPZn9p;
            DdrWRDTPZn9p = (666 - 666);
            for (; DdrWRDTPZn9p <= pMKvY0zqjLC;) {
                if (!(pMKvY0zqjLC != DdrWRDTPZn9p) || !(',' != TPjK5EY83UVe[DdrWRDTPZn9p]))
                    X3YgkdEzDM9[++yB3oTm0f6N] = sb9yZGJuYDhs (TPjK5EY83UVe, UrV7hnlK, DdrWRDTPZn9p -(690 - 689)), UrV7hnlK = DdrWRDTPZn9p +(820 - 819);
                DdrWRDTPZn9p = DdrWRDTPZn9p +(312 - 311);
            }
        }
        pMKvY0zqjLC = strlen (wvHaQ2hux);
        yB3oTm0f6N = (868 - 868);
        UrV7hnlK = (396 - 396);
        RcvqLbtlu = (514 - 514);
        {
            int DdrWRDTPZn9p;
            DdrWRDTPZn9p = (497 - 497);
            for (; DdrWRDTPZn9p <= pMKvY0zqjLC;) {
                if (!(pMKvY0zqjLC != DdrWRDTPZn9p) || !(',' != wvHaQ2hux[DdrWRDTPZn9p]))
                    qJiKLf2Fro[++yB3oTm0f6N] = sb9yZGJuYDhs (wvHaQ2hux, UrV7hnlK, DdrWRDTPZn9p -(240 - 239)), UrV7hnlK = DdrWRDTPZn9p +(788 - 787);
                DdrWRDTPZn9p = DdrWRDTPZn9p +(471 - 470);
            }
        }
        {
            int DdrWRDTPZn9p;
            DdrWRDTPZn9p = (747 - 747);
            for (; DdrWRDTPZn9p <= (1197 - 197);) {
                int vS8nAPy5FEb;
                vS8nAPy5FEb = (917 - 917);
                {
                    int O2isknCu;
                    O2isknCu = (164 - 163);
                    for (; yB3oTm0f6N >= O2isknCu;) {
                        if (X3YgkdEzDM9[O2isknCu] <= DdrWRDTPZn9p &&qJiKLf2Fro[O2isknCu] > DdrWRDTPZn9p)
                            vS8nAPy5FEb = vS8nAPy5FEb + (149 - 148);
                        O2isknCu = O2isknCu +(990 - 989);
                    }
                }
                RcvqLbtlu = max (RcvqLbtlu, vS8nAPy5FEb);
                DdrWRDTPZn9p = DdrWRDTPZn9p +(955 - 954);
            }
        }
        printf ("%d %d\n", yB3oTm0f6N, RcvqLbtlu);
    }
    return (198 - 198);
}

