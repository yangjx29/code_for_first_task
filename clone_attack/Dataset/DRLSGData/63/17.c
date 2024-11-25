int main () {
    int I9H4OFdE [(128 - 28) + (880 - 870)] [(377 - 277) + (789 - 779)];
    int hufhYvmDkcC;
    int YRdlTwYrHPoQ;
    int KdtBHWv3p;
    int PlmoS85W2Q0;
    int wohgjKP;
    int I6xaItvpGsK;
    int z9NLb3YC [(553 - 453) + (616 - 606)] [(391 - 291) + (501 - 491)];
    int fBP3p4gVk [(862 - 762) + (477 - 467)] [100 + (57 - 47)] = {(570 - 570)};
    int C2XK3z;
    cin >> wohgjKP >> PlmoS85W2Q0;
    {
        YRdlTwYrHPoQ = (136 - 135);
        while (YRdlTwYrHPoQ <= wohgjKP) {
            {
                {
                    if ((116 - 116)) {
                        return 0;
                    }
                }
                hufhYvmDkcC = (136 - 135);
                while (hufhYvmDkcC <= PlmoS85W2Q0) {
                    cin >> I9H4OFdE[YRdlTwYrHPoQ][hufhYvmDkcC];
                    hufhYvmDkcC = hufhYvmDkcC + (910 - 909);
                }
            }
            YRdlTwYrHPoQ++;
        }
    }
    cin >> I6xaItvpGsK >> KdtBHWv3p;
    for (YRdlTwYrHPoQ = (318 - 317); YRdlTwYrHPoQ <= I6xaItvpGsK; YRdlTwYrHPoQ = YRdlTwYrHPoQ +(611 - 610)) {
        hufhYvmDkcC = (690 - 689);
        while (hufhYvmDkcC <= KdtBHWv3p) {
            cin >> z9NLb3YC[YRdlTwYrHPoQ][hufhYvmDkcC];
            hufhYvmDkcC = hufhYvmDkcC + (964 - 963);
        }
    }
    for (YRdlTwYrHPoQ = (812 - 811); YRdlTwYrHPoQ <= wohgjKP; YRdlTwYrHPoQ++)
        for (hufhYvmDkcC = (412 - 411); hufhYvmDkcC <= KdtBHWv3p; hufhYvmDkcC = hufhYvmDkcC + (683 - 682)) {
            C2XK3z = (71 - 70);
            while (C2XK3z <= PlmoS85W2Q0) {
                fBP3p4gVk[YRdlTwYrHPoQ][hufhYvmDkcC] = fBP3p4gVk[YRdlTwYrHPoQ][hufhYvmDkcC] + I9H4OFdE[YRdlTwYrHPoQ][C2XK3z] * z9NLb3YC[C2XK3z][hufhYvmDkcC];
                C2XK3z++;
            }
        }
    for (YRdlTwYrHPoQ = (760 - 759); YRdlTwYrHPoQ <= wohgjKP; YRdlTwYrHPoQ++) {
        for (hufhYvmDkcC = 1; hufhYvmDkcC < KdtBHWv3p; hufhYvmDkcC++) {
            cout << fBP3p4gVk[YRdlTwYrHPoQ][hufhYvmDkcC] << ' ';
        }
        cout << fBP3p4gVk[YRdlTwYrHPoQ][KdtBHWv3p] << endl;
    }
    return (896 - 896);
}

