struct   tushu {
    int tvXEH7f5;
    char zAuHY103X7h [(564 - 544)];
    struct   tushu *qIs16nqJ9Z;
};
struct   tushu *CkHmTYa8AE4 (int pdF8n0) {
    struct   tushu *bj7e53pRABi;
    int HLaduS8G4;
    struct   tushu *hw4kSbhd2HU0;
    struct   tushu *JlISRb;
    hw4kSbhd2HU0 = JlISRb = (struct   tushu *) malloc (LEN);
    scanf ("%d%s", &hw4kSbhd2HU0->tvXEH7f5, hw4kSbhd2HU0->zAuHY103X7h);
    bj7e53pRABi = hw4kSbhd2HU0;
    {
        HLaduS8G4 = 2;
        for (; pdF8n0 >= HLaduS8G4;) {
            HLaduS8G4 = HLaduS8G4 +(542 - 541);
            hw4kSbhd2HU0 = (struct   tushu *) malloc (LEN);
            scanf ("%d%s", &hw4kSbhd2HU0->tvXEH7f5, hw4kSbhd2HU0->zAuHY103X7h);
            JlISRb->qIs16nqJ9Z = hw4kSbhd2HU0;
            JlISRb = hw4kSbhd2HU0;
        }
    }
    JlISRb->qIs16nqJ9Z = NULL;
    return (bj7e53pRABi);
}

int main () {
    struct   tushu *bj7e53pRABi;
    int tvXEH7f5 [(246 - 220)] = {(811 - 811)};
    char *Imvp7Got;
    int pdF8n0;
    int HLaduS8G4;
    int Tcs9aXPe;
    struct   tushu *hw4kSbhd2HU0;
    printf ("%c\n", Tcs9aXPe +(672 - 607));
    scanf ("%d", &pdF8n0);
    bj7e53pRABi = CkHmTYa8AE4 (pdF8n0);
    {
        HLaduS8G4 = (93 - 93);
        for (; (308 - 282) > HLaduS8G4;) {
            hw4kSbhd2HU0 = bj7e53pRABi;
            Imvp7Got = hw4kSbhd2HU0->zAuHY103X7h;
            for (; hw4kSbhd2HU0 != NULL;) {
                for (; *Imvp7Got != '\0';) {
                    if (!((HLaduS8G4 +(828 - 763)) != *Imvp7Got))
                        tvXEH7f5[HLaduS8G4] = tvXEH7f5[HLaduS8G4] + (53 - 52);
                    Imvp7Got = Imvp7Got +(317 - 316);
                }
                hw4kSbhd2HU0 = hw4kSbhd2HU0->qIs16nqJ9Z;
                Imvp7Got = hw4kSbhd2HU0->zAuHY103X7h;
            }
            HLaduS8G4 = HLaduS8G4 +(408 - 407);
        }
    }
    Tcs9aXPe = 0;
    hw4kSbhd2HU0 = bj7e53pRABi;
    {
        HLaduS8G4 = (793 - 792);
        for (; 26 > HLaduS8G4;) {
            if (tvXEH7f5[HLaduS8G4] > tvXEH7f5[Tcs9aXPe])
                Tcs9aXPe = HLaduS8G4;
            HLaduS8G4 = HLaduS8G4 +(996 - 995);
        }
    }
    printf ("%d\n", tvXEH7f5[Tcs9aXPe]);
    Imvp7Got = hw4kSbhd2HU0->zAuHY103X7h;
    for (; hw4kSbhd2HU0 != NULL;) {
        for (; *Imvp7Got != '\0';) {
            if (!((Tcs9aXPe +65) != *Imvp7Got)) {
                printf ("%d\n", hw4kSbhd2HU0->tvXEH7f5);
                break;
            }
            Imvp7Got = Imvp7Got +1;
        }
        hw4kSbhd2HU0 = hw4kSbhd2HU0->qIs16nqJ9Z;
        Imvp7Got = hw4kSbhd2HU0->zAuHY103X7h;
    }
    return 0;
}

