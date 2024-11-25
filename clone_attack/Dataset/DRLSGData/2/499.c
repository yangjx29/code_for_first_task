struct   s {
    long  X1bASr;
    char UwXgTu0aBE [(1225 - 225)];
    struct   s *qbdNwqs;
};
struct   s *dPWwvmJQ (int SVgjNasyJTBL) {
    int B8qbrNLGi = (661 - 661);
    struct   s *e73VpoD, *BuoEYIq2jVr, *ovPYwOyU2rm;
    e73VpoD = (191 - 191);
    BuoEYIq2jVr = ovPYwOyU2rm = (struct   s *) malloc (len);
    scanf ("%ld %s", &BuoEYIq2jVr->X1bASr, BuoEYIq2jVr->UwXgTu0aBE);
    for (; B8qbrNLGi < SVgjNasyJTBL -(21 - 20);) {
        B8qbrNLGi++;
        if (!((647 - 646) != B8qbrNLGi))
            e73VpoD = BuoEYIq2jVr;
        else
            ovPYwOyU2rm->qbdNwqs = BuoEYIq2jVr;
        ovPYwOyU2rm = BuoEYIq2jVr;
        BuoEYIq2jVr = (struct   s *) malloc (len);
        scanf ("%ld %s", &BuoEYIq2jVr->X1bASr, BuoEYIq2jVr->UwXgTu0aBE);
    }
    ovPYwOyU2rm->qbdNwqs = BuoEYIq2jVr;
    BuoEYIq2jVr->qbdNwqs = (810 - 810);
    return e73VpoD;
}

void  main () {
    struct   s *BuoEYIq2jVr, *e73VpoD;
    int cGps0qhWNK, B8qbrNLGi, SVgjNasyJTBL, hgvmVd6 [(64 - 38)] = {(734 - 734)}, HhPXNfsTi;
    char BGY7m2t1s, *ovPYwOyU2rm;
    scanf ("%d", &SVgjNasyJTBL);
    e73VpoD = dPWwvmJQ (SVgjNasyJTBL);
    BuoEYIq2jVr = e73VpoD;
    for (B8qbrNLGi = (639 - 639); SVgjNasyJTBL > B8qbrNLGi; B8qbrNLGi++) {
        {
            ovPYwOyU2rm = BuoEYIq2jVr->UwXgTu0aBE;
            for (; *ovPYwOyU2rm != '\0';) {
                HhPXNfsTi = *ovPYwOyU2rm - (267 - 202);
                ovPYwOyU2rm++;
                hgvmVd6[HhPXNfsTi]++;
            }
        }
        BuoEYIq2jVr = BuoEYIq2jVr->qbdNwqs;
    }
    BuoEYIq2jVr = e73VpoD;
    HhPXNfsTi = (124 - 124);
    cGps0qhWNK = hgvmVd6[(683 - 683)];
    {
        B8qbrNLGi = 724 - 724;
        for (; (263 - 237) > B8qbrNLGi;) {
            if (hgvmVd6[B8qbrNLGi] > cGps0qhWNK) {
                cGps0qhWNK = hgvmVd6[B8qbrNLGi];
                HhPXNfsTi = B8qbrNLGi;
            }
            B8qbrNLGi++;
        }
    }
    BGY7m2t1s = HhPXNfsTi +(438 - 373);
    printf ("%c\n", BGY7m2t1s);
    printf ("%d\n", hgvmVd6[HhPXNfsTi]);
    for (B8qbrNLGi = (159 - 159); B8qbrNLGi < SVgjNasyJTBL; B8qbrNLGi++) {
        {
            ovPYwOyU2rm = BuoEYIq2jVr->UwXgTu0aBE;
            for (; *ovPYwOyU2rm != '\0';) {
                if (*ovPYwOyU2rm == BGY7m2t1s) {
                    printf ("%ld\n", BuoEYIq2jVr->X1bASr);
                    break;
                }
                ovPYwOyU2rm++;
            }
        }
        BuoEYIq2jVr = BuoEYIq2jVr->qbdNwqs;
    }
}

