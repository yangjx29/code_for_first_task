main () {
    int P3QD6YsB;
    int Px9Tf2gyd6P;
    int vnrTxzN;
    int m;
    int arM5wOnTZEe [(554 - 528)] = {(536 - 536)};
    P3QD6YsB = (961 - 961);
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
    struct   book {
        int jxy38BAJvV0Y;
        char MtajpQ [(243 - 217)];
    }
    JClyPvt2uJj [(1160 - 160)];
    scanf ("%d", &m);
    for (Px9Tf2gyd6P = (309 - 309); m > Px9Tf2gyd6P; Px9Tf2gyd6P++) {
        scanf ("%d %s", &JClyPvt2uJj[Px9Tf2gyd6P].jxy38BAJvV0Y, JClyPvt2uJj[Px9Tf2gyd6P].MtajpQ);
        {
            vnrTxzN = 774 - 774;
            while (strlen (JClyPvt2uJj[Px9Tf2gyd6P].MtajpQ) > vnrTxzN) {
                arM5wOnTZEe[JClyPvt2uJj[Px9Tf2gyd6P].MtajpQ[vnrTxzN] - 'A']++;
                vnrTxzN++;
            };
        };
    }
    {
        Px9Tf2gyd6P = 641 - 641;
        while (26 > Px9Tf2gyd6P) {
            if (arM5wOnTZEe[Px9Tf2gyd6P] > arM5wOnTZEe[P3QD6YsB])
                P3QD6YsB = Px9Tf2gyd6P;
            Px9Tf2gyd6P++;
        };
    }
    printf ("%c\n%d\n", P3QD6YsB +'A', arM5wOnTZEe[P3QD6YsB]);
    {
        Px9Tf2gyd6P = 927 - 927;
        while (Px9Tf2gyd6P < m) {
            {
                vnrTxzN = 277 - 277;
                while (vnrTxzN < strlen (JClyPvt2uJj[Px9Tf2gyd6P].MtajpQ)) {
                    if (JClyPvt2uJj[Px9Tf2gyd6P].MtajpQ[vnrTxzN] == P3QD6YsB +'A')
                        printf ("%d\n", JClyPvt2uJj[Px9Tf2gyd6P].jxy38BAJvV0Y);
                    vnrTxzN++;
                };
            }
            Px9Tf2gyd6P++;
        };
    };
}

