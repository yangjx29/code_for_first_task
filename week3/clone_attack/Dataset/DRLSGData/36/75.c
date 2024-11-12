int main () {
    int A8YbeNJn [(1002 - 950)] = {(353 - 353)}, vUriOE936vb [52] = {0}, tGT8y9e3Qk, t7cIYwSFfh, aIU8Q10Rhs;
    char HKAR84a [50], shZmJc46FNp5 [50], *SAxMvX, *vHaolxJZ0;
    scanf ("%s", HKAR84a);
    t7cIYwSFfh = strlen (HKAR84a);
    {
        SAxMvX = HKAR84a;
        for (; SAxMvX < HKAR84a +t7cIYwSFfh;) {
            if (*SAxMvX > 64 && *SAxMvX < 91) {
                tGT8y9e3Qk = *SAxMvX;
                A8YbeNJn[tGT8y9e3Qk - 65]++;
            }
            if (*SAxMvX > 96 && *SAxMvX < 123) {
                tGT8y9e3Qk = *SAxMvX;
                A8YbeNJn[tGT8y9e3Qk - 71]++;
            }
            SAxMvX++;
        }
    }
    scanf ("%s", shZmJc46FNp5);
    aIU8Q10Rhs = strlen (shZmJc46FNp5);
    {
        vHaolxJZ0 = shZmJc46FNp5;
        for (; vHaolxJZ0 < shZmJc46FNp5 + aIU8Q10Rhs;) {
            if (*vHaolxJZ0 > 64 && *vHaolxJZ0 < 91) {
                tGT8y9e3Qk = *vHaolxJZ0;
                vUriOE936vb[tGT8y9e3Qk - 65]++;
            }
            if (*vHaolxJZ0 > 96 && *vHaolxJZ0 < 123) {
                tGT8y9e3Qk = *vHaolxJZ0;
                vUriOE936vb[tGT8y9e3Qk - 71]++;
            }
            vHaolxJZ0++;
        }
    }
    {
        tGT8y9e3Qk = 0;
        for (; tGT8y9e3Qk < 52;) {
            if (A8YbeNJn[tGT8y9e3Qk] == vUriOE936vb[tGT8y9e3Qk]) {
                if (tGT8y9e3Qk == (629 - 578)) {
                }
            }
            else {
                break;
            }
            tGT8y9e3Qk++;
        }
    }
    return 0;
}

