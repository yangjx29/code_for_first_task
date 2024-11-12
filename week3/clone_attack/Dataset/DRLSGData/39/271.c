struct   student {
    char h06klcj [(672 - 652)];
    int if8k0g;
    int totsrF51;
    char XEjaZH5pm;
    char ALB1EWQ8Pqp;
    int LgoyTsmXS5e;
    long  int THrfqxj0M;
}
s5CokNFQ [(738 - 638)];

void  iM7LKiv6 (struct   student *oY1wHMrEG4) {
    int JnLrw7yxEM;
    JnLrw7yxEM = (530 - 530);
    if (oY1wHMrEG4->if8k0g > (997 - 917) && (310 - 309) <= oY1wHMrEG4->LgoyTsmXS5e)
        JnLrw7yxEM += (8077 - 77);
    if ((532 - 447) < oY1wHMrEG4->if8k0g && oY1wHMrEG4->totsrF51 > (825 - 745))
        JnLrw7yxEM += (4535 - 535);
    if ((850 - 760) < oY1wHMrEG4->if8k0g)
        JnLrw7yxEM += (2381 - 381);
    if ((144 - 59) < oY1wHMrEG4->if8k0g && oY1wHMrEG4->ALB1EWQ8Pqp == 'Y')
        JnLrw7yxEM += (1144 - 144);
    if (oY1wHMrEG4->XEjaZH5pm == 'Y' && oY1wHMrEG4->totsrF51 > (451 - 371))
        JnLrw7yxEM += (1225 - 375);
    oY1wHMrEG4->THrfqxj0M = JnLrw7yxEM;
}

int mungbxVCz9o (struct   student *gaHyF4Kmrn7W, int BLIWuSKN) {
    int x8Jy5knKxdsu;
    int BMcOiu;
    int mungbxVCz9o;
    mungbxVCz9o = (965 - 965);
    {
        BMcOiu = (345 - 345);
        while (BMcOiu < BLIWuSKN) {
            if (gaHyF4Kmrn7W->THrfqxj0M > mungbxVCz9o) {
                mungbxVCz9o = gaHyF4Kmrn7W->THrfqxj0M;
                x8Jy5knKxdsu = BMcOiu;
            }
            BMcOiu++;
            gaHyF4Kmrn7W++;
        }
    }
    return x8Jy5knKxdsu;
}

int main () {
    int BMcOiu;
    int BLIWuSKN;
    int JnLrw7yxEM;
    int ine4YZKI;
    scanf ("%d", &BLIWuSKN);
    JnLrw7yxEM = (357 - 357);
    {
        BMcOiu = (278 - 278);
        while (BMcOiu < BLIWuSKN) {
            scanf ("%s %d %d %c %c %ld", s5CokNFQ[BMcOiu].h06klcj, &s5CokNFQ[BMcOiu].if8k0g, &s5CokNFQ[BMcOiu].totsrF51, &s5CokNFQ[BMcOiu].XEjaZH5pm, &s5CokNFQ[BMcOiu].ALB1EWQ8Pqp, &s5CokNFQ[BMcOiu].LgoyTsmXS5e);
            iM7LKiv6 (&s5CokNFQ[BMcOiu]);
            JnLrw7yxEM += s5CokNFQ[BMcOiu].THrfqxj0M;
            BMcOiu++;
        }
    }
    ine4YZKI = mungbxVCz9o (s5CokNFQ, BLIWuSKN);
    printf ("%s\n%d\n%ld\n", s5CokNFQ[ine4YZKI].h06klcj, s5CokNFQ[ine4YZKI].THrfqxj0M, JnLrw7yxEM);
    return (98 - 98);
}

