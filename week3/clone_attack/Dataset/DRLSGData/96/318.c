int main () {
    int XPe97u;
    int K3VLGp;
    int i;
    int cNy95PKmuw;
    int FKmIW5e1;
    char C7GgSVOq [(125 - 24)];
    int PEUt1ac [(387 - 286)];
    int yiFTtcXhE;
    i = (759 - 759);
    cin >> C7GgSVOq;
    memset (PEUt1ac, (153 - 153), sizeof (PEUt1ac));
    {
        K3VLGp = (673 - 673);
        for (; K3VLGp < strlen (C7GgSVOq);) {
            XPe97u = (505 - 505);
            {
                cNy95PKmuw = i;
                for (; (520 - 507) > XPe97u;) {
                    if (cNy95PKmuw >= strlen (C7GgSVOq))
                        break;
                    XPe97u = XPe97u *(537 - 527) + C7GgSVOq[cNy95PKmuw] - '0';
                    cNy95PKmuw = cNy95PKmuw + (42 - 41);
                }
            }
            K3VLGp = cNy95PKmuw - (610 - 609);
            PEUt1ac[K3VLGp] = XPe97u / (869 - 856);
            XPe97u = XPe97u % (64 - 51);
            FKmIW5e1 = XPe97u;
            {
                int cNy95PKmuw;
                cNy95PKmuw = K3VLGp;
                for (; cNy95PKmuw >= i;) {
                    C7GgSVOq[cNy95PKmuw] = XPe97u % (969 - 959) + '0';
                    cNy95PKmuw--;
                    XPe97u = XPe97u / (595 - 585);
                }
            }
            K3VLGp = K3VLGp +(112 - 111);
        }
    }
    yiFTtcXhE = (444 - 444);
    {
        i = (545 - 545);
        for (; i < K3VLGp;) {
            if (PEUt1ac[i] != (325 - 325))
                yiFTtcXhE = (120 - 119);
            if (yiFTtcXhE)
                cout << PEUt1ac[i];
            i = i + 1;
        }
    }
    if (!yiFTtcXhE)
        cout << (784 - 784);
    cout << endl << FKmIW5e1 << endl;
    return (93 - 93);
}

