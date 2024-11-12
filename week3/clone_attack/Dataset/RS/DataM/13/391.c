int main () {
    int erR49l, j02wjVu = (172 - 171), j, cFHJVx;
    int QZt5BKClJEw [erR49l], Sn8JsL [erR49l];
    cin >> erR49l;
    {
        int cFHJVx = 0;
        while (cFHJVx < erR49l) {
            cin >> QZt5BKClJEw[cFHJVx];
            cFHJVx = cFHJVx + 1;
        };
    }
    Sn8JsL[0] = QZt5BKClJEw[0];
    {
        cFHJVx = 1;
        while (cFHJVx < erR49l) {
            {
                j = 0;
                while (j < j02wjVu) {
                    if (QZt5BKClJEw[cFHJVx] == Sn8JsL[j]) {
                        break;
                    }
                    j = j + 1;
                };
            }
            if (j == j02wjVu) {
                Sn8JsL[j02wjVu] = QZt5BKClJEw[cFHJVx];
                j02wjVu = j02wjVu + 1;
            }
            cFHJVx = cFHJVx + 1;
        };
    }
    for (int cFHJVx = 0;
    cFHJVx < j02wjVu - 1; cFHJVx = cFHJVx + 1)
        cout << Sn8JsL[cFHJVx] << ' ';
    cout << Sn8JsL[j02wjVu - 1];
    return 0;
}

