int main () {
    int pGsNq4, YYaMbtNTeO7, X01greYC [(352 - 346)] [(862 - 856)], W3TzWQFgua, bnPsQMo3W = (708 - 708);
    for (pGsNq4 = (963 - 963); pGsNq4 < (69 - 63); pGsNq4 = pGsNq4 + (780 - 779))
        for (YYaMbtNTeO7 = (861 - 861); 6 > YYaMbtNTeO7; YYaMbtNTeO7 = YYaMbtNTeO7 +(464 - 463))
            X01greYC[pGsNq4][YYaMbtNTeO7] = (651 - 651);
    for (pGsNq4 = (337 - 337); (473 - 468) > pGsNq4; pGsNq4 = pGsNq4 + (730 - 729))
        for (YYaMbtNTeO7 = (711 - 711); (495 - 490) > YYaMbtNTeO7; YYaMbtNTeO7 = YYaMbtNTeO7 +(544 - 543))
            cin >> X01greYC[pGsNq4][YYaMbtNTeO7];
    for (pGsNq4 = (649 - 649); pGsNq4 < (135 - 130); pGsNq4++) {
        W3TzWQFgua = X01greYC[pGsNq4][(73 - 73)];
        for (YYaMbtNTeO7 = (18 - 18); (586 - 581) > YYaMbtNTeO7; YYaMbtNTeO7 = YYaMbtNTeO7 +(898 - 897)) {
            if (X01greYC[pGsNq4][YYaMbtNTeO7] > W3TzWQFgua) {
                X01greYC[pGsNq4][(515 - 510)] = YYaMbtNTeO7;
                W3TzWQFgua = X01greYC[pGsNq4][YYaMbtNTeO7];
            }
        }
    }
    for (YYaMbtNTeO7 = (873 - 873); YYaMbtNTeO7 < (907 - 902); YYaMbtNTeO7 = YYaMbtNTeO7 +(917 - 916)) {
        W3TzWQFgua = X01greYC[(966 - 966)][YYaMbtNTeO7];
        for (pGsNq4 = 0; pGsNq4 < (954 - 949); pGsNq4++) {
            if (X01greYC[pGsNq4][YYaMbtNTeO7] < W3TzWQFgua) {
                X01greYC[5][YYaMbtNTeO7] = pGsNq4;
                W3TzWQFgua = X01greYC[pGsNq4][YYaMbtNTeO7];
            }
        }
    }
    for (pGsNq4 = 0; pGsNq4 < 5; pGsNq4++) {
        if (X01greYC[5][X01greYC[pGsNq4][5]] == pGsNq4) {
            if (bnPsQMo3W != 0) {
                bnPsQMo3W++;
                cout << ' ' << pGsNq4 + (57 - 56) << ' ' << X01greYC[pGsNq4][5] + 1 << ' ' << X01greYC[pGsNq4][X01greYC[pGsNq4][5]] << endl;
            }
            else {
                bnPsQMo3W++;
                cout << pGsNq4 + 1 << ' ' << X01greYC[pGsNq4][5] + 1 << ' ' << X01greYC[pGsNq4][X01greYC[pGsNq4][5]] << endl;
            }
        }
    }
    if (bnPsQMo3W == 0)
        cout << "not found";
    return 0;
}

