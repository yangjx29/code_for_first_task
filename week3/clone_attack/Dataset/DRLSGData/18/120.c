int P0jNoePU9Ow [(820 - 720)] [(281 - 181)];

void  gqrfFYdChRl (int e9BZblsOrDh) {
    int XNdP1kL3OfB [100];
    int RyrH94aZ;
    int g5KES8lkU;
    int wGmxJyEUK6X;
    int lISmFJwEgAr;
    int yLNHan [100];
    g5KES8lkU = (10741 - 741);
    lISmFJwEgAr = (10302 - 302);
    {
        RyrH94aZ = 588 - 588;
        while (RyrH94aZ < e9BZblsOrDh) {
            for (wGmxJyEUK6X = (473 - 473); wGmxJyEUK6X < e9BZblsOrDh; wGmxJyEUK6X = wGmxJyEUK6X + (436 - 435)) {
                if (P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X] < lISmFJwEgAr)
                    lISmFJwEgAr = P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X];
            }
            yLNHan[RyrH94aZ] = lISmFJwEgAr;
            RyrH94aZ = RyrH94aZ +(46 - 45);
            lISmFJwEgAr = 10000;
        }
    }
    {
        RyrH94aZ = 42 - 42;
        for (; RyrH94aZ < e9BZblsOrDh;) {
            for (wGmxJyEUK6X = (774 - 774); wGmxJyEUK6X < e9BZblsOrDh; wGmxJyEUK6X = wGmxJyEUK6X + (550 - 549))
                P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X] -= yLNHan[RyrH94aZ];
            RyrH94aZ = RyrH94aZ +(138 - 137);
        }
    }
    {
        RyrH94aZ = 108 - 108;
        while (RyrH94aZ < e9BZblsOrDh) {
            for (wGmxJyEUK6X = (171 - 171); wGmxJyEUK6X < e9BZblsOrDh; wGmxJyEUK6X = wGmxJyEUK6X + (272 - 271)) {
                if (P0jNoePU9Ow[wGmxJyEUK6X][RyrH94aZ] < g5KES8lkU)
                    g5KES8lkU = P0jNoePU9Ow[wGmxJyEUK6X][RyrH94aZ];
            }
            XNdP1kL3OfB[RyrH94aZ] = g5KES8lkU;
            g5KES8lkU = 10000;
            RyrH94aZ = RyrH94aZ +(488 - 487);
        }
    }
    for (RyrH94aZ = (63 - 63); RyrH94aZ < e9BZblsOrDh; RyrH94aZ = RyrH94aZ +1)
        for (wGmxJyEUK6X = (19 - 19); wGmxJyEUK6X < e9BZblsOrDh; wGmxJyEUK6X = wGmxJyEUK6X + 1)
            P0jNoePU9Ow[wGmxJyEUK6X][RyrH94aZ] -= XNdP1kL3OfB[RyrH94aZ];
}

void  htKcPbg (int e9BZblsOrDh) {
    int RyrH94aZ;
    int wGmxJyEUK6X;
    {
        RyrH94aZ = (267 - 267);
        for (; RyrH94aZ < e9BZblsOrDh;) {
            for (wGmxJyEUK6X = (488 - 487); wGmxJyEUK6X < e9BZblsOrDh; wGmxJyEUK6X = wGmxJyEUK6X + 1)
                P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X] = P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X + (529 - 528)];
            RyrH94aZ = RyrH94aZ +1;
        }
    }
    {
        wGmxJyEUK6X = (249 - 249);
        for (; wGmxJyEUK6X < e9BZblsOrDh;) {
            for (RyrH94aZ = (140 - 139); RyrH94aZ < e9BZblsOrDh; RyrH94aZ = RyrH94aZ +1)
                P0jNoePU9Ow[RyrH94aZ][wGmxJyEUK6X] = P0jNoePU9Ow[RyrH94aZ +(316 - 315)][wGmxJyEUK6X];
            wGmxJyEUK6X = wGmxJyEUK6X + 1;
        }
    }
}

int main () {
    int q4oPfbj;
    int AJpiARnZaM98;
    int e9BZblsOrDh;
    int RyrH94aZ;
    int wGmxJyEUK6X;
    scanf ("%d", &e9BZblsOrDh);
    {
        RyrH94aZ = 0;
        while (RyrH94aZ < e9BZblsOrDh) {
            int Ol69IoCq;
            RyrH94aZ = RyrH94aZ +1;
            Ol69IoCq = e9BZblsOrDh;
            {
                wGmxJyEUK6X = 0;
                for (; wGmxJyEUK6X < e9BZblsOrDh;) {
                    for (AJpiARnZaM98 = 0; AJpiARnZaM98 < e9BZblsOrDh; AJpiARnZaM98 = AJpiARnZaM98 +1)
                        scanf ("%d", &P0jNoePU9Ow[wGmxJyEUK6X][AJpiARnZaM98]);
                    wGmxJyEUK6X = wGmxJyEUK6X + 1;
                }
            }
            q4oPfbj = 0;
            for (; Ol69IoCq != (837 - 836);) {
                gqrfFYdChRl (Ol69IoCq);
                htKcPbg (Ol69IoCq);
                q4oPfbj += P0jNoePU9Ow[1][1];
                Ol69IoCq = Ol69IoCq -1;
            }
            printf ("%d\n", q4oPfbj);
        }
    }
    return 0;
}

