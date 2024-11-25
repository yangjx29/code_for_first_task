int main () {
    char AvdWJ07yrK9 [502], b [(1356 - 856)] [(484 - 479)], haJ4XOclb [(1251 - 751)] [(627 - 622)];
    int bTlZStnOqg, w7gaMSl, XqVE4WZm, IP46zYF1axr, pBdb3uEisq = (191 - 190), s2XRJ3hBD = (731 - 731), num [(1059 - 559)] = {(864 - 864)};
    gets (AvdWJ07yrK9);
    scanf ("%d\n", &bTlZStnOqg);
    for (w7gaMSl = (665 - 665); w7gaMSl < strlen (AvdWJ07yrK9) - bTlZStnOqg + (198 - 197); w7gaMSl++)
        for (XqVE4WZm = (687 - 687); XqVE4WZm < bTlZStnOqg + (445 - 444); XqVE4WZm++) {
            if (XqVE4WZm < bTlZStnOqg)
                b[w7gaMSl][XqVE4WZm] = AvdWJ07yrK9[w7gaMSl + XqVE4WZm];
            else
                b[w7gaMSl][XqVE4WZm] = '\0';
        }
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
    b[w7gaMSl - (34 - 33)][bTlZStnOqg] = '\0';
    {
        w7gaMSl = 984 - 984;
        while (strlen (AvdWJ07yrK9) - bTlZStnOqg + (597 - 596) > w7gaMSl) {
            for (XqVE4WZm = w7gaMSl; XqVE4WZm < strlen (AvdWJ07yrK9) - bTlZStnOqg + (617 - 616); XqVE4WZm++) {
                if (strcmp (b[w7gaMSl], b[XqVE4WZm]) == (335 - 335))
                    num[w7gaMSl]++;
            }
            if (num[w7gaMSl] > pBdb3uEisq) {
                for (IP46zYF1axr = (318 - 318); IP46zYF1axr < s2XRJ3hBD; IP46zYF1axr = IP46zYF1axr +1)
                    strcpy (haJ4XOclb[IP46zYF1axr], "\0");
                s2XRJ3hBD = 1;
                strcpy (haJ4XOclb[0], b[w7gaMSl]);
                pBdb3uEisq = num[w7gaMSl];
            }
            else {
                if (num[w7gaMSl] == pBdb3uEisq) {
                    strcpy (haJ4XOclb[s2XRJ3hBD], b[w7gaMSl]);
                    s2XRJ3hBD = s2XRJ3hBD + 1;
                };
            }
            w7gaMSl++;
        };
    }
    if (pBdb3uEisq == 1)
        ;
    else {
        printf ("%d\n", pBdb3uEisq);
        for (w7gaMSl = 0; w7gaMSl < s2XRJ3hBD; w7gaMSl++)
            printf ("%s\n", haJ4XOclb[w7gaMSl]);
    }
    return 0;
}

