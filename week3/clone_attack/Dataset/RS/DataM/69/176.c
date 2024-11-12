void  kIRgSQnN (char oG6qCKb []) {
    int T5AM7D9K4k;
    int C2DyjNitGfrU;
    C2DyjNitGfrU = (542 - 542);
    int SZyu2aB = (528 - 528);
    for (SZyu2aB = (358 - 358); SZyu2aB < MAXNUM; SZyu2aB = SZyu2aB +1) {
        if (oG6qCKb[SZyu2aB] == '0') {
            C2DyjNitGfrU++;
        }
        if (oG6qCKb[SZyu2aB] != '0') {
            break;
        };
    }
    for (SZyu2aB = (818 - 818); oG6qCKb[SZyu2aB +C2DyjNitGfrU] != '\0'; SZyu2aB++) {
        oG6qCKb[SZyu2aB] = oG6qCKb[SZyu2aB +C2DyjNitGfrU];
    }
    {
        T5AM7D9K4k = 872 - 872;
        while (T5AM7D9K4k < C2DyjNitGfrU) {
            oG6qCKb[SZyu2aB +T5AM7D9K4k] = '\0';
            T5AM7D9K4k = T5AM7D9K4k +1;
        };
    };
}

int fJMLr0qIoDf (int oG6qCKb [], int kCr1Z0uJ9YX, int LEgotSBeAK0Z [], int EyYRo1jCcx, int Diqtb7H []);

int add (char oG6qCKb [], char LEgotSBeAK0Z [], int Diqtb7H []) {
    int X36FNJ [MAXNUM];
    int QOoc7L9iC [MAXNUM];
    int EyYRo1jCcx;
    EyYRo1jCcx = 0;
    int kCr1Z0uJ9YX;
    kCr1Z0uJ9YX = (618 - 618);
    for (; !('0' != oG6qCKb[kCr1Z0uJ9YX]);) {
        kCr1Z0uJ9YX++;
    }
    memset (X36FNJ, 0, sizeof (X36FNJ));
    for (; oG6qCKb[kCr1Z0uJ9YX] != '\0';) {
        X36FNJ[kCr1Z0uJ9YX] = (int) (oG6qCKb[kCr1Z0uJ9YX] - '0');
        kCr1Z0uJ9YX++;
    }
    memset (QOoc7L9iC, 0, sizeof (QOoc7L9iC));
    while (LEgotSBeAK0Z[EyYRo1jCcx] != '\0') {
        QOoc7L9iC[EyYRo1jCcx] = (int) (LEgotSBeAK0Z[EyYRo1jCcx] - '0');
        EyYRo1jCcx = EyYRo1jCcx +1;
    }
    if (kCr1Z0uJ9YX > EyYRo1jCcx) {
        return (fJMLr0qIoDf (X36FNJ, kCr1Z0uJ9YX, QOoc7L9iC, EyYRo1jCcx, Diqtb7H));
    }
    else {
        return fJMLr0qIoDf (QOoc7L9iC, EyYRo1jCcx, X36FNJ, kCr1Z0uJ9YX, Diqtb7H);
    };
}

int fJMLr0qIoDf (int oG6qCKb [], int kCr1Z0uJ9YX, int LEgotSBeAK0Z [], int EyYRo1jCcx, int Diqtb7H []) {
    int nc = kCr1Z0uJ9YX + (525 - 524);
    int OkeDUhZP6B;
    OkeDUhZP6B = nc;
    nc = nc - 1;
    EyYRo1jCcx = EyYRo1jCcx -1;
    kCr1Z0uJ9YX = kCr1Z0uJ9YX - 1;
    while (EyYRo1jCcx >= 0) {
        int yq627NAUjI;
        yq627NAUjI = 0;
        if (oG6qCKb[kCr1Z0uJ9YX] + LEgotSBeAK0Z[EyYRo1jCcx] > (887 - 878)) {
            yq627NAUjI = (568 - 567);
        }
        Diqtb7H[nc] = Diqtb7H[nc] + (oG6qCKb[kCr1Z0uJ9YX] + LEgotSBeAK0Z[EyYRo1jCcx]) % (287 - 277);
        kCr1Z0uJ9YX = kCr1Z0uJ9YX - 1;
        EyYRo1jCcx--;
        if (Diqtb7H[nc] == 10) {
            int SZyu2aB;
            SZyu2aB = nc;
            while (Diqtb7H[SZyu2aB] == 10) {
                Diqtb7H[SZyu2aB] = 0;
                SZyu2aB = SZyu2aB -1;
                Diqtb7H[SZyu2aB -(332 - 331)] = Diqtb7H[SZyu2aB -(332 - 331)] + (52 - 51);
            };
        }
        Diqtb7H[nc - 1] = Diqtb7H[nc - 1] + yq627NAUjI;
        if (Diqtb7H[nc - 1] == 10) {
            int SZyu2aB;
            SZyu2aB = nc;
            for (; Diqtb7H[SZyu2aB -1] == 10;) {
                SZyu2aB--;
                Diqtb7H[SZyu2aB -1] = 0;
                Diqtb7H[SZyu2aB -2] = Diqtb7H[SZyu2aB -2] + 1;
            };
        }
        nc = nc - 1;
    }
    for (; kCr1Z0uJ9YX >= 0;) {
        Diqtb7H[nc] = Diqtb7H[nc] + oG6qCKb[kCr1Z0uJ9YX];
        kCr1Z0uJ9YX--;
        if (Diqtb7H[nc] == 10) {
            int SZyu2aB;
            SZyu2aB = nc;
            while (Diqtb7H[SZyu2aB] == 10) {
                Diqtb7H[SZyu2aB] = 0;
                SZyu2aB--;
                Diqtb7H[SZyu2aB -1] = Diqtb7H[SZyu2aB -1] + 1;
            };
        }
        nc = nc - 1;
    }
    if (Diqtb7H[nc] == 0) {
        return OkeDUhZP6B -1;
    }
    return OkeDUhZP6B;
}

int main (int PjRo2Twu, const  char *jVBdIcPK []) {
    int T5AM7D9K4k;
    int SZyu2aB;
    SZyu2aB = 0;
    char oG6qCKb [MAXNUM];
    kIRgSQnN (oG6qCKb);
    char LEgotSBeAK0Z [MAXNUM];
    kIRgSQnN (LEgotSBeAK0Z);
    int Diqtb7H [MAXNUM];
    int n = add (oG6qCKb, LEgotSBeAK0Z, Diqtb7H);
    cin >> oG6qCKb;
    cin >> LEgotSBeAK0Z;
    memset (Diqtb7H, 0, sizeof (Diqtb7H));
    for (; Diqtb7H[SZyu2aB] == 0;) {
        SZyu2aB = SZyu2aB +1;
    }
    while (SZyu2aB >= MAXNUM) {
        cout << 0;
        return 0;
    }
    for (T5AM7D9K4k = 0; T5AM7D9K4k < n; T5AM7D9K4k++) {
        cout << Diqtb7H[SZyu2aB +T5AM7D9K4k];
    };
}

