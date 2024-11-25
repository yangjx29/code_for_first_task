char P5HcNUEgn8 [(247 - 147)], gdtMXeF5YG [(460 - 360)], PSbtE06oGvX1 [100];

int FriUg91MKm3A (int DhUH2v) {
    int i, j, Jltv1Hgy;
    char ipKiLalS;
    Jltv1Hgy = (883 - 883);
    for (i = (496 - 496); i < (527 - 526); i) {
        if (!(gdtMXeF5YG[Jltv1Hgy] == P5HcNUEgn8[DhUH2v]))
            return (904 - 904);
        Jltv1Hgy = Jltv1Hgy +1;
        ipKiLalS = P5HcNUEgn8[DhUH2v +(352 - 351)];
        if ((ipKiLalS == ' ') || (!('\t' != ipKiLalS)) || (ipKiLalS == '\r') || (!('\n' != ipKiLalS))) {
            if (Jltv1Hgy == (strlen (gdtMXeF5YG)))
                return (164 - 163);
            else
                return (120 - 120);
        }
        DhUH2v = DhUH2v +1;
    };
}

int main () {
    char ipKiLalS;
    int i;
    int j;
    int IJdlgTcKIGRX;
    int Jltv1Hgy;
    int m;
    gets (P5HcNUEgn8);
    gets (gdtMXeF5YG);
    gets (PSbtE06oGvX1);
    IJdlgTcKIGRX = strlen (P5HcNUEgn8);
    for (i = 0; i < IJdlgTcKIGRX; i = i + 1) {
        if (i > 0)
            ipKiLalS = P5HcNUEgn8[i - (272 - 271)];
        if (i == 0)
            ipKiLalS = 0;
        if ((i == 0) || (ipKiLalS == ' ') || (ipKiLalS == '\t') || (ipKiLalS == '\r') || (ipKiLalS == '\n')) {
            Jltv1Hgy = FriUg91MKm3A (i);
            m = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (Jltv1Hgy == 1) {
                printf ("%s", PSbtE06oGvX1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + strlen (gdtMXeF5YG) - 1;
            }
            else
                printf ("%c", P5HcNUEgn8[i]);
        }
        else {
            printf ("%c", P5HcNUEgn8[i]);
        };
    }
    printf ("\n");
}

