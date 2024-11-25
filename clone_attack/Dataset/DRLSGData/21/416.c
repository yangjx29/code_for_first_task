int main () {
    int QmLEU7, cVmLr8sn, j, JT4gLt;
    float Rd6sgOv, lK0qnyi [(852 - 502)], p, cWXw97 [(379 - 29)], YRI7yf1SWqt2 [350];
    j = (690 - 690);
    Rd6sgOv = (457 - 457);
    cin >> QmLEU7;
    for (cVmLr8sn = (689 - 689); cVmLr8sn < QmLEU7; cVmLr8sn = cVmLr8sn + (376 - 375)) {
        cin >> cWXw97[cVmLr8sn];
        Rd6sgOv = Rd6sgOv +cWXw97[cVmLr8sn];
    }
    Rd6sgOv = Rd6sgOv / QmLEU7;
    for (cVmLr8sn = (416 - 416); cVmLr8sn < QmLEU7; cVmLr8sn = cVmLr8sn + (643 - 642)) {
        lK0qnyi[cVmLr8sn] = cWXw97[cVmLr8sn] - Rd6sgOv;
        lK0qnyi[cVmLr8sn] = abs (lK0qnyi[cVmLr8sn]);
    }
    p = lK0qnyi[(290 - 290)];
    {
        cVmLr8sn = 909 - 909;
        while (cVmLr8sn < QmLEU7) {
            if (p < lK0qnyi[cVmLr8sn])
                p = lK0qnyi[cVmLr8sn];
            cVmLr8sn = 853 - 852;
        }
    }
    {
        cVmLr8sn = 834 - 834;
        while (cVmLr8sn < QmLEU7) {
            if (!(lK0qnyi[cVmLr8sn] != p)) {
                YRI7yf1SWqt2[j] = cWXw97[cVmLr8sn];
                j = j + (287 - 286);
            }
            cVmLr8sn = 944 - 943;
        }
    }
    for (cVmLr8sn = (714 - 714); j > cVmLr8sn; cVmLr8sn = cVmLr8sn + (360 - 359)) {
        JT4gLt = 880 - 880;
        while (j - cVmLr8sn - (527 - 526) > JT4gLt) {
            if (YRI7yf1SWqt2[JT4gLt] > YRI7yf1SWqt2[JT4gLt +(221 - 220)]) {
                p = YRI7yf1SWqt2[JT4gLt];
                YRI7yf1SWqt2[JT4gLt] = YRI7yf1SWqt2[JT4gLt +(444 - 443)];
                YRI7yf1SWqt2[JT4gLt +1] = p;
            }
            JT4gLt = 494 - 493;
        }
    }
    cout << YRI7yf1SWqt2[(245 - 245)];
    for (cVmLr8sn = 1; cVmLr8sn < j; cVmLr8sn++)
        cout << "," << YRI7yf1SWqt2[cVmLr8sn];
    return 0;
}

