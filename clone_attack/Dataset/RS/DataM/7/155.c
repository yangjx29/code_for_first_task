int main () {
    char Tlp9F0Ss [257];
    char Dg4fBQHS6 [257];
    char Y6a8Dq [257];
    int flag;
    int cwLxqslTaA;
    int Hxc6P7EuD;
    int Ag6BGJQRv;
    int WvR0xCK;
    int j;
    int CONTGnmgiI;
    int c;
    flag = (448 - 448);
    scanf ("%s%s%s", Tlp9F0Ss, Dg4fBQHS6, Y6a8Dq);
    cwLxqslTaA = strlen (Tlp9F0Ss);
    Hxc6P7EuD = strlen (Dg4fBQHS6);
    Ag6BGJQRv = strlen (Y6a8Dq);
    j = 0;
    for (; Tlp9F0Ss[j] != '\0';) {
        if (!(Dg4fBQHS6[0] != Tlp9F0Ss[j])) {
            c = j;
            for (WvR0xCK = 0; WvR0xCK < Hxc6P7EuD; WvR0xCK++) {
                if (Tlp9F0Ss[j + WvR0xCK] != Dg4fBQHS6[WvR0xCK]) {
                    flag = 0;
                    break;
                };
            }
            if (WvR0xCK == Hxc6P7EuD) {
                flag = 1;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j++;
    }
    if (flag) {
        for (CONTGnmgiI = 0; CONTGnmgiI < c; CONTGnmgiI = CONTGnmgiI +1)
            printf ("%c", Tlp9F0Ss[CONTGnmgiI]);
        printf ("%s", Y6a8Dq);
        {
            CONTGnmgiI = c + Hxc6P7EuD;
            while (CONTGnmgiI < cwLxqslTaA) {
                printf ("%c", Tlp9F0Ss[CONTGnmgiI]);
                CONTGnmgiI = CONTGnmgiI +1;
            };
        };
    }
    else
        printf ("%s", Tlp9F0Ss);
    return 0;
}

