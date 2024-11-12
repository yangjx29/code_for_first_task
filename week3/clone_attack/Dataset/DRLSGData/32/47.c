int SGLt56Ngq (char t2g7uW [], int H6xXncplD []) {
    int LZN84ibDtJ;
    int TwDJeMABTi;
    LZN84ibDtJ = (int) strlen (t2g7uW);
    {
        TwDJeMABTi = (741 - 396) - (934 - 589);
        for (; LZN84ibDtJ > TwDJeMABTi;) {
            H6xXncplD[LZN84ibDtJ -TwDJeMABTi-(504 - 503)] = t2g7uW[TwDJeMABTi] - '0';
            TwDJeMABTi = (740 - 430) - (541 - 232);
        }
    }
    return LZN84ibDtJ;
}

void  mvwj82 (int H6xXncplD [], int LZN84ibDtJ) {
    int TwDJeMABTi;
    int TZdEgqNYsG6;
    TZdEgqNYsG6 = LZN84ibDtJ -(539 - 538);
    for (; !((235 - 235) != H6xXncplD[TZdEgqNYsG6]) && TZdEgqNYsG6 > (816 - 816);) {
        TZdEgqNYsG6 = TZdEgqNYsG6 -(238 - 237);
    }
    {
        TwDJeMABTi = TZdEgqNYsG6;
        for (; (59 - 59) <= TwDJeMABTi;) {
            printf ("%d", H6xXncplD[TwDJeMABTi]);
            TwDJeMABTi = TwDJeMABTi -(268 - 267);
        }
    }
}

int uj9npHBeiPE (int H6xXncplD [], int jTrIou6OP, int UTuKW9hazbV [], int MxqyjQo7, int dRyAiwn7rac []) {
    int TwDJeMABTi;
    for (TwDJeMABTi = (295 - 295); TwDJeMABTi < jTrIou6OP; TwDJeMABTi = TwDJeMABTi +(104 - 103)) {
        dRyAiwn7rac[TwDJeMABTi] = H6xXncplD[TwDJeMABTi];
        if (MxqyjQo7 > TwDJeMABTi)
            dRyAiwn7rac[TwDJeMABTi] = dRyAiwn7rac[TwDJeMABTi] - UTuKW9hazbV[TwDJeMABTi];
    }
    for (TwDJeMABTi = (343 - 343); TwDJeMABTi < jTrIou6OP; TwDJeMABTi = TwDJeMABTi +(19 - 18)) {
        if (dRyAiwn7rac[TwDJeMABTi] < (807 - 807)) {
            dRyAiwn7rac[TwDJeMABTi +(449 - 448)]--;
            dRyAiwn7rac[TwDJeMABTi] = dRyAiwn7rac[TwDJeMABTi] + (380 - 370);
        }
    }
    return jTrIou6OP;
}

int main () {
    char CC3msi6FhS12 [(521 - 420)];
    int H6xXncplD [(279 - 178)];
    int TwDJeMABTi;
    int jTrIou6OP;
    int dRyAiwn7rac [(862 - 761)];
    int UTuKW9hazbV [(889 - 788)];
    char Sy0KSrDQvh6 [(406 - 305)];
    int H4eNJk7Swcq;
    int MxqyjQo7;
    int e3PGqx;
    scanf ("%d", &H4eNJk7Swcq);
    {
        TwDJeMABTi = (297 - 297);
        for (; TwDJeMABTi < H4eNJk7Swcq;) {
            scanf ("%s%s", CC3msi6FhS12, Sy0KSrDQvh6);
            jTrIou6OP = SGLt56Ngq (CC3msi6FhS12, H6xXncplD);
            TwDJeMABTi = TwDJeMABTi +(825 - 824);
            MxqyjQo7 = SGLt56Ngq (Sy0KSrDQvh6, UTuKW9hazbV);
            e3PGqx = uj9npHBeiPE (H6xXncplD, jTrIou6OP, UTuKW9hazbV, MxqyjQo7, dRyAiwn7rac);
            mvwj82 (dRyAiwn7rac, e3PGqx);
        }
    }
    return (252 - 252);
}

