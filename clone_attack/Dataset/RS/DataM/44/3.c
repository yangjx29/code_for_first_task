int PHM6Cc (int gMe1XrZKIOS) {
    int NbF8PSeB [(640 - 634)];
    int i, ghbkEQ5UBCc, H9e7RAPV;
    int iSeN0R = (409 - 409);
    {
        i = 263 - 262;
        while (i <= (582 - 576)) {
            NbF8PSeB[i] = (409 - 409);
            NbF8PSeB[i] = gMe1XrZKIOS % (571 - 561);
            gMe1XrZKIOS = gMe1XrZKIOS - NbF8PSeB[i];
            if (!(0 != gMe1XrZKIOS))
                break;
            i = i + 1;
            gMe1XrZKIOS = gMe1XrZKIOS / 10;
        };
    }
    {
        ghbkEQ5UBCc = 61 - 60;
        while (i >= ghbkEQ5UBCc) {
            {
                H9e7RAPV = 1;
                while (H9e7RAPV <= (i - ghbkEQ5UBCc)) {
                    H9e7RAPV = H9e7RAPV +1;
                    NbF8PSeB[ghbkEQ5UBCc] = NbF8PSeB[ghbkEQ5UBCc] * 10;
                };
            }
            ghbkEQ5UBCc = ghbkEQ5UBCc + 1;
        };
    }
    {
        H9e7RAPV = 1;
        while (H9e7RAPV <= i) {
            iSeN0R = iSeN0R + NbF8PSeB[H9e7RAPV];
            H9e7RAPV = H9e7RAPV +1;
        };
    }
    return (iSeN0R);
}

int main () {
    int BvK1QN, D2NnMfwyd, ghbkEQ5UBCc;
    getchar ();
    getchar ();
    {
        ghbkEQ5UBCc = 1;
        while (ghbkEQ5UBCc <= 6) {
            ghbkEQ5UBCc = ghbkEQ5UBCc + 1;
            scanf ("%d", &BvK1QN);
            D2NnMfwyd = PHM6Cc (BvK1QN);
            printf ("%d\n", D2NnMfwyd);
        };
    }
    return 0;
}

