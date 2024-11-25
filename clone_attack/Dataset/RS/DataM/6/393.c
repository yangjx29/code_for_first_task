int main () {
    int sHbrO8;
    int B5DHto;
    int eqZPpAbf8Xhe;
    int IovZ5S;
    int eRHsbnfcAQ [100] [100];
    cin >> sHbrO8;
    for (int TZUYpb = 0;
    sHbrO8 > TZUYpb; TZUYpb++) {
        cin >> B5DHto >> eqZPpAbf8Xhe;
        for (int I0b9XBms = 0;
        B5DHto > I0b9XBms; I0b9XBms++)
            for (int j = 0;
            j < eqZPpAbf8Xhe; j++)
                cin >> eRHsbnfcAQ[I0b9XBms][j];
        IovZ5S = 0;
        for (int I0b9XBms = 1;
        I0b9XBms < B5DHto -1; I0b9XBms++) {
            IovZ5S += eRHsbnfcAQ[I0b9XBms][0];
            IovZ5S += eRHsbnfcAQ[I0b9XBms][eqZPpAbf8Xhe - 1];
        }
        {
            int j = 0;
            while (j < eqZPpAbf8Xhe) {
                IovZ5S += eRHsbnfcAQ[0][j];
                IovZ5S += eRHsbnfcAQ[B5DHto -1][j];
                j++;
            };
        }
        cout << IovZ5S << endl;
    }
    return 0;
}

