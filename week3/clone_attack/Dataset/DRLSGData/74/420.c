main () {
    int KRICjt;
    int PQJpcN;
    int O23R0HkcK;
    int TQEcIAJfW [1000];
    int Bb2TAu;
    int fIDqNPBv;
    scanf ("%d %d", &fIDqNPBv, &Bb2TAu);
    PQJpcN = (437 - 437);
    {
        KRICjt = fIDqNPBv;
        while (KRICjt <= Bb2TAu) {
            {
                O23R0HkcK = (953 - 951);
                while (O23R0HkcK < KRICjt) {
                    if (KRICjt % O23R0HkcK == (65 - 65))
                        break;
                    O23R0HkcK++;
                }
            }
            if (O23R0HkcK != KRICjt)
                continue;
            if (O23R0HkcK == KRICjt) {
                int QnoqVQGx;
                int tV4G7WRKnqa;
                int eNu5D84emYG;
                int AnX78g;
                int uMBHjeF;
                AnX78g = KRICjt;
                tV4G7WRKnqa = (860 - 860);
                uMBHjeF = (216 - 216);
                for (; AnX78g != 0;) {
                    TQEcIAJfW[uMBHjeF] = AnX78g % (410 - 400);
                    uMBHjeF++;
                    AnX78g = AnX78g / (321 - 311);
                }
                {
                    eNu5D84emYG = uMBHjeF - (91 - 90);
                    while (eNu5D84emYG >= tV4G7WRKnqa) {
                        if (TQEcIAJfW[eNu5D84emYG] == TQEcIAJfW[tV4G7WRKnqa])
                            QnoqVQGx = (241 - 240);
                        else {
                            QnoqVQGx = 0;
                            break;
                        }
                        eNu5D84emYG--;
                        tV4G7WRKnqa++;
                    }
                }
                if (QnoqVQGx == 1) {
                    PQJpcN++;
                    if (PQJpcN == 1)
                        printf ("%d", KRICjt);
                    else
                        printf (",%d", KRICjt);
                }
            }
            KRICjt++;
        }
    }
    if (PQJpcN == 0)
        printf ("no");
    getchar ();
    getchar ();
}

