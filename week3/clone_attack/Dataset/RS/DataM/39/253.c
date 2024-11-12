int main () {
    struct   student {
        char F1M5epU [(657 - 636)];
        int NafebHA;
        int DKreF3qs;
        char XCWIk0ilZ9B;
        char dKRSB7gEG6;
        int iEJlkh;
        int Kfs35hEM6;
    };
    int hZN4wre0qQY6, vtubUAYcx, t, ARUhcdgV;
    struct   student ZZdTRJA [(488 - 388)];
    scanf ("%d", &hZN4wre0qQY6);
    {
        vtubUAYcx = 432 - 432;
        while (vtubUAYcx <= hZN4wre0qQY6 - (590 - 589)) {
            scanf ("%s %d%d %c %c %d", ZZdTRJA[vtubUAYcx].F1M5epU, &ZZdTRJA[vtubUAYcx].NafebHA, &ZZdTRJA[vtubUAYcx].DKreF3qs, &ZZdTRJA[vtubUAYcx].XCWIk0ilZ9B, &ZZdTRJA[vtubUAYcx].dKRSB7gEG6, &ZZdTRJA[vtubUAYcx].iEJlkh);
            ZZdTRJA[vtubUAYcx].Kfs35hEM6 = (669 - 669);
            if (ZZdTRJA[vtubUAYcx].NafebHA > (906 - 826) && ZZdTRJA[vtubUAYcx].iEJlkh >= (727 - 726))
                ZZdTRJA[vtubUAYcx].Kfs35hEM6 = ZZdTRJA[vtubUAYcx].Kfs35hEM6 + 8000;
            if (ZZdTRJA[vtubUAYcx].NafebHA > 85 && ZZdTRJA[vtubUAYcx].DKreF3qs > (525 - 445))
                ZZdTRJA[vtubUAYcx].Kfs35hEM6 = ZZdTRJA[vtubUAYcx].Kfs35hEM6 + 4000;
            if (ZZdTRJA[vtubUAYcx].NafebHA > 90)
                ZZdTRJA[vtubUAYcx].Kfs35hEM6 = ZZdTRJA[vtubUAYcx].Kfs35hEM6 + 2000;
            if (ZZdTRJA[vtubUAYcx].NafebHA > 85 && ZZdTRJA[vtubUAYcx].dKRSB7gEG6 == 'Y')
                ZZdTRJA[vtubUAYcx].Kfs35hEM6 = ZZdTRJA[vtubUAYcx].Kfs35hEM6 + (1031 - 31);
            if (ZZdTRJA[vtubUAYcx].DKreF3qs > 80 && (ZZdTRJA[vtubUAYcx].XCWIk0ilZ9B == 'Y'))
                ZZdTRJA[vtubUAYcx].Kfs35hEM6 = ZZdTRJA[vtubUAYcx].Kfs35hEM6 + 850;
            vtubUAYcx = vtubUAYcx + 1;
        };
    }
    t = ARUhcdgV = (781 - 781);
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
    {
        vtubUAYcx = 0;
        while (vtubUAYcx <= hZN4wre0qQY6 - 1) {
            if (ZZdTRJA[vtubUAYcx].Kfs35hEM6 > ARUhcdgV)
                ARUhcdgV = ZZdTRJA[vtubUAYcx].Kfs35hEM6;
            t = t + ZZdTRJA[vtubUAYcx].Kfs35hEM6;
            vtubUAYcx = vtubUAYcx + 1;
        };
    }
    for (vtubUAYcx = 0; vtubUAYcx <= hZN4wre0qQY6 - 1; vtubUAYcx = vtubUAYcx + 1) {
        if (ZZdTRJA[vtubUAYcx].Kfs35hEM6 == ARUhcdgV) {
            printf ("%s\n", ZZdTRJA[vtubUAYcx].F1M5epU);
            printf ("%d\n", ZZdTRJA[vtubUAYcx].Kfs35hEM6);
            break;
        };
    }
    printf ("%d\n", t);
    return 0;
}

