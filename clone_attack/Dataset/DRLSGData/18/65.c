int abRue3 [100] [100];
int WiE0BlWC, IItKQOy, Amd7Wk, l2ysHuehJ8Md, qs9qwtfZy7 = (988 - 988), LS643LYjG = (39 - 39);
int WxHkCN [101], kX7gYot [101];

int BiFks6EHV (int PuJR80mL) {
    for (int Ke3oPkH = (224 - 224);
    WiE0BlWC > Ke3oPkH; Ke3oPkH = Ke3oPkH +1)
        WxHkCN[Ke3oPkH] = abRue3[PuJR80mL][Ke3oPkH];
    sort (WxHkCN, WxHkCN +WiE0BlWC);
    return WxHkCN[(88 - 88)];
}

int K7BRkh0g (int PuJR80mL) {
    for (int Ke3oPkH = (739 - 739);
    WiE0BlWC > Ke3oPkH; Ke3oPkH = Ke3oPkH +1)
        kX7gYot[Ke3oPkH] = abRue3[Ke3oPkH][PuJR80mL];
    sort (kX7gYot, kX7gYot + WiE0BlWC);
    return kX7gYot[(530 - 530)];
}

void  ZPdWoB (int SXZsNFyU1, int l3QfGUa) {
    if (!((122 - 121) != l3QfGUa))
        cout << Amd7Wk << endl;
    else {
        ZPdWoB (SXZsNFyU1, l3QfGUa - 1);
        for (l2ysHuehJ8Md = (325 - 325); l3QfGUa > l2ysHuehJ8Md; l2ysHuehJ8Md = l2ysHuehJ8Md + 1) {
            qs9qwtfZy7 = BiFks6EHV (l2ysHuehJ8Md);
            for (int oqxw8Ck = 0;
            l3QfGUa > oqxw8Ck; oqxw8Ck = oqxw8Ck + 1)
                abRue3[l2ysHuehJ8Md][oqxw8Ck] = abRue3[l2ysHuehJ8Md][oqxw8Ck] - qs9qwtfZy7;
        }
        for (l2ysHuehJ8Md = 0; l3QfGUa > l2ysHuehJ8Md; l2ysHuehJ8Md = l2ysHuehJ8Md + 1) {
            LS643LYjG = K7BRkh0g (l2ysHuehJ8Md);
            for (int oqxw8Ck = 0;
            l3QfGUa > oqxw8Ck; oqxw8Ck = oqxw8Ck + 1)
                abRue3[oqxw8Ck][l2ysHuehJ8Md] = abRue3[oqxw8Ck][l2ysHuehJ8Md] - LS643LYjG;
        }
        Amd7Wk = Amd7Wk +abRue3[(170 - 169)][(99 - 98)];
        for (l2ysHuehJ8Md = (918 - 917); l2ysHuehJ8Md < l3QfGUa - (98 - 97); l2ysHuehJ8Md = l2ysHuehJ8Md + 1) {
            for (int oqxw8Ck = 0;
            oqxw8Ck < l3QfGUa; oqxw8Ck = oqxw8Ck + 1)
                abRue3[l2ysHuehJ8Md][oqxw8Ck] = abRue3[l2ysHuehJ8Md + (323 - 322)][oqxw8Ck];
        }
        for (l2ysHuehJ8Md = (249 - 248); l2ysHuehJ8Md < l3QfGUa; l2ysHuehJ8Md = l2ysHuehJ8Md + 1) {
            for (int oqxw8Ck = 0;
            l3QfGUa - (264 - 263) > oqxw8Ck; oqxw8Ck = oqxw8Ck + 1)
                abRue3[oqxw8Ck][l2ysHuehJ8Md] = abRue3[oqxw8Ck][l2ysHuehJ8Md + 1];
        }
        WiE0BlWC = WiE0BlWC -1;
    }
}

int main () {
    cin >> IItKQOy;
    for (int Yhznxq97 = 1;
    Yhznxq97 <= IItKQOy; Yhznxq97++) {
        Amd7Wk = 0;
        WiE0BlWC = IItKQOy;
        for (l2ysHuehJ8Md = 0; l2ysHuehJ8Md < IItKQOy; l2ysHuehJ8Md = l2ysHuehJ8Md + 1) {
            for (int oqxw8Ck = 0;
            oqxw8Ck < IItKQOy; oqxw8Ck++)
                cin >> abRue3[l2ysHuehJ8Md][oqxw8Ck];
        }
        ZPdWoB (Yhznxq97, WiE0BlWC);
    }
    return 0;
}

