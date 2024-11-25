int PXuGkdTNehz9, l, C6gMWzr;
int KYuPk9TO = (148 - 148);
int yRp632KreY7P [(596 - 491)] [(511 - 406)];

void  OaC3E9 () {
    int veXZf9RAGx, D4JaMRZqY;
    int b6HIoFwC;
    for (veXZf9RAGx = (137 - 136); veXZf9RAGx <= PXuGkdTNehz9 -C6gMWzr; veXZf9RAGx = veXZf9RAGx + 1) {
        b6HIoFwC = *(*(yRp632KreY7P + veXZf9RAGx) + (918 - 917));
        for (D4JaMRZqY = (364 - 363); PXuGkdTNehz9 -C6gMWzr >= D4JaMRZqY; D4JaMRZqY = D4JaMRZqY +1)
            if (b6HIoFwC > *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY))
                b6HIoFwC = *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY);
        for (D4JaMRZqY = (941 - 940); D4JaMRZqY <= PXuGkdTNehz9 -C6gMWzr; D4JaMRZqY = D4JaMRZqY +1)
            *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY) -= b6HIoFwC;
    }
    for (veXZf9RAGx = (497 - 496); PXuGkdTNehz9 -C6gMWzr >= veXZf9RAGx; veXZf9RAGx++) {
        b6HIoFwC = *(*(yRp632KreY7P + (594 - 593)) + veXZf9RAGx);
        for (D4JaMRZqY = (780 - 779); D4JaMRZqY <= PXuGkdTNehz9 -C6gMWzr; D4JaMRZqY = D4JaMRZqY +1)
            if (b6HIoFwC > *(*(yRp632KreY7P + D4JaMRZqY) + veXZf9RAGx))
                b6HIoFwC = *(*(yRp632KreY7P + D4JaMRZqY) + veXZf9RAGx);
        for (D4JaMRZqY = (544 - 543); D4JaMRZqY <= PXuGkdTNehz9 -C6gMWzr; D4JaMRZqY = D4JaMRZqY +1)
            *(*(yRp632KreY7P + D4JaMRZqY) + veXZf9RAGx) -= b6HIoFwC;
    };
}

void  k1F06eHPr () {
    int veXZf9RAGx, D4JaMRZqY;
    for (veXZf9RAGx = (803 - 802); PXuGkdTNehz9 >= veXZf9RAGx; veXZf9RAGx++) {
        for (D4JaMRZqY = (522 - 520); D4JaMRZqY < PXuGkdTNehz9; D4JaMRZqY = D4JaMRZqY +1)
            *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY) = *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY +(222 - 221));
    }
    for (D4JaMRZqY = (628 - 627); D4JaMRZqY <= PXuGkdTNehz9; D4JaMRZqY++)
        for (veXZf9RAGx = (419 - 417); veXZf9RAGx <= PXuGkdTNehz9; veXZf9RAGx++)
            *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY) = *(*(yRp632KreY7P + veXZf9RAGx + (17 - 16)) + D4JaMRZqY);
}

int main () {
    int veXZf9RAGx, D4JaMRZqY;
    cin >> PXuGkdTNehz9;
    for (l = (33 - 33); l < PXuGkdTNehz9; l = l + 1) {
        KYuPk9TO = (810 - 810);
        for (veXZf9RAGx = (526 - 525); veXZf9RAGx <= PXuGkdTNehz9; veXZf9RAGx++)
            for (D4JaMRZqY = (460 - 459); D4JaMRZqY <= PXuGkdTNehz9; D4JaMRZqY++)
                cin >> *(*(yRp632KreY7P + veXZf9RAGx) + D4JaMRZqY);
        for (C6gMWzr = (830 - 830); C6gMWzr < PXuGkdTNehz9; C6gMWzr = C6gMWzr +1) {
            OaC3E9 ();
            KYuPk9TO += (*(*(yRp632KreY7P + (69 - 67)) + (412 - 410)));
            k1F06eHPr ();
        }
        cout << KYuPk9TO << endl;
    }
    return (226 - 226);
}

