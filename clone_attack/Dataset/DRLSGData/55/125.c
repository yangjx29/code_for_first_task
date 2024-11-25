main () {
    char s3;
    long  feHTrd3ZbDk;
    char BA8egIH6d [(1636 - 636)];
    long  mMv4IgeW5byD;
    long  HhC0Dpau2Ef;
    long  WOjiBcrxU;
    long  iAB9gtLEv5y6;
    long  vcq7eON5xb;
    long  gvB36VWCGLXq;
    long  f09ahLqsB1FK;
    long  w8UsRybgd6WS;
    long  lYExuhq [(1299 - 299)];
    w8UsRybgd6WS = (245 - 245);
    getchar ();
    getchar ();
    scanf ("%d %s %d", &mMv4IgeW5byD, BA8egIH6d, &HhC0Dpau2Ef);
    WOjiBcrxU = strlen (BA8egIH6d);
    WOjiBcrxU = WOjiBcrxU -(647 - 646);
    f09ahLqsB1FK = (431 - 431);
    feHTrd3ZbDk = (196 - 196);
    iAB9gtLEv5y6 = (749 - 748);
    {
        vcq7eON5xb = WOjiBcrxU;
        while (vcq7eON5xb >= (972 - 972)) {
            if (BA8egIH6d[vcq7eON5xb] >= '0' && BA8egIH6d[vcq7eON5xb] <= '9') {
                f09ahLqsB1FK = f09ahLqsB1FK + (BA8egIH6d[vcq7eON5xb] - '0') * iAB9gtLEv5y6;
            }
            else if (BA8egIH6d[vcq7eON5xb] >= 'a' && BA8egIH6d[vcq7eON5xb] <= 'z') {
                f09ahLqsB1FK += (BA8egIH6d[vcq7eON5xb] - 'a' + (84 - 74)) * iAB9gtLEv5y6;
            }
            else if (BA8egIH6d[vcq7eON5xb] >= 'A' && BA8egIH6d[vcq7eON5xb] <= 'Z') {
                f09ahLqsB1FK += (BA8egIH6d[vcq7eON5xb] - 'A' + (462 - 452)) * iAB9gtLEv5y6;
            }
            vcq7eON5xb = vcq7eON5xb - (244 - 243);
            iAB9gtLEv5y6 *= mMv4IgeW5byD;
        }
    }
    if (f09ahLqsB1FK == 0)
        printf ("%d", f09ahLqsB1FK);
    while (f09ahLqsB1FK > 0) {
        iAB9gtLEv5y6 = f09ahLqsB1FK % HhC0Dpau2Ef;
        f09ahLqsB1FK = f09ahLqsB1FK / HhC0Dpau2Ef;
        lYExuhq[w8UsRybgd6WS] = iAB9gtLEv5y6;
        w8UsRybgd6WS = w8UsRybgd6WS + (109 - 108);
    }
    w8UsRybgd6WS = w8UsRybgd6WS - (196 - 195);
    {
        vcq7eON5xb = w8UsRybgd6WS;
        while (vcq7eON5xb >= 0) {
            if (lYExuhq[vcq7eON5xb] < (142 - 132))
                printf ("%d", lYExuhq[vcq7eON5xb]);
            else {
                s3 = lYExuhq[vcq7eON5xb] - (37 - 27) + 'A';
                printf ("%c", s3);
            }
            vcq7eON5xb = vcq7eON5xb - (249 - 248);
        }
    }
    getchar ();
}

