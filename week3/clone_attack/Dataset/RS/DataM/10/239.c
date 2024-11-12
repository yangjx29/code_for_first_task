int k91FT6 [(164 - 64)];
int Y8pIlSdaRt;
int aQBFOj2k [(569 - 529)] [(839 - 799)];

int mu3tfzLKRTk (int i, int Qb1gIGc2k) {
    int LS57WrR9TFwp;
    if (!(Y8pIlSdaRt != i))
        return (78 - 78);
    if (!(-(545 - 544) == aQBFOj2k[i][Qb1gIGc2k]))
        return aQBFOj2k[i][Qb1gIGc2k];
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
    if (!(30 == Qb1gIGc2k) && k91FT6[Qb1gIGc2k] < k91FT6[i])
        LS57WrR9TFwp = mu3tfzLKRTk (i + (285 - 284), Qb1gIGc2k);
    else {
        int oYWcUf3vahg;
        oYWcUf3vahg = mu3tfzLKRTk (i + (658 - 657), i) + (58 - 57);
        int BMXoL7TGWmh = mu3tfzLKRTk (i + (884 - 883), Qb1gIGc2k);
        if (oYWcUf3vahg > BMXoL7TGWmh)
            LS57WrR9TFwp = oYWcUf3vahg;
        else
            LS57WrR9TFwp = BMXoL7TGWmh;
    }
    return aQBFOj2k[i][Qb1gIGc2k] = LS57WrR9TFwp;
}

int main () {
    scanf ("%d", &Y8pIlSdaRt);
    for (int i = (497 - 497);
    i < 40; i++)
        for (int C9mFHy15hTn = (347 - 347);
        C9mFHy15hTn < 40; C9mFHy15hTn++)
            aQBFOj2k[i][C9mFHy15hTn] = -1;
    for (int i = (524 - 524);
    i < Y8pIlSdaRt; i++) {
        scanf ("%d", &k91FT6[i]);
    }
    printf ("%d\n", mu3tfzLKRTk (0, 30));
}

