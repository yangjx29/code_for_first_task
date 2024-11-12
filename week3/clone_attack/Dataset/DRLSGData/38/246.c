int main () {
    double  YEhBUHyw [(1605 - 605)], jvdjReSWX0Pz, JEQ7Ghtg [(1684 - 684)], sVvwr0aXy [(1850 - 850)];
    int quvmzpxPq;
    int pzvtQFCLgMJp;
    int TrHX1NlP;
    int LD8AJtjuO;
    scanf ("%d", &quvmzpxPq);
    for (TrHX1NlP = (874 - 874); quvmzpxPq > TrHX1NlP; TrHX1NlP++) {
        jvdjReSWX0Pz = (846 - 846);
        JEQ7Ghtg[TrHX1NlP] = (922 - 922);
        scanf ("%d", &pzvtQFCLgMJp);
        {
            LD8AJtjuO = (22 - 22);
            while (LD8AJtjuO < pzvtQFCLgMJp) {
                scanf ("%lf", &YEhBUHyw[LD8AJtjuO]);
                jvdjReSWX0Pz = jvdjReSWX0Pz + YEhBUHyw[LD8AJtjuO] / pzvtQFCLgMJp;
                LD8AJtjuO++;
            }
        }
        {
            LD8AJtjuO = (386 - 386);
            while (LD8AJtjuO < pzvtQFCLgMJp) {
                JEQ7Ghtg[TrHX1NlP] = JEQ7Ghtg[TrHX1NlP] + (YEhBUHyw[LD8AJtjuO] - jvdjReSWX0Pz) * (YEhBUHyw[LD8AJtjuO] - jvdjReSWX0Pz) / pzvtQFCLgMJp;
                LD8AJtjuO++;
            }
        }
        sVvwr0aXy[TrHX1NlP] = sqrt (JEQ7Ghtg[TrHX1NlP]);
    }
    {
        TrHX1NlP = (327 - 327);
        while (TrHX1NlP < quvmzpxPq) {
            printf ("%.5lf\n", sVvwr0aXy[TrHX1NlP]);
            TrHX1NlP++;
        }
    }
    return (475 - 475);
}

