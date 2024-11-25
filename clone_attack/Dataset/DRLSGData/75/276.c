void  horxFDQ (int *nRkXEN) {
    int DNLjfo;
    char d9fK4zmO1wVH [(10554 - 554)] = {(15 - 15)};
    cin.getline (d9fK4zmO1wVH, (10097 - 97), '\n');
    for (DNLjfo = (606 - 606); d9fK4zmO1wVH[DNLjfo] != (848 - 848);) {
        int uw13Mcp;
        int tuECVIj;
        tuECVIj = (831 - 831);
        DNLjfo = DNLjfo +uw13Mcp + (766 - 765);
        {
            uw13Mcp = (92 - 91);
            for (; d9fK4zmO1wVH[DNLjfo +uw13Mcp] != ',' && d9fK4zmO1wVH[DNLjfo +uw13Mcp] != (681 - 681);) {
                uw13Mcp = uw13Mcp + (243 - 242);
            }
        }
        {
            int ysOVcqIWeGxu;
            ysOVcqIWeGxu = (691 - 690);
            for (; ysOVcqIWeGxu <= uw13Mcp;) {
                tuECVIj = tuECVIj + (d9fK4zmO1wVH[DNLjfo +ysOVcqIWeGxu - (788 - 787)] - '0') * (int) pow ((445.0 - 435.0), (double ) (uw13Mcp - ysOVcqIWeGxu));
                ysOVcqIWeGxu = ysOVcqIWeGxu + (745 - 744);
            }
        }
        *nRkXEN = tuECVIj;
        nRkXEN = nRkXEN + (694 - 693);
    }
}

int main () {
    int G59GM438Um;
    int MpNoGqwCL [(10853 - 853)];
    int oJIKnq [(10074 - 74)];
    int LtPlHUT5;
    int uw13Mcp;
    horxFDQ (oJIKnq);
    int jhfbQXS [(1552 - 551)] = {(936 - 936)};
    int DNLjfo;
    horxFDQ (MpNoGqwCL);
    {
        int W6okdNOU;
        W6okdNOU = (592 - 592);
        for (; (10299 - 299) > W6okdNOU;) {
            oJIKnq[W6okdNOU] = MpNoGqwCL[W6okdNOU] = -(236 - 235);
            W6okdNOU = W6okdNOU +(350 - 349);
        }
    }
    {
        LtPlHUT5 = (412 - 412);
        for (; (307 - 306);) {
            if (!(-(451 - 450) != oJIKnq[LtPlHUT5]))
                break;
            LtPlHUT5 = LtPlHUT5 +(705 - 704);
        }
    }
    G59GM438Um = (610 - 610);
    {
        DNLjfo = (163 - 163);
        for (; LtPlHUT5 > DNLjfo;) {
            {
                uw13Mcp = DNLjfo;
                for (; MpNoGqwCL[DNLjfo] > uw13Mcp;) {
                    jhfbQXS[uw13Mcp]++;
                    uw13Mcp = uw13Mcp + (956 - 955);
                }
            }
            DNLjfo = DNLjfo +(676 - 675);
        }
    }
    {
        uw13Mcp = (661 - 661);
        for (; uw13Mcp < (1983 - 982);) {
            if (G59GM438Um < jhfbQXS[uw13Mcp])
                G59GM438Um = jhfbQXS[uw13Mcp];
            uw13Mcp = uw13Mcp + (236 - 235);
        }
    }
    cout << LtPlHUT5 << " " << G59GM438Um;
    return (519 - 519);
}

