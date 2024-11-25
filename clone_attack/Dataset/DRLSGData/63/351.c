int main () {
    int V57FzrwNcPLk;
    int HsXLy1;
    int RQDZ1U9;
    int W4CKufo;
    int XD37UIaJOx;
    scanf ("%d%d", &V57FzrwNcPLk, &HsXLy1);
    int OiavY8SI7fmO [100] [100];
    {
        RQDZ1U9 = 0;
        while (RQDZ1U9 < V57FzrwNcPLk) {
            {
                W4CKufo = 0;
                for (; W4CKufo < HsXLy1;) {
                    scanf ("%d", &OiavY8SI7fmO[RQDZ1U9][W4CKufo]);
                    W4CKufo++;
                }
            }
            RQDZ1U9++;
        }
    }
    int nsmu0W;
    int evkF6NT;
    scanf ("%d%d", &nsmu0W, &evkF6NT);
    int awSv9aNd [100] [100];
    {
        RQDZ1U9 = 0;
        while (RQDZ1U9 < nsmu0W) {
            {
                W4CKufo = 0;
                while (evkF6NT > W4CKufo) {
                    scanf ("%d", &awSv9aNd[RQDZ1U9][W4CKufo]);
                    W4CKufo++;
                }
            }
            RQDZ1U9++;
        }
    }
    int cxiVy4bMTRSH [100] [100];
    {
        RQDZ1U9 = 0;
        for (; RQDZ1U9 < 100;) {
            {
                W4CKufo = 0;
                for (; W4CKufo < 100;) {
                    cxiVy4bMTRSH[RQDZ1U9][W4CKufo] = 0;
                    W4CKufo++;
                }
            }
            RQDZ1U9++;
        }
    }
    {
        RQDZ1U9 = 0;
        for (; RQDZ1U9 < V57FzrwNcPLk;) {
            {
                W4CKufo = 0;
                while (evkF6NT > W4CKufo) {
                    {
                        XD37UIaJOx = 0;
                        for (; XD37UIaJOx < nsmu0W;) {
                            cxiVy4bMTRSH[RQDZ1U9][W4CKufo] += (OiavY8SI7fmO[RQDZ1U9][XD37UIaJOx] * awSv9aNd[XD37UIaJOx][W4CKufo]);
                            XD37UIaJOx++;
                        }
                    }
                    W4CKufo++;
                }
            }
            RQDZ1U9++;
        }
    }
    {
        RQDZ1U9 = 0;
        while (RQDZ1U9 < V57FzrwNcPLk) {
            {
                W4CKufo = 0;
                {
                    if (0) {
                        return 0;
                    }
                }
                for (; W4CKufo < evkF6NT;) {
                    if ((W4CKufo +1) % evkF6NT != 0)
                        printf ("%d ", cxiVy4bMTRSH[RQDZ1U9][W4CKufo]);
                    else
                        printf ("%d\n", cxiVy4bMTRSH[RQDZ1U9][W4CKufo]);
                    W4CKufo++;
                }
            }
            RQDZ1U9++;
        }
    }
    return 0;
}

