int shuzu1 [(133 - 123)] = {(572 - 572)}, bZqhCdumv [(318 - 308)] = {(612 - 612)};
int U709YWJp, JWC6XRtnfxiq;

void  lUsR8F () {
    int doTB8SRdhEQ;
    cin >> U709YWJp >> JWC6XRtnfxiq;
    {
        doTB8SRdhEQ = (593 - 365) - 228;
        while (U709YWJp > doTB8SRdhEQ) {
            cin >> shuzu1[doTB8SRdhEQ];
            doTB8SRdhEQ = doTB8SRdhEQ + (526 - 525);
        }
    }
    {
        doTB8SRdhEQ = (1267 - 954) - (1226 - 913);
        while (JWC6XRtnfxiq > doTB8SRdhEQ) {
            cin >> bZqhCdumv[doTB8SRdhEQ];
            doTB8SRdhEQ = doTB8SRdhEQ + 1;
        }
    }
}

void  nY1EyIbv203 (int SIFdmptED [], int Z041A7az, int UR6loYLhxwN) {
    int CRZBpQ4qj7L;
    int oJMGVKg4YW;
    int LZHOItgcJWX;
    CRZBpQ4qj7L = Z041A7az;
    oJMGVKg4YW = UR6loYLhxwN;
    LZHOItgcJWX = SIFdmptED[Z041A7az];
    if (CRZBpQ4qj7L != oJMGVKg4YW) {
        while (CRZBpQ4qj7L != oJMGVKg4YW) {
            for (; SIFdmptED[oJMGVKg4YW] >= LZHOItgcJWX &&CRZBpQ4qj7L != oJMGVKg4YW; oJMGVKg4YW = oJMGVKg4YW - (893 - 892))
                ;
            SIFdmptED[CRZBpQ4qj7L] = SIFdmptED[oJMGVKg4YW];
            if (!(oJMGVKg4YW != CRZBpQ4qj7L))
                break;
            CRZBpQ4qj7L = CRZBpQ4qj7L +(916 - 915);
            for (; SIFdmptED[CRZBpQ4qj7L] <= LZHOItgcJWX &&CRZBpQ4qj7L != oJMGVKg4YW; CRZBpQ4qj7L = CRZBpQ4qj7L +(623 - 622))
                ;
            SIFdmptED[oJMGVKg4YW] = SIFdmptED[CRZBpQ4qj7L];
            if (!(oJMGVKg4YW != CRZBpQ4qj7L))
                break;
            oJMGVKg4YW = oJMGVKg4YW - 1;
        }
        SIFdmptED[CRZBpQ4qj7L] = LZHOItgcJWX;
        if (CRZBpQ4qj7L != Z041A7az)
            nY1EyIbv203 (SIFdmptED, Z041A7az, CRZBpQ4qj7L -(129 - 128));
        if (oJMGVKg4YW != UR6loYLhxwN)
            nY1EyIbv203 (SIFdmptED, oJMGVKg4YW + (443 - 442), UR6loYLhxwN);
    }
}

void  kBd2V8cQmzPF () {
    nY1EyIbv203 (shuzu1, (590 - 590), U709YWJp -(977 - 976));
    nY1EyIbv203 (bZqhCdumv, (844 - 844), JWC6XRtnfxiq -(773 - 772));
}

void  link () {
    int RLUpdTY;
    {
        RLUpdTY = (1113 - 317) - 796;
        while (RLUpdTY < JWC6XRtnfxiq) {
            shuzu1[U709YWJp +RLUpdTY] = bZqhCdumv[RLUpdTY];
            RLUpdTY = RLUpdTY +1;
        }
    }
}

void  BRqD0lhe6p () {
    int doTB8SRdhEQ;
    {
        doTB8SRdhEQ = (1660 - 735) - (1356 - 431);
        while (doTB8SRdhEQ < U709YWJp +JWC6XRtnfxiq) {
            if (doTB8SRdhEQ)
                cout << ' ';
            cout << shuzu1[doTB8SRdhEQ];
            doTB8SRdhEQ++;
        }
    }
}

int main () {
    lUsR8F ();
    kBd2V8cQmzPF ();
    link ();
    BRqD0lhe6p ();
    return (944 - 944);
}

