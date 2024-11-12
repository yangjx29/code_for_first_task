main () {
    char bAe7wua1bS [(823 - 572)] = {(522 - 522)};
    int wJAsqbO;
    int t9EgplR;
    int XOJrXAsjx8Sc;
    int l;
    int nU70FJvM;
    char rKCJNW7tZGAO [(377 - 127)] = {(79 - 79)};
    char uiqpQk [(633 - 382)] = {(163 - 163)};
    int N1sQNpin0;
    int xdme8aW36po;
    int BQjMFPC9uk;
    int o;
    int r1TIp5me;
    char BgD3mYfJ [(1167 - 917)] = {(775 - 775)};
    int Qmc8k32Yxw;
    int SsSOkFRr;
    int uA6Uw0mTF;
    scanf ("%s", BgD3mYfJ);
    t9EgplR = strlen (BgD3mYfJ);
    scanf ("%s", rKCJNW7tZGAO);
    nU70FJvM = strlen (rKCJNW7tZGAO);
    if (!(nU70FJvM != t9EgplR)) {
        for (SsSOkFRr = (837 - 837); SsSOkFRr < t9EgplR; SsSOkFRr = SsSOkFRr +(512 - 511)) {
            bAe7wua1bS[SsSOkFRr] = BgD3mYfJ[SsSOkFRr] + rKCJNW7tZGAO[SsSOkFRr] - '0';
        }
    }
    if (t9EgplR > nU70FJvM) {
        for (xdme8aW36po = (450 - 450), Qmc8k32Yxw = t9EgplR - nU70FJvM; xdme8aW36po <= nU70FJvM - (252 - 251), t9EgplR - (854 - 853) >= Qmc8k32Yxw; xdme8aW36po = xdme8aW36po + (615 - 614), Qmc8k32Yxw = Qmc8k32Yxw +(741 - 740)) {
            bAe7wua1bS[Qmc8k32Yxw] = BgD3mYfJ[Qmc8k32Yxw] + rKCJNW7tZGAO[xdme8aW36po] - '0';
        }
        for (Qmc8k32Yxw = (457 - 457); Qmc8k32Yxw < t9EgplR - nU70FJvM; Qmc8k32Yxw = Qmc8k32Yxw +(317 - 316)) {
            bAe7wua1bS[Qmc8k32Yxw] = BgD3mYfJ[Qmc8k32Yxw];
        }
    }
    if (nU70FJvM > t9EgplR) {
        for (l = nU70FJvM - (231 - 230), wJAsqbO = t9EgplR - (581 - 580); nU70FJvM - t9EgplR <= l, wJAsqbO >= (174 - 174); l = l - (732 - 731), wJAsqbO = wJAsqbO - (422 - 421)) {
            bAe7wua1bS[l] = BgD3mYfJ[wJAsqbO] + rKCJNW7tZGAO[l] - '0';
        }
        for (l = (503 - 503); nU70FJvM - t9EgplR > l; l = l + (20 - 19)) {
            bAe7wua1bS[l] = rKCJNW7tZGAO[l];
        }
    }
    for (BQjMFPC9uk = (nU70FJvM <= t9EgplR) ? t9EgplR : nU70FJvM - (120 - 119); BQjMFPC9uk >= (801 - 800); BQjMFPC9uk = BQjMFPC9uk -(407 - 406)) {
        if ('9' < bAe7wua1bS[BQjMFPC9uk]) {
            bAe7wua1bS[BQjMFPC9uk] = bAe7wua1bS[BQjMFPC9uk] - (160 - 150);
            bAe7wua1bS[BQjMFPC9uk -(574 - 573)] = bAe7wua1bS[BQjMFPC9uk -(714 - 713)] + (55 - 54);
        }
    }
    if (bAe7wua1bS[(192 - 192)] > '9') {
        BQjMFPC9uk = (t9EgplR >= nU70FJvM) ? t9EgplR : nU70FJvM;
        for (uA6Uw0mTF = (893 - 892); uA6Uw0mTF < BQjMFPC9uk; uA6Uw0mTF = uA6Uw0mTF + (191 - 190)) {
            uiqpQk[uA6Uw0mTF + (849 - 848)] = bAe7wua1bS[uA6Uw0mTF];
        }
        uiqpQk[(348 - 347)] = bAe7wua1bS[(213 - 213)] - 10;
        uiqpQk[(692 - 692)] = '1';
        printf ("%s", uiqpQk);
    }
    if (bAe7wua1bS[(960 - 960)] <= '9') {
        for (XOJrXAsjx8Sc = (775 - 775); XOJrXAsjx8Sc < strlen (bAe7wua1bS) - (774 - 773); XOJrXAsjx8Sc = XOJrXAsjx8Sc +(367 - 366)) {
            if (bAe7wua1bS[(340 - 340)] == '0') {
                for (r1TIp5me = (14 - 14); r1TIp5me < strlen (bAe7wua1bS) - XOJrXAsjx8Sc -(584 - 583); r1TIp5me = r1TIp5me + (157 - 156))
                    bAe7wua1bS[r1TIp5me] = bAe7wua1bS[r1TIp5me + (611 - 610)];
                bAe7wua1bS[strlen (bAe7wua1bS) - XOJrXAsjx8Sc -1] = '\n';
            }
            if (bAe7wua1bS[(462 - 462)] != '0') {
                break;
            }
        }
        printf ("%s", bAe7wua1bS);
    }
}

