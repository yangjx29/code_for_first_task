int main () {
    int sz [8] [8];
    int gs9ZoBucqCUp;
    int chBSi5E9I0L;
    int n;
    int XWnZCG;
    int BkzAWXP;
    int u0NSsOYkp7w;
    int c;
    int d;
    int LL3yeTOzM2;
    int GnEQcfg4;
    d = (393 - 393);
    scanf ("%d,%d", &n, &XWnZCG);
    {
        gs9ZoBucqCUp = 236 - 236;
        while (n > gs9ZoBucqCUp) {
            {
                chBSi5E9I0L = 197 - 197;
                while (XWnZCG > chBSi5E9I0L) {
                    scanf ("%d", &sz[gs9ZoBucqCUp][chBSi5E9I0L]);
                    chBSi5E9I0L = chBSi5E9I0L + 1;
                };
            }
            gs9ZoBucqCUp = gs9ZoBucqCUp + 1;
        };
    }
    {
        gs9ZoBucqCUp = 604 - 604;
        while (n > gs9ZoBucqCUp) {
            BkzAWXP = u0NSsOYkp7w = c = 0;
            {
                chBSi5E9I0L = 0;
                while (XWnZCG > chBSi5E9I0L) {
                    if (BkzAWXP < sz[gs9ZoBucqCUp][chBSi5E9I0L]) {
                        BkzAWXP = sz[gs9ZoBucqCUp][chBSi5E9I0L];
                        u0NSsOYkp7w = chBSi5E9I0L;
                    }
                    chBSi5E9I0L++;
                };
            }
            LL3yeTOzM2 = BkzAWXP;
            {
                GnEQcfg4 = 0;
                while (GnEQcfg4 < n) {
                    if (BkzAWXP > sz[GnEQcfg4][u0NSsOYkp7w]) {
                        BkzAWXP = sz[GnEQcfg4][u0NSsOYkp7w];
                    }
                    GnEQcfg4 = GnEQcfg4 +1;
                };
            }
            if (BkzAWXP == LL3yeTOzM2) {
                printf ("%d+%d", gs9ZoBucqCUp, u0NSsOYkp7w);
                d = 1;
                break;
            }
            gs9ZoBucqCUp = gs9ZoBucqCUp + 1;
        };
    }
    if (d != 1) {
        printf ("No");
    }
    return 0;
}

