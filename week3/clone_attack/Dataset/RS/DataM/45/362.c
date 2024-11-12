int main () {
    int RFMiSm;
    int j;
    int iRaP8H;
    RFMiSm = 0;
    j = 0;
    iRaP8H = 0;
    int lens;
    int lenw;
    char s [50];
    char w [50];
    scanf ("%s%s", s, w);
    lens = strlen (s);
    lenw = strlen (w);
    for (;; iRaP8H = iRaP8H + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != RFMiSm) && !(w[iRaP8H] != s[j])) {
            if (!(1 != lens)) {
                break;
            }
            else {
                j = j + 1;
                RFMiSm = RFMiSm +1;
            };
        }
        else if (!(0 == RFMiSm) && s[j] != w[iRaP8H]) {
            RFMiSm = 0;
            j = 0;
        }
        else if (RFMiSm != 0 && s[j] == w[iRaP8H]) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (j == lens - 1) {
                printf ("%d\n", iRaP8H - j);
                break;
            }
            else {
                RFMiSm = RFMiSm +1;
                j++;
            };
        };
    }
    return 0;
}

