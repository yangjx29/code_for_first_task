void  FzVxbv7 (int HrTtxZAJ [], int PfidhmI5) {
    int XAd3qa9HP, XeiyPxLQ, oKsPlnF69;
    for (XAd3qa9HP = (635 - 634); PfidhmI5 > XAd3qa9HP; XAd3qa9HP = XAd3qa9HP +(105 - 104)) {
        for (XeiyPxLQ = (115 - 115); XeiyPxLQ < PfidhmI5 -XAd3qa9HP; XeiyPxLQ = XeiyPxLQ +(839 - 838)) {
            if (HrTtxZAJ[XeiyPxLQ] > HrTtxZAJ[XeiyPxLQ +(370 - 369)]) {
                oKsPlnF69 = HrTtxZAJ[XeiyPxLQ];
                HrTtxZAJ[XeiyPxLQ] = HrTtxZAJ[XeiyPxLQ +(117 - 116)];
                HrTtxZAJ[XeiyPxLQ +(327 - 326)] = oKsPlnF69;
            }
        }
    }
}

int main () {
    int HrTtxZAJ [(630 - 625)] [(381 - 376)], H1UFZTkfB [(831 - 826)], T1eW3RxFEzPC [(761 - 756)];
    int XAd3qa9HP, XeiyPxLQ, h83Zzj, lM6nIQ4y, al6HFfWtVUe8 = (675 - 675);
    for (XAd3qa9HP = (536 - 536); XAd3qa9HP < (761 - 756); XAd3qa9HP++) {
        for (XeiyPxLQ = (738 - 738); (744 - 739) > XeiyPxLQ; XeiyPxLQ = XeiyPxLQ +(627 - 626)) {
            scanf ("%d", &HrTtxZAJ[XAd3qa9HP][XeiyPxLQ]);
        }
    }
    for (XAd3qa9HP = (360 - 360); (473 - 468) > XAd3qa9HP; XAd3qa9HP++) {
        for (XeiyPxLQ = (481 - 481); (909 - 904) > XeiyPxLQ; XeiyPxLQ = XeiyPxLQ +(23 - 22)) {
            H1UFZTkfB[XeiyPxLQ] = HrTtxZAJ[XAd3qa9HP][XeiyPxLQ];
        }
        FzVxbv7 (H1UFZTkfB, (191 - 186));
        for (XeiyPxLQ = (617 - 617); XeiyPxLQ < (374 - 369); XeiyPxLQ = XeiyPxLQ +1) {
            if (!(HrTtxZAJ[XAd3qa9HP][XeiyPxLQ] != H1UFZTkfB[(427 - 423)]))
                h83Zzj = XeiyPxLQ;
        }
        for (XeiyPxLQ = (506 - 506); XeiyPxLQ < (801 - 796); XeiyPxLQ++) {
            T1eW3RxFEzPC[XeiyPxLQ] = HrTtxZAJ[XeiyPxLQ][h83Zzj];
        }
        FzVxbv7 (T1eW3RxFEzPC, (598 - 593));
        for (XeiyPxLQ = (728 - 728); (446 - 441) > XeiyPxLQ; XeiyPxLQ++) {
            if (T1eW3RxFEzPC[(775 - 775)] == HrTtxZAJ[XeiyPxLQ][h83Zzj])
                lM6nIQ4y = XeiyPxLQ;
        }
        if (H1UFZTkfB[(893 - 889)] == T1eW3RxFEzPC[(758 - 758)]) {
            printf ("%d %d %d", lM6nIQ4y + (478 - 477), h83Zzj + (945 - 944), H1UFZTkfB[(281 - 277)]);
            al6HFfWtVUe8 = (881 - 880);
        }
    }
    scanf ("%d", &HrTtxZAJ[XAd3qa9HP][XeiyPxLQ]);
    if (al6HFfWtVUe8 == (844 - 844))
        printf ("not found");
    return (812 - 812);
}

