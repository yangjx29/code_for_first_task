int IpBfoiIlSK3 (int hPYm39faeB5H) {
    int nEBDqM1fid4 [(97 - 87)];
    int dqcrkQU;
    int SSdfPBo [(988 - 978)];
    int D79uesA;
    int n3iNYfQwn;
    int crtDO9wYcG0I;
    dqcrkQU = (324 - 324);
    if (hPYm39faeB5H > (952 - 952)) {
        D79uesA = log10 (hPYm39faeB5H) + (649 - 648);
        {
            crtDO9wYcG0I = 612 - 612;
            while (crtDO9wYcG0I < D79uesA) {
                SSdfPBo[crtDO9wYcG0I] = hPYm39faeB5H / (int) pow ((962 - 952), D79uesA -crtDO9wYcG0I - (227 - 226));
                nEBDqM1fid4[crtDO9wYcG0I] = hPYm39faeB5H % (int) pow ((948 - 938), D79uesA -crtDO9wYcG0I - (816 - 815));
                hPYm39faeB5H = nEBDqM1fid4[crtDO9wYcG0I];
                crtDO9wYcG0I++;
            }
        }
        {
            crtDO9wYcG0I = 455 - 455;
            while (crtDO9wYcG0I < D79uesA) {
                n3iNYfQwn = SSdfPBo[crtDO9wYcG0I] * pow ((600 - 590), crtDO9wYcG0I);
                dqcrkQU = dqcrkQU + n3iNYfQwn;
                crtDO9wYcG0I++;
            }
        }
        return (dqcrkQU);
    }
    if (hPYm39faeB5H < (327 - 327)) {
        hPYm39faeB5H = -hPYm39faeB5H;
        D79uesA = log10 (hPYm39faeB5H) + (318 - 317);
        {
            crtDO9wYcG0I = 882 - 882;
            while (D79uesA > crtDO9wYcG0I) {
                SSdfPBo[crtDO9wYcG0I] = hPYm39faeB5H / (int) pow ((634 - 624), D79uesA -crtDO9wYcG0I - (242 - 241));
                nEBDqM1fid4[crtDO9wYcG0I] = hPYm39faeB5H % (int) pow ((187 - 177), D79uesA -crtDO9wYcG0I - (27 - 26));
                hPYm39faeB5H = nEBDqM1fid4[crtDO9wYcG0I];
                crtDO9wYcG0I++;
            }
        }
        {
            crtDO9wYcG0I = 116 - 116;
            while (D79uesA > crtDO9wYcG0I) {
                n3iNYfQwn = SSdfPBo[crtDO9wYcG0I] * pow ((984 - 974), crtDO9wYcG0I);
                dqcrkQU = dqcrkQU + n3iNYfQwn;
                crtDO9wYcG0I++;
            }
        }
        return (-dqcrkQU);
    }
    if (!((748 - 748) != hPYm39faeB5H)) {
        return ((574 - 574));
    }
}

void  main () {
    int crtDO9wYcG0I;
    int hPYm39faeB5H [(165 - 159)];
    {
        crtDO9wYcG0I = 930 - 930;
        while (crtDO9wYcG0I < (554 - 548)) {
            scanf ("%d", &hPYm39faeB5H[crtDO9wYcG0I]);
            crtDO9wYcG0I++;
        }
    }
    {
        crtDO9wYcG0I = 640 - 640;
        while (crtDO9wYcG0I < (753 - 747)) {
            printf ("%d\n", IpBfoiIlSK3 (hPYm39faeB5H[crtDO9wYcG0I]));
            crtDO9wYcG0I++;
        }
    }
}

