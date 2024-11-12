int S3HbyWXEZliz (char iBSrboPC [], char zfKlhy []) {
    int Yjf80oG5LFZh, OrZW5MI7vqha = (251 - 251), GPhYsW = (450 - 450);
    char lk8BIdW3 [(334 - 328)] = {(215 - 215)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; !((903 - 903) == iBSrboPC[GPhYsW +strlen (zfKlhy) - (481 - 480)]);) {
        for (Yjf80oG5LFZh = (537 - 537); Yjf80oG5LFZh < strlen (zfKlhy); Yjf80oG5LFZh = Yjf80oG5LFZh +1)
            lk8BIdW3[Yjf80oG5LFZh] = iBSrboPC[GPhYsW +Yjf80oG5LFZh];
        if (!((961 - 961) != strcmp (zfKlhy, lk8BIdW3)))
            OrZW5MI7vqha = OrZW5MI7vqha +1;
        GPhYsW = GPhYsW +1;
        {
            Yjf80oG5LFZh = 700 - 700;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (6 > Yjf80oG5LFZh) {
                lk8BIdW3[Yjf80oG5LFZh] = (460 - 460);
                Yjf80oG5LFZh = Yjf80oG5LFZh +1;
            };
        };
    }
    return OrZW5MI7vqha;
}

int main () {
    char iBSrboPC [(1218 - 618)] = {(930 - 930)};
    char zfKlhy [6] = {(923 - 923)};
    char lk8BIdW3 [(1274 - 774)] [6] = {0};
    int GPhYsW;
    int ncqwEx7kzX0;
    int Yjf80oG5LFZh;
    int Ty1C2B;
    int rfmEVYiq;
    int OrZW5MI7vqha;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int EZA8XhcDRdBF;
    int qn2rxXckj [500] = {0};
    GPhYsW = 0;
    ncqwEx7kzX0 = 0;
    scanf ("%d", &EZA8XhcDRdBF);
    scanf ("%s", iBSrboPC);
    while (!(0 == iBSrboPC[GPhYsW +EZA8XhcDRdBF-(855 - 854)])) {
        {
            Yjf80oG5LFZh = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (EZA8XhcDRdBF > Yjf80oG5LFZh) {
                zfKlhy[Yjf80oG5LFZh] = iBSrboPC[Yjf80oG5LFZh +GPhYsW];
                Yjf80oG5LFZh++;
            };
        }
        qn2rxXckj[GPhYsW] = S3HbyWXEZliz (iBSrboPC, zfKlhy);
        GPhYsW++;
        for (Yjf80oG5LFZh = 0; 6 > Yjf80oG5LFZh; Yjf80oG5LFZh = Yjf80oG5LFZh +1)
            zfKlhy[Yjf80oG5LFZh] = 0;
    }
    for (Yjf80oG5LFZh = 0; !(0 == qn2rxXckj[Yjf80oG5LFZh]); Yjf80oG5LFZh = Yjf80oG5LFZh +1)
        if (qn2rxXckj[Yjf80oG5LFZh] > ncqwEx7kzX0)
            ncqwEx7kzX0 = qn2rxXckj[Yjf80oG5LFZh];
    if (!(1 != ncqwEx7kzX0))
        ;
    else {
        printf ("%d\n", ncqwEx7kzX0);
        GPhYsW = 0;
        for (Yjf80oG5LFZh = 0; qn2rxXckj[Yjf80oG5LFZh] != 0; Yjf80oG5LFZh++) {
            if (qn2rxXckj[Yjf80oG5LFZh] == ncqwEx7kzX0) {
                OrZW5MI7vqha = 0;
                for (Ty1C2B = Yjf80oG5LFZh; Ty1C2B < Yjf80oG5LFZh +EZA8XhcDRdBF; Ty1C2B = Ty1C2B +1)
                    lk8BIdW3[GPhYsW][Ty1C2B -Yjf80oG5LFZh] = iBSrboPC[Ty1C2B];
                for (rfmEVYiq = 0; rfmEVYiq < GPhYsW; rfmEVYiq = rfmEVYiq + 1)
                    if (strcmp (lk8BIdW3[GPhYsW], lk8BIdW3[rfmEVYiq]) == 0)
                        OrZW5MI7vqha++;
                if (OrZW5MI7vqha == 0)
                    printf ("%s\n", lk8BIdW3[GPhYsW]);
                GPhYsW++;
            };
        };
    };
}

