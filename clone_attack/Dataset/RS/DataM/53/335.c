int main () {
    int bhLsTc5keA, CWIlcz9C6ogJ, AvjhHDCdQgc, BItOh1Em;
    int fr1fiRaQ [bhLsTc5keA];
    scanf ("%d", &bhLsTc5keA);
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
    scanf ("%d", &fr1fiRaQ[0]);
    {
        CWIlcz9C6ogJ = 1;
        while (CWIlcz9C6ogJ < bhLsTc5keA) {
            scanf (" %d", &fr1fiRaQ[CWIlcz9C6ogJ]);
            CWIlcz9C6ogJ++;
        };
    }
    printf ("%d", fr1fiRaQ[0]);
    {
        CWIlcz9C6ogJ = 1;
        while (CWIlcz9C6ogJ < bhLsTc5keA) {
            BItOh1Em = 0;
            {
                AvjhHDCdQgc = 0;
                while (AvjhHDCdQgc < CWIlcz9C6ogJ) {
                    if (!(fr1fiRaQ[AvjhHDCdQgc] != fr1fiRaQ[CWIlcz9C6ogJ])) {
                        BItOh1Em = 1;
                        break;
                    }
                    AvjhHDCdQgc++;
                };
            }
            if (BItOh1Em == 0)
                printf (",%d", fr1fiRaQ[CWIlcz9C6ogJ]);
            CWIlcz9C6ogJ++;
        };
    };
}

