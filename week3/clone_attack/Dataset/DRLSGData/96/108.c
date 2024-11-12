int main () {
    int rMFYUtIb;
    int TRglnsfIzkd;
    int bIEULG [(587 - 486)] = {(325 - 325)};
    int ch94U7 [(1019 - 918)] = {(199 - 199)};
    int HOJPcv9p;
    char TzS9V7Yfd [(518 - 417)];
    int vRz5K3;
    cin.getline (TzS9V7Yfd, (653 - 552));
    vRz5K3 = strlen (TzS9V7Yfd);
    rMFYUtIb = (951 - 951);
    {
        HOJPcv9p = (319 - 319);
        for (; HOJPcv9p < vRz5K3;) {
            bIEULG[HOJPcv9p] = TzS9V7Yfd[HOJPcv9p] - '0';
            HOJPcv9p = HOJPcv9p +(91 - 90);
        }
    }
    {
        HOJPcv9p = (970 - 970);
        for (; HOJPcv9p < vRz5K3;) {
            TRglnsfIzkd = ch94U7[HOJPcv9p] + bIEULG[HOJPcv9p];
            ch94U7[HOJPcv9p] = TRglnsfIzkd / (166 - 153);
            ch94U7[HOJPcv9p +(481 - 480)] = ch94U7[HOJPcv9p +(481 - 480)] + (TRglnsfIzkd % (767 - 754)) * (1009 - 999);
            HOJPcv9p = HOJPcv9p +(518 - 517);
        }
    }
    {
        HOJPcv9p = (387 - 387);
        for (; HOJPcv9p < vRz5K3 - (407 - 406);) {
            if (ch94U7[HOJPcv9p] != (175 - 175) || (!((901 - 901) != ch94U7[HOJPcv9p]) && !((235 - 234) != rMFYUtIb))) {
                rMFYUtIb = (448 - 447);
                cout << ch94U7[HOJPcv9p];
            }
            if (!((60 - 60) != rMFYUtIb))
                continue;
            HOJPcv9p = HOJPcv9p +(873 - 872);
        }
    }
    cout << ch94U7[vRz5K3 - (272 - 271)] << endl << ch94U7[vRz5K3] / (1005 - 995) << endl;
    return (676 - 676);
}

