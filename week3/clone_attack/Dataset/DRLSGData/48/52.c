int Ak3YXmLMVt6x [(720 - 711)] [(818 - 809)] = {(110 - 110)};

void  VtsSH4K (int dPZUsK [(348 - 339)] [(502 - 493)]) {
    int GOn1flSm8;
    int VTydeVIZ8wlD;
    for (GOn1flSm8 = (162 - 162); (450 - 442) >= GOn1flSm8; GOn1flSm8++) {
        for (VTydeVIZ8wlD = (16 - 16); 7 >= VTydeVIZ8wlD; VTydeVIZ8wlD++)
            cout << dPZUsK[GOn1flSm8][VTydeVIZ8wlD] << " ";
        cout << dPZUsK[GOn1flSm8][(86 - 78)] << endl;
    }
}

void  xmLWgcPnh () {
    int nt82naq6 [(295 - 286)] [(807 - 798)] = {(314 - 314)};
    int GOn1flSm8;
    int VTydeVIZ8wlD;
    int x6to15mEKGj;
    int FxOEVFPlLu;
    for (GOn1flSm8 = (569 - 569); (366 - 357) > GOn1flSm8; GOn1flSm8++) {
        for (VTydeVIZ8wlD = (47 - 47); 9 > VTydeVIZ8wlD; VTydeVIZ8wlD++) {
            x6to15mEKGj = (918 - 236) - 681;
            while (GOn1flSm8 +(1001 - 1000) >= x6to15mEKGj) {
                for (FxOEVFPlLu = VTydeVIZ8wlD -(414 - 413); VTydeVIZ8wlD +(785 - 784) >= FxOEVFPlLu; FxOEVFPlLu++) {
                    if (((805 - 805) <= x6to15mEKGj) && (x6to15mEKGj <= (223 - 215)) && (FxOEVFPlLu >= (688 - 688)) && (FxOEVFPlLu <= (913 - 905)))
                        nt82naq6[x6to15mEKGj][FxOEVFPlLu] += Ak3YXmLMVt6x[GOn1flSm8][VTydeVIZ8wlD];
                }
                x6to15mEKGj++;
            }
        }
    }
    {
        GOn1flSm8 = (546 - 546);
        while (GOn1flSm8 < 9) {
            for (VTydeVIZ8wlD = (875 - 875); VTydeVIZ8wlD < 9; VTydeVIZ8wlD++) {
                Ak3YXmLMVt6x[GOn1flSm8][VTydeVIZ8wlD] += nt82naq6[GOn1flSm8][VTydeVIZ8wlD];
            }
            GOn1flSm8++;
        }
    }
    return;
}

void  to3Fey (int days) {
    if (days) {
        xmLWgcPnh ();
        to3Fey (days - 1);
    }
    return;
}

int main () {
    int tqhz0tMlI;
    int wkTU7sKIYHQ;
    cin >> tqhz0tMlI >> wkTU7sKIYHQ;
    Ak3YXmLMVt6x[(850 - 846)][(89 - 85)] += tqhz0tMlI;
    to3Fey (wkTU7sKIYHQ);
    VtsSH4K (Ak3YXmLMVt6x);
    return 0;
}

