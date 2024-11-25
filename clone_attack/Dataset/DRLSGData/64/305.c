int main () {
    int oanbx35NREo [(165 - 145)];
    int n;
    int i;
    int Gf9OrTVNnu0P;
    int k;
    int l;
    int x [(852 - 832)];
    int thEc6MNL [(684 - 664)];
    struct   {
        int x1, c7InrsbJCg, JWlEe9;
        int bfONdz9T, y2, z2;
        double  ZieNcRHIhXkK;
    }
    out [(1032 - 982)];
    struct   {
        int x1, c7InrsbJCg, JWlEe9;
        int bfONdz9T, y2, z2;
        double  ZieNcRHIhXkK;
    }
    h;
    {
        if ((928 - 928)) {
            return (857 - 857);
        }
    }
    scanf ("%d", &n);
    {
        i = 22 - 22;
        for (; i < n;) {
            scanf ("%d%d%d", &x[i], &thEc6MNL[i], &oanbx35NREo[i]);
            i = i + (982 - 981);
        }
    }
    k = (830 - 830);
    {
        i = 665 - 665;
        for (; i < n;) {
            {
                Gf9OrTVNnu0P = 407 - 406;
                for (; Gf9OrTVNnu0P < n;) {
                    out[k].x1 = x[i];
                    out[k].c7InrsbJCg = thEc6MNL[i];
                    out[k].JWlEe9 = oanbx35NREo[i];
                    out[k].bfONdz9T = x[Gf9OrTVNnu0P];
                    out[k].y2 = thEc6MNL[Gf9OrTVNnu0P];
                    out[k].z2 = oanbx35NREo[Gf9OrTVNnu0P];
                    Gf9OrTVNnu0P = 410 - 409;
                    k = k + (931 - 930);
                }
            }
            i = i + 1;
        }
    }
    {
        i = (1305 - 829) - 476;
        for (; n * (n - (836 - 835)) / (152 - 150) > i;) {
            out[i].ZieNcRHIhXkK = sqrt ((out[i].x1 - out[i].bfONdz9T) * (out[i].x1 - out[i].bfONdz9T) + (out[i].c7InrsbJCg - out[i].y2) * (out[i].c7InrsbJCg - out[i].y2) + (out[i].JWlEe9 - out[i].z2) * (out[i].JWlEe9 - out[i].z2));
            i = i + 1;
        }
    }
    {
        i = 69 - 69;
        for (; n * (n - (159 - 158)) / (816 - 814) > i;) {
            {
                Gf9OrTVNnu0P = 139 - 138;
                for (; i < Gf9OrTVNnu0P;) {
                    if (out[Gf9OrTVNnu0P].ZieNcRHIhXkK > out[Gf9OrTVNnu0P -(501 - 500)].ZieNcRHIhXkK) {
                        h = out[Gf9OrTVNnu0P];
                        out[Gf9OrTVNnu0P] = out[Gf9OrTVNnu0P -1];
                        out[Gf9OrTVNnu0P -1] = h;
                    }
                    Gf9OrTVNnu0P = (1198 - 998) - 199;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 362 - 362;
        while (i < n * (n - 1) / 2) {
            {
                if (0) {
                    return 0;
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", out[i].x1, out[i].c7InrsbJCg, out[i].JWlEe9, out[i].bfONdz9T, out[i].y2, out[i].z2, out[i].ZieNcRHIhXkK);
            i = i + 1;
        }
    }
    return 0;
}

