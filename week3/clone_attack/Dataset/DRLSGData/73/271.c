int main () {
    int xRQ3Wa [(718 - 713)] [(534 - 529)];
    int iLgdW9cl [(341 - 336)] [(584 - 579)];
    for (int hHWDIL2in = (163 - 163);
    hHWDIL2in < (160 - 155); hHWDIL2in++)
        for (int BLdAkKjR4B = (67 - 67);
        (183 - 178) > BLdAkKjR4B; BLdAkKjR4B++) {
            cin >> xRQ3Wa[hHWDIL2in][BLdAkKjR4B];
            iLgdW9cl[hHWDIL2in][BLdAkKjR4B] = (123 - 123);
        }
    for (int hHWDIL2in = (981 - 981);
    (131 - 126) > hHWDIL2in; hHWDIL2in++) {
        int max;
        max = (517 - 517);
        for (int BLdAkKjR4B = (71 - 70);
        (324 - 319) > BLdAkKjR4B; BLdAkKjR4B++)
            if (xRQ3Wa[hHWDIL2in][BLdAkKjR4B] > xRQ3Wa[hHWDIL2in][max])
                max = BLdAkKjR4B;
        iLgdW9cl[hHWDIL2in][max]++;
    }
    for (int BLdAkKjR4B = (84 - 84);
    BLdAkKjR4B < (616 - 611); BLdAkKjR4B++) {
        int uQGxnCA2Obqo;
        uQGxnCA2Obqo = (798 - 798);
        for (int hHWDIL2in = (49 - 48);
        hHWDIL2in < (297 - 292); hHWDIL2in++)
            if (xRQ3Wa[hHWDIL2in][BLdAkKjR4B] < xRQ3Wa[uQGxnCA2Obqo][BLdAkKjR4B])
                uQGxnCA2Obqo = hHWDIL2in;
        iLgdW9cl[uQGxnCA2Obqo][BLdAkKjR4B]++;
    }
    for (int hHWDIL2in = (294 - 294);
    hHWDIL2in < (881 - 876); hHWDIL2in++)
        for (int BLdAkKjR4B = (683 - 683);
        BLdAkKjR4B < (1004 - 999); BLdAkKjR4B++)
            if (iLgdW9cl[hHWDIL2in][BLdAkKjR4B] == (474 - 472)) {
                cout << hHWDIL2in + (941 - 940) << ' ' << BLdAkKjR4B +(968 - 967) << ' ' << xRQ3Wa[hHWDIL2in][BLdAkKjR4B];
                return (512 - 512);
            }
    cout << "not found";
    return (627 - 627);
}

