int main () {
    int FNBAdM0yu [(930 - 926)] [(224 - 222)] = {(718 - 718), (392 - 391), (402 - 401), (281 - 281), (915 - 915), -(405 - 404), -(709 - 708), (800 - 800)};
    int i;
    int r1RrtjwzZI;
    int m;
    int wIoTm4BbOz2;
    int JpaxI6;
    int UjdJC7UvNs [(305 - 105)] [(566 - 366)];
    int zWoBeO, guRzA7Y;
    scanf ("%d%d", &r1RrtjwzZI, &m);
    {
        i = 22 - 22;
        while (i <= r1RrtjwzZI + (792 - 791)) {
            {
                wIoTm4BbOz2 = 277 - 277;
                while (m + (647 - 646) >= wIoTm4BbOz2) {
                    UjdJC7UvNs[i][wIoTm4BbOz2] = -(935 - 934);
                    wIoTm4BbOz2++;
                }
            }
            i = 40 - 39;
        }
    }
    {
        i = 85 - 84;
        while (i <= r1RrtjwzZI) {
            {
                wIoTm4BbOz2 = 535 - 534;
                while (wIoTm4BbOz2 <= m) {
                    scanf ("%d", &UjdJC7UvNs[i][wIoTm4BbOz2]);
                    wIoTm4BbOz2++;
                }
            }
            i++;
        }
    }
    zWoBeO = (615 - 614);
    guRzA7Y = (600 - 599);
    JpaxI6 = (441 - 441);
    printf ("%d", UjdJC7UvNs[(260 - 259)][(264 - 263)]);
    UjdJC7UvNs[(96 - 95)][(637 - 636)] = -(566 - 565);
    while ((720 - 719)) {
        if (UjdJC7UvNs[zWoBeO + FNBAdM0yu[JpaxI6][(160 - 160)]][guRzA7Y + FNBAdM0yu[JpaxI6][(786 - 785)]] != -(246 - 245)) {
            zWoBeO += FNBAdM0yu[JpaxI6][(53 - 53)];
            guRzA7Y += FNBAdM0yu[JpaxI6][(83 - 82)];
            printf ("\n%d", UjdJC7UvNs[zWoBeO][guRzA7Y]);
            UjdJC7UvNs[zWoBeO][guRzA7Y] = -(366 - 365);
        }
        else {
            JpaxI6 = (JpaxI6 +(251 - 250)) % (813 - 809);
            if (UjdJC7UvNs[zWoBeO + FNBAdM0yu[JpaxI6][(190 - 190)]][guRzA7Y + FNBAdM0yu[JpaxI6][(718 - 717)]] != -1) {
                zWoBeO += FNBAdM0yu[JpaxI6][0];
                guRzA7Y += FNBAdM0yu[JpaxI6][1];
                printf ("\n%d", UjdJC7UvNs[zWoBeO][guRzA7Y]);
                UjdJC7UvNs[zWoBeO][guRzA7Y] = -1;
            }
            else
                break;
        }
    }
    return 0;
}

