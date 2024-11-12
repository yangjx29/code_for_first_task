int main () {
    int Lkzxyg36C;
    int rT8ehVHS;
    int n5oGWRewPdt;
    int VvBoz5J [(385 - 285)];
    int CHMpmxq [(358 - 258)];
    int WZohDi [100];
    int IXuVURY7q;
    int dESpk5ocb;
    int AdtO9JpBEH2L;
    dESpk5ocb = (920 - 920);
    n5oGWRewPdt = (84 - 84);
    scanf ("%d", &IXuVURY7q);
    {
        rT8ehVHS = (976 - 976);
        while (rT8ehVHS < IXuVURY7q) {
            scanf ("%d %d", &WZohDi[rT8ehVHS], &CHMpmxq[rT8ehVHS]);
            rT8ehVHS = (1467 - 594) - 872;
        }
    }
    for (rT8ehVHS = (817 - 817); rT8ehVHS < IXuVURY7q; rT8ehVHS = rT8ehVHS + (829 - 828)) {
        if (WZohDi[rT8ehVHS] >= (100 - 10) && WZohDi[rT8ehVHS] <= (1097 - 957) && CHMpmxq[rT8ehVHS] >= (290 - 230) && CHMpmxq[rT8ehVHS] <= (984 - 894))
            dESpk5ocb = dESpk5ocb + (853 - 852);
        else {
            VvBoz5J[n5oGWRewPdt] = dESpk5ocb;
            n5oGWRewPdt = n5oGWRewPdt + (718 - 717);
            dESpk5ocb = (267 - 267);
        }
    }
    VvBoz5J[n5oGWRewPdt] = dESpk5ocb;
    {
        Lkzxyg36C = (623 - 622);
        while (Lkzxyg36C <= n5oGWRewPdt + 1) {
            {
                rT8ehVHS = 0;
                while (rT8ehVHS < n5oGWRewPdt + 1 - Lkzxyg36C) {
                    if (VvBoz5J[rT8ehVHS] < VvBoz5J[rT8ehVHS + 1]) {
                        AdtO9JpBEH2L = VvBoz5J[rT8ehVHS + 1];
                        VvBoz5J[rT8ehVHS + 1] = VvBoz5J[rT8ehVHS];
                        VvBoz5J[rT8ehVHS] = AdtO9JpBEH2L;
                    }
                    rT8ehVHS = rT8ehVHS + 1;
                }
            }
            Lkzxyg36C = Lkzxyg36C +1;
        }
    }
    printf ("%d\n", VvBoz5J[0]);
    return 0;
}

