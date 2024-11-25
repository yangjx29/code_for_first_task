void  main () {
    char PsvWuZb [(308 - 207)];
    char M8cUHsyaf5w [(202 - 101)];
    char n3lQfFJ [(870 - 769)];
    int g;
    int lN1pc3gyC5L;
    int e;
    int d;
    int c;
    int WLWahmzxBvj;
    int a;
    g = (515 - 514);
    scanf ("%d", &a);
    for (; g <= a;) {
        scanf ("%s", &n3lQfFJ);
        scanf ("%s", &M8cUHsyaf5w);
        WLWahmzxBvj = strlen (n3lQfFJ) - (793 - 792);
        c = strlen (M8cUHsyaf5w) - (86 - 85);
        e = WLWahmzxBvj;
        for (; (208 - 208) <= c;) {
            if (M8cUHsyaf5w[c] <= n3lQfFJ[WLWahmzxBvj])
                PsvWuZb[WLWahmzxBvj] = n3lQfFJ[WLWahmzxBvj] - M8cUHsyaf5w[c] + '0';
            else {
                n3lQfFJ[WLWahmzxBvj] += (62 - 52);
                d = WLWahmzxBvj -1;
                for (; n3lQfFJ[d] == '0';) {
                    n3lQfFJ[d] = '9';
                    d--;
                }
                n3lQfFJ[d] -= 1;
                PsvWuZb[WLWahmzxBvj] = n3lQfFJ[WLWahmzxBvj] - M8cUHsyaf5w[c] + '0';
            }
            c--;
            WLWahmzxBvj--;
        }
        for (; WLWahmzxBvj >= 0;) {
            PsvWuZb[WLWahmzxBvj] = n3lQfFJ[WLWahmzxBvj];
            WLWahmzxBvj--;
        }
        for (lN1pc3gyC5L = e; lN1pc3gyC5L >= 0; lN1pc3gyC5L--)
            printf ("%c", PsvWuZb[e - lN1pc3gyC5L]);
        g++;
    };
}

