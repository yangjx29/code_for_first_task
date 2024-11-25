int main () {
    int vr9iugx, C0SRIl1NjHom, j, Zkrvwb = (821 - 820);
    double  DbL1I8Fvz [(449 - 429)], yh50Tdljk [(423 - 403)], D2ZAsF8gTm [20], ynDrhOAH2BiX;
    struct   position {
        double  DbL1I8Fvz;
        double  hN8riLo;
        double  yh50Tdljk;
        double  ybLYtUP;
        double  D2ZAsF8gTm;
        double  gwUkSROHP;
        double  rYdazi;
    }
    KMeLl5hTE3oS [(173 - 73)];
    cin >> vr9iugx;
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
    for (C0SRIl1NjHom = (899 - 898); vr9iugx >= C0SRIl1NjHom; C0SRIl1NjHom = C0SRIl1NjHom +1) {
        cin >> DbL1I8Fvz[C0SRIl1NjHom] >> yh50Tdljk[C0SRIl1NjHom] >> D2ZAsF8gTm[C0SRIl1NjHom];
    }
    for (C0SRIl1NjHom = (331 - 330); C0SRIl1NjHom <= vr9iugx; C0SRIl1NjHom = C0SRIl1NjHom +1) {
        for (j = C0SRIl1NjHom +(883 - 882); j <= vr9iugx; j++) {
            KMeLl5hTE3oS[Zkrvwb].DbL1I8Fvz = DbL1I8Fvz[C0SRIl1NjHom];
            KMeLl5hTE3oS[Zkrvwb].hN8riLo = DbL1I8Fvz[j];
            KMeLl5hTE3oS[Zkrvwb].yh50Tdljk = yh50Tdljk[C0SRIl1NjHom];
            KMeLl5hTE3oS[Zkrvwb].ybLYtUP = yh50Tdljk[j];
            KMeLl5hTE3oS[Zkrvwb].D2ZAsF8gTm = D2ZAsF8gTm[C0SRIl1NjHom];
            KMeLl5hTE3oS[Zkrvwb].gwUkSROHP = D2ZAsF8gTm[j];
            KMeLl5hTE3oS[Zkrvwb].rYdazi = sqrt ((DbL1I8Fvz[C0SRIl1NjHom] - DbL1I8Fvz[j]) * (DbL1I8Fvz[C0SRIl1NjHom] - DbL1I8Fvz[j]) + (yh50Tdljk[C0SRIl1NjHom] - yh50Tdljk[j]) * (yh50Tdljk[C0SRIl1NjHom] - yh50Tdljk[j]) + (D2ZAsF8gTm[C0SRIl1NjHom] - D2ZAsF8gTm[j]) * (D2ZAsF8gTm[C0SRIl1NjHom] - D2ZAsF8gTm[j]));
            Zkrvwb = Zkrvwb +1;
        };
    }
    {
        C0SRIl1NjHom = 112 - 111;
        while (C0SRIl1NjHom > (993 - 993)) {
            {
                j = 1;
                while (j < C0SRIl1NjHom) {
                    if (KMeLl5hTE3oS[j].rYdazi < KMeLl5hTE3oS[j + 1].rYdazi) {
                        swap (KMeLl5hTE3oS[j].DbL1I8Fvz, KMeLl5hTE3oS[j + 1].DbL1I8Fvz);
                        swap (KMeLl5hTE3oS[j].yh50Tdljk, KMeLl5hTE3oS[j + 1].yh50Tdljk);
                        swap (KMeLl5hTE3oS[j].D2ZAsF8gTm, KMeLl5hTE3oS[j + 1].D2ZAsF8gTm);
                        swap (KMeLl5hTE3oS[j].hN8riLo, KMeLl5hTE3oS[j + 1].hN8riLo);
                        swap (KMeLl5hTE3oS[j].ybLYtUP, KMeLl5hTE3oS[j + 1].ybLYtUP);
                        swap (KMeLl5hTE3oS[j].gwUkSROHP, KMeLl5hTE3oS[j + 1].gwUkSROHP);
                        swap (KMeLl5hTE3oS[j].rYdazi, KMeLl5hTE3oS[j + 1].rYdazi);
                    }
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
                    j = j + 1;
                };
            }
            C0SRIl1NjHom = C0SRIl1NjHom -1;
        };
    }
    for (C0SRIl1NjHom = 1; C0SRIl1NjHom <= Zkrvwb -1; C0SRIl1NjHom++) {
        cout << '(' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].DbL1I8Fvz << ',' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].yh50Tdljk << ',' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].D2ZAsF8gTm << ')' << '-' << '(' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].hN8riLo << ',' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].ybLYtUP << ',' << (int) KMeLl5hTE3oS[C0SRIl1NjHom].gwUkSROHP << ')' << '=' << fixed << setprecision ((109 - 107)) << KMeLl5hTE3oS[C0SRIl1NjHom].rYdazi << endl;
    }
    return (659 - 659);
}

