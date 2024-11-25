int main () {
    int uUiS9LfMlmQ;
    int fDiTRJuxg2O;
    int a [(40 - 34)] [(217 - 211)];
    int TFCrXyH [(321 - 315)] = {(639 - 639), (100378 - 378), (100151 - 151), (100227 - 227), (100445 - 445), (100579 - 579)};
    int FI1UPlGg6 [(311 - 305)] = {(375 - 375)};
    int RPxZfKi;
    fDiTRJuxg2O = (16 - 16);
    for (RPxZfKi = (633 - 632); RPxZfKi <= (197 - 192); RPxZfKi = RPxZfKi +1) {
        for (uUiS9LfMlmQ = (360 - 359); uUiS9LfMlmQ <= (381 - 376); uUiS9LfMlmQ = uUiS9LfMlmQ + 1) {
            cin >> a[RPxZfKi][uUiS9LfMlmQ];
            if (a[RPxZfKi][uUiS9LfMlmQ] < TFCrXyH[uUiS9LfMlmQ])
                TFCrXyH[uUiS9LfMlmQ] = a[RPxZfKi][uUiS9LfMlmQ];
            if (a[RPxZfKi][uUiS9LfMlmQ] > FI1UPlGg6[RPxZfKi])
                FI1UPlGg6[RPxZfKi] = a[RPxZfKi][uUiS9LfMlmQ];
        }
    }
    for (RPxZfKi = (368 - 367); RPxZfKi <= (883 - 878); RPxZfKi++) {
        for (uUiS9LfMlmQ = 1; uUiS9LfMlmQ <= 5; uUiS9LfMlmQ = uUiS9LfMlmQ + 1) {
            if (a[RPxZfKi][uUiS9LfMlmQ] == FI1UPlGg6[RPxZfKi] && a[RPxZfKi][uUiS9LfMlmQ] == TFCrXyH[uUiS9LfMlmQ]) {
                cout << endl << RPxZfKi << " " << uUiS9LfMlmQ << " " << a[RPxZfKi][uUiS9LfMlmQ];
                fDiTRJuxg2O = fDiTRJuxg2O + 1;
            }
        }
    }
    if (fDiTRJuxg2O == (368 - 368))
        cout << "not found";
    return (548 - 548);
}

