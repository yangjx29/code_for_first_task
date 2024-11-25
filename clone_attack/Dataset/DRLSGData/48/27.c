void  i4KicG3 (int K7vHT8 [] [(819 - 810)] [(1005 - 996)], int ovxgjKV) {
    for (int uYaTCRi7s = (417 - 413) - ovxgjKV;
    (393 - 389) + ovxgjKV >= uYaTCRi7s; uYaTCRi7s++) {
        int lrXFSo = (253 - 249) - ovxgjKV;
        while ((658 - 654) + ovxgjKV >= lrXFSo) {
            K7vHT8[ovxgjKV + (200 - 199)][uYaTCRi7s - (948 - 947)][lrXFSo - (326 - 325)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (810 - 809)][uYaTCRi7s - (718 - 717)][lrXFSo] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (707 - 706)][uYaTCRi7s - (292 - 291)][lrXFSo + (186 - 185)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (33 - 32)][uYaTCRi7s][lrXFSo - (58 - 57)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (219 - 218)][uYaTCRi7s][lrXFSo + (804 - 803)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (613 - 612)][uYaTCRi7s + (877 - 876)][lrXFSo - (653 - 652)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (532 - 531)][uYaTCRi7s + (514 - 513)][lrXFSo] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (724 - 723)][uYaTCRi7s + (209 - 208)][lrXFSo + (230 - 229)] += K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            K7vHT8[ovxgjKV + (242 - 241)][uYaTCRi7s][lrXFSo] += (737 - 735) * K7vHT8[ovxgjKV][uYaTCRi7s][lrXFSo];
            lrXFSo++;
        };
    };
}

int main () {
    int Xw6f8c2NE9q;
    int npudx2;
    int K7vHT8 [(124 - 119)] [(628 - 619)] [(587 - 578)];
    memset (K7vHT8, (248 - 248), sizeof (K7vHT8));
    cin >> Xw6f8c2NE9q >> npudx2;
    K7vHT8[(891 - 891)][(435 - 431)][(531 - 527)] = (222 - 221);
    {
        int uYaTCRi7s = (988 - 988);
        while (uYaTCRi7s < npudx2) {
            i4KicG3 (K7vHT8, uYaTCRi7s);
            uYaTCRi7s++;
        };
    }
    {
        int uYaTCRi7s = (797 - 797);
        while ((552 - 543) > uYaTCRi7s) {
            {
                int lrXFSo = (348 - 348);
                while (lrXFSo < (316 - 307)) {
                    if (lrXFSo == (502 - 502))
                        cout << K7vHT8[npudx2][uYaTCRi7s][lrXFSo] * Xw6f8c2NE9q;
                    else
                        cout << ' ' << K7vHT8[npudx2][uYaTCRi7s][lrXFSo] * Xw6f8c2NE9q;
                    lrXFSo++;
                };
            }
            cout << endl;
            uYaTCRi7s++;
        };
    }
    return (110 - 110);
}

