int main () {
    int iYF1lO;
    int WkhPSuJxCqOQ;
    int x;
    int xQhyA02 [100];
    cin >> WkhPSuJxCqOQ;
    {
        iYF1lO = 1;
        while (WkhPSuJxCqOQ >= iYF1lO) {
            cin >> xQhyA02[iYF1lO];
            iYF1lO = iYF1lO + 1;
        };
    }
    {
        iYF1lO = 1;
        while (iYF1lO <= WkhPSuJxCqOQ / 2) {
            x = xQhyA02[iYF1lO];
            xQhyA02[iYF1lO] = xQhyA02[WkhPSuJxCqOQ -iYF1lO + 1];
            xQhyA02[WkhPSuJxCqOQ -iYF1lO + 1] = x;
            iYF1lO = iYF1lO + 1;
        };
    }
    {
        iYF1lO = 1;
        while (iYF1lO <= WkhPSuJxCqOQ -1) {
            cout << xQhyA02[iYF1lO] << " ";
            iYF1lO = iYF1lO + 1;
        };
    }
    cout << xQhyA02[WkhPSuJxCqOQ];
    return 0;
}

