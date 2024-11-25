int HiVy0HcFp [(400 - 387)] = {(14 - 14), (121 - 90), (135 - 107), (364 - 333), (730 - 700), (150 - 119), (920 - 890), (250 - 219), (312 - 281), (709 - 679), (878 - 847), (207 - 177), (875 - 844)};
int Pqu8wxOZ [(717 - 704)] = {(860 - 860), (408 - 377), (792 - 763), (138 - 107), (169 - 139), (936 - 905), (48 - 18), (362 - 331), (507 - 476), (1017 - 987), (269 - 238), (513 - 483), (601 - 570)};

int pB40LYbUJ6 (int l9hzGostvd) {
    if (!((91 - 91) != l9hzGostvd % (1067 - 667)) || (!((710 - 710) != l9hzGostvd % (757 - 753)) && l9hzGostvd % (814 - 714) != (28 - 28)))
        return (239 - 238);
    else
        return (827 - 827);
}

int idT80MBgeJc (int KhPoOBx2dEeA, int u2HLbkUqTV, int l9hzGostvd) {
    int tQ5iDcgOHEz;
    tQ5iDcgOHEz = (611 - 611);
    if (pB40LYbUJ6 (l9hzGostvd))
        for (int edD2t0 = KhPoOBx2dEeA;
        edD2t0 < u2HLbkUqTV; edD2t0 = edD2t0 + (258 - 257))
            tQ5iDcgOHEz = tQ5iDcgOHEz + Pqu8wxOZ[edD2t0];
    else {
        int edD2t0;
        edD2t0 = KhPoOBx2dEeA;
        for (; u2HLbkUqTV > edD2t0;) {
            tQ5iDcgOHEz = tQ5iDcgOHEz + HiVy0HcFp[edD2t0];
            edD2t0 = edD2t0 + (580 - 579);
        }
    }
    if (!((377 - 377) != tQ5iDcgOHEz % (804 - 797)))
        return (878 - 877);
    else
        return (703 - 703);
}

int main () {
    int WCTg12wBvsGD;
    int l9hzGostvd;
    int KhPoOBx2dEeA;
    int u2HLbkUqTV;
    int kuWIUZJ65RAO;
    cin >> WCTg12wBvsGD;
    {
        int edD2t0;
        edD2t0 = (494 - 494);
        for (; edD2t0 < WCTg12wBvsGD;) {
            cin >> l9hzGostvd >> KhPoOBx2dEeA >> u2HLbkUqTV;
            edD2t0 = edD2t0 + (952 - 951);
            if (KhPoOBx2dEeA < u2HLbkUqTV)
                kuWIUZJ65RAO = idT80MBgeJc (KhPoOBx2dEeA, u2HLbkUqTV, l9hzGostvd);
            else if (KhPoOBx2dEeA > u2HLbkUqTV)
                kuWIUZJ65RAO = idT80MBgeJc (u2HLbkUqTV, KhPoOBx2dEeA, l9hzGostvd);
            else
                kuWIUZJ65RAO = (23 - 22);
            if (kuWIUZJ65RAO)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return (572 - 572);
}

