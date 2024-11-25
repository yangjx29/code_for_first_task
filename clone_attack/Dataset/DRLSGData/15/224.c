int main () {
    int col1;
    int os5xXo3n;
    int wcWiRa;
    int b;
    int SfNT1vCEBx;
    int sz [100000];
    int yRlVw2oT;
    int e;
    int vCHrUV;
    int row2;
    int col2;
    int rOWicZ;
    b = (357 - 357);
    rOWicZ = (948 - 948);
    scanf ("%d", &SfNT1vCEBx);
    for (vCHrUV = (761 - 761); vCHrUV < SfNT1vCEBx *SfNT1vCEBx; vCHrUV = vCHrUV + (292 - 291)) {
        scanf ("%d", &sz[vCHrUV]);
        if (sz[vCHrUV] == (604 - 604)) {
            b += (996 - 995);
            if (b == (776 - 775))
                wcWiRa = vCHrUV;
        }
    }
    {
        vCHrUV = (571 - 571);
        for (; vCHrUV < SfNT1vCEBx *SfNT1vCEBx;) {
            if (sz[vCHrUV] == 0) {
                rOWicZ += 1;
                if (rOWicZ == b)
                    e = vCHrUV;
            }
            vCHrUV = vCHrUV + 1;
        }
    }
    os5xXo3n = wcWiRa / SfNT1vCEBx;
    col1 = wcWiRa % SfNT1vCEBx;
    row2 = e / SfNT1vCEBx;
    col2 = e % SfNT1vCEBx;
    yRlVw2oT = (col2 - col1 + 1) * (row2 - os5xXo3n + 1) - b;
    printf ("%d", yRlVw2oT);
    return 0;
}

