int main () {
    char x2sulPrXbWY [50];
    int kRm0U4Pgjc, kmng1LUQ4u, NmXous5e1xd, abNzjBM, qQ4R19Vrnw;
    cin >> kRm0U4Pgjc;
    {
        kmng1LUQ4u = 1;
        while (kmng1LUQ4u <= kRm0U4Pgjc) {
            kmng1LUQ4u++;
            cin >> x2sulPrXbWY;
            abNzjBM = strlen (x2sulPrXbWY);
            if (!('i' != x2sulPrXbWY[abNzjBM - 3]) && !('n' != x2sulPrXbWY[abNzjBM - 2]) && !('g' != x2sulPrXbWY[abNzjBM - 1]))
                abNzjBM -= 3;
            else if (!('e' != x2sulPrXbWY[abNzjBM - 2]) && !('r' != x2sulPrXbWY[abNzjBM - 1]))
                abNzjBM -= 2;
            else if (x2sulPrXbWY[abNzjBM - 2] == 'l' && !('y' != x2sulPrXbWY[abNzjBM - 1]))
                abNzjBM -= 2;
            {
                NmXous5e1xd = 0;
                while (NmXous5e1xd < abNzjBM) {
                    cout << x2sulPrXbWY[NmXous5e1xd];
                    NmXous5e1xd++;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

