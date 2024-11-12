int main () {
    int DlxI54;
    int cmDcnGk3C69M;
    int TXOZpiTGFf87;
    int Ox4Yp5;
    DlxI54 = 1;
    char i13Ag6Hf [Ox4Yp5] [80];
    getchar ();
    scanf ("%d", &Ox4Yp5);
    for (cmDcnGk3C69M = (715 - 715); Ox4Yp5 > cmDcnGk3C69M; cmDcnGk3C69M++) {
        gets (i13Ag6Hf [cmDcnGk3C69M]);
        DlxI54 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('a' <= i13Ag6Hf[cmDcnGk3C69M][(97 - 97)] && i13Ag6Hf[cmDcnGk3C69M][0] <= 'z') || ('A' <= i13Ag6Hf[cmDcnGk3C69M][0] && i13Ag6Hf[cmDcnGk3C69M][0] <= 'Z') || i13Ag6Hf[cmDcnGk3C69M][0] == '_') {
            for (TXOZpiTGFf87 = 1; TXOZpiTGFf87 < strlen (i13Ag6Hf[cmDcnGk3C69M]); TXOZpiTGFf87 = TXOZpiTGFf87 +1)
                if ((i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] >= 'a' && i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] <= 'z') || (i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] >= 'A' && i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] <= 'Z') || i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] == '_' || (i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] >= '0' && i13Ag6Hf[cmDcnGk3C69M][TXOZpiTGFf87] <= '9'))
                    DlxI54 = 1;
                else {
                    DlxI54 = 0;
                    break;
                };
        }
        else {
            DlxI54 = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%d\n", DlxI54);
    };
}

