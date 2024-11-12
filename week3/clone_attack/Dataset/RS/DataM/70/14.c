struct   point {
    double  lFNWIMkHtET;
    double  y;
};
int main () {
    struct   point *ExLFVdkR;
    int WN8PG5vsK;
    int TKtZWibn;
    int BdtbSfe;
    double  Fq5LewG9f;
    double  RCpkxm8O1foB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    Fq5LewG9f = 0;
    scanf ("%d", &WN8PG5vsK);
    ExLFVdkR = (struct   point *) malloc (sizeof (struct   point) * WN8PG5vsK);
    for (TKtZWibn = 0; TKtZWibn < WN8PG5vsK; TKtZWibn++) {
        scanf ("%lf %lf", &((ExLFVdkR +TKtZWibn)->lFNWIMkHtET), &((ExLFVdkR +TKtZWibn)->y));
    }
    {
        TKtZWibn = 0;
        while (TKtZWibn < WN8PG5vsK) {
            {
                BdtbSfe = 0;
                while (BdtbSfe < WN8PG5vsK) {
                    RCpkxm8O1foB = ((ExLFVdkR +TKtZWibn)->lFNWIMkHtET - (ExLFVdkR +BdtbSfe)->lFNWIMkHtET) * ((ExLFVdkR +TKtZWibn)->lFNWIMkHtET - (ExLFVdkR +BdtbSfe)->lFNWIMkHtET) + ((ExLFVdkR +TKtZWibn)->y - (ExLFVdkR +BdtbSfe)->y) * ((ExLFVdkR +TKtZWibn)->y - (ExLFVdkR +BdtbSfe)->y);
                    BdtbSfe++;
                    if (RCpkxm8O1foB > Fq5LewG9f)
                        Fq5LewG9f = RCpkxm8O1foB;
                };
            }
            TKtZWibn++;
        };
    }
    printf ("%.4f", sqrt (Fq5LewG9f));
}

