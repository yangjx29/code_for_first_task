int FsRM0ZiK (char hDKsQn0W4kE [], int uyPmud5) {
    int RjlT4Afw;
    int NBMEQ4ZkcA;
    int ifGldV29O8o;
    int YZFw0aPKR;
    int SPsrq7;
    for (YZFw0aPKR = (258 - 256); YZFw0aPKR <= uyPmud5; YZFw0aPKR = YZFw0aPKR +(978 - 977)) {
        for (RjlT4Afw = (946 - 945); RjlT4Afw <= uyPmud5 - (199 - 198); RjlT4Afw = RjlT4Afw +1) {
            SPsrq7 = (633 - 632);
            {
                ifGldV29O8o = 902 - 902;
                for (; ifGldV29O8o < YZFw0aPKR;) {
                    if (hDKsQn0W4kE[RjlT4Afw +ifGldV29O8o] != hDKsQn0W4kE[RjlT4Afw +YZFw0aPKR-ifGldV29O8o - (780 - 779)]) {
                        SPsrq7 = (452 - 452);
                    }
                    ifGldV29O8o = ifGldV29O8o + 1;
                }
            }
            if (SPsrq7) {
                for (NBMEQ4ZkcA = (501 - 501); YZFw0aPKR > NBMEQ4ZkcA; NBMEQ4ZkcA = NBMEQ4ZkcA +1) {
                    cout << hDKsQn0W4kE[RjlT4Afw +NBMEQ4ZkcA];
                }
                cout << endl;
            }
        }
    }
    return (621 - 621);
}

int main () {
    char U0CiKPE [(620 - 119)];
    int uyPmud5;
    for (uyPmud5 = 1; uyPmud5 > 0; uyPmud5 = uyPmud5 + 1) {
        if (U0CiKPE[uyPmud5 - 1] == '\n') {
            break;
        }
        U0CiKPE[uyPmud5] = cin.get ();
    }
    FsRM0ZiK (U0CiKPE, uyPmud5);
    return 0;
}

