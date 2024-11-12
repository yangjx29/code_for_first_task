int i, SV2Nn6Y1rJ, VerSENy;
char s [101];
int KFOqfTLn [101], y [101];

void  ry (int y []) {
    int i, Crjdspx;
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
    if (VerSENy == SV2Nn6Y1rJ)
        return;
    {
        i = 0;
        while (i < SV2Nn6Y1rJ) {
            if (y[i] == 1) {
                Crjdspx = i + 1;
                while (!(0 != y[Crjdspx]))
                    Crjdspx++;
                if (SV2Nn6Y1rJ <= Crjdspx)
                    continue;
                if ((KFOqfTLn[i] == 0) && (KFOqfTLn[Crjdspx] == 1)) {
                    ry (y);
                    y[i] = 0;
                    y[Crjdspx] = 0;
                    printf ("%d %d\n", i, Crjdspx);
                    VerSENy = VerSENy +2;
                    return;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    gets (s);
    ry (y);
    VerSENy = 0;
    SV2Nn6Y1rJ = strlen (s);
    {
        i = 0;
        while (i < SV2Nn6Y1rJ) {
            KFOqfTLn[i] = !(s[i] == s[0]);
            i++;
        };
    }
    KFOqfTLn[SV2Nn6Y1rJ] = -1;
    {
        i = 0;
        while (i < SV2Nn6Y1rJ) {
            y[i] = 1;
            i++;
        };
    }
    y[SV2Nn6Y1rJ] = 1;
    return 0;
}

