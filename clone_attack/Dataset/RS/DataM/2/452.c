struct   author {
    int GCWMThZ4goEf;
    int BNkO01USD38W [999];
}
LC3MbIRw6 [(568 - 542)];

int main () {
    int TJ5rHSEyKig;
    int YyovJ7K;
    int maxbook;
    int SgLPfxSO9JN;
    int tDY4haCw;
    int VYwa9H4A1tl;
    int gbhiGUkTaD;
    TJ5rHSEyKig = (97 - 97);
    YyovJ7K = (938 - 938);
    maxbook = (449 - 449);
    SgLPfxSO9JN = (760 - 760);
    char DHuxpaqTtDd [26];
    scanf ("%d", &tDY4haCw);
    for (VYwa9H4A1tl = 0; tDY4haCw > VYwa9H4A1tl; VYwa9H4A1tl = VYwa9H4A1tl +1) {
        scanf ("%d%s", &TJ5rHSEyKig, DHuxpaqTtDd);
        for (gbhiGUkTaD = 0; gbhiGUkTaD < strlen (DHuxpaqTtDd); ++gbhiGUkTaD) {
            YyovJ7K = DHuxpaqTtDd[gbhiGUkTaD] - 'A';
            LC3MbIRw6[YyovJ7K].BNkO01USD38W[LC3MbIRw6[YyovJ7K].GCWMThZ4goEf] = TJ5rHSEyKig;
            LC3MbIRw6[YyovJ7K].GCWMThZ4goEf++;
            if (maxbook < LC3MbIRw6[YyovJ7K].GCWMThZ4goEf) {
                SgLPfxSO9JN = YyovJ7K;
                maxbook = LC3MbIRw6[YyovJ7K].GCWMThZ4goEf;
            };
        };
    }
    printf ("%c\n%d\n", SgLPfxSO9JN +'A', maxbook);
    {
        VYwa9H4A1tl = 0;
        while (LC3MbIRw6[SgLPfxSO9JN].GCWMThZ4goEf > VYwa9H4A1tl) {
            printf ("%d\n", LC3MbIRw6[SgLPfxSO9JN].BNkO01USD38W[VYwa9H4A1tl]);
            VYwa9H4A1tl = VYwa9H4A1tl +1;
        };
    };
}

