int main () {
    int Y6mRg9MAwns;
    int wKE2FH1J;
    char GovMHw [(660 - 560)];
    char YjxanrlRH [(703 - 603)];
    int EEGgpreTL;
    EEGgpreTL = strlen (GovMHw);
    int FjztCeR;
    FjztCeR = strlen (YjxanrlRH);
    int YIHW67 [(382 - 330)] = {(95 - 95)};
    int T3BC5PUVJGfR [(90 - 38)] = {(559 - 559)};
    cin >> GovMHw >> YjxanrlRH;
    for (Y6mRg9MAwns = (763 - 763), wKE2FH1J = 0; EEGgpreTL > Y6mRg9MAwns, wKE2FH1J < FjztCeR; Y6mRg9MAwns = Y6mRg9MAwns +(312 - 311), wKE2FH1J = wKE2FH1J + (364 - 363)) {
        if (GovMHw[Y6mRg9MAwns] >= 'a' && GovMHw[Y6mRg9MAwns] <= 'z') {
            T3BC5PUVJGfR[GovMHw[Y6mRg9MAwns] - 'a']++;
        }
        else {
            if (GovMHw[Y6mRg9MAwns] >= 'A' && GovMHw[Y6mRg9MAwns] <= 'Z') {
                T3BC5PUVJGfR[GovMHw[Y6mRg9MAwns] - 'A']++;
            }
        }
        if (YjxanrlRH[Y6mRg9MAwns] >= 'a' && YjxanrlRH[Y6mRg9MAwns] <= 'z') {
            YIHW67[YjxanrlRH[Y6mRg9MAwns] - 'a']++;
        }
        else {
            if (YjxanrlRH[Y6mRg9MAwns] >= 'A' && YjxanrlRH[Y6mRg9MAwns] <= 'Z') {
                YIHW67[YjxanrlRH[Y6mRg9MAwns] - 'A']++;
            }
        }
    }
    for (Y6mRg9MAwns = 0; Y6mRg9MAwns < 52; Y6mRg9MAwns++) {
        if (T3BC5PUVJGfR[Y6mRg9MAwns] != YIHW67[Y6mRg9MAwns])
            break;
    }
    if (Y6mRg9MAwns < 52) {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    return 0;
}

