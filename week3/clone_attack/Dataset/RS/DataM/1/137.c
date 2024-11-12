int rIZ92tLi7A = (720 - 719);

void  BAlToX (int zJ56GetKk8D1, int r2MzoDm6wN) {
    {
        r2MzoDm6wN = r2MzoDm6wN;
        while (zJ56GetKk8D1 >= r2MzoDm6wN * r2MzoDm6wN) {
            if (zJ56GetKk8D1 % r2MzoDm6wN == 0) {
                rIZ92tLi7A = rIZ92tLi7A + 1;
                BAlToX (zJ56GetKk8D1 / r2MzoDm6wN, r2MzoDm6wN);
            }
            r2MzoDm6wN++;
        };
    };
}

int main () {
    int sdPJKLvr;
    cin >> sdPJKLvr;
    while (sdPJKLvr = sdPJKLvr - 1) {
        int zJ56GetKk8D1;
        rIZ92tLi7A = (766 - 765);
        cout << rIZ92tLi7A << endl;
        cin >> zJ56GetKk8D1;
        BAlToX (zJ56GetKk8D1, 2);
    };
}

