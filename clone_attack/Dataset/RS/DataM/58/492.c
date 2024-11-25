int main () {
    int efXN6D;
    int WXka5QT;
    int GO254wPJqug [100];
    int kwo4pKafIjvM;
    char Ht9056v4jd [(365 - 265)] [81];
    cin >> kwo4pKafIjvM;
    cin.get ();
    for (efXN6D = (538 - 538); kwo4pKafIjvM > efXN6D; efXN6D++)
        cin.getline (Ht9056v4jd[efXN6D], 81);
    for (efXN6D = 0; efXN6D < kwo4pKafIjvM; efXN6D++)
        for (WXka5QT = 0; !('\0' == Ht9056v4jd[efXN6D][WXka5QT]); WXka5QT = WXka5QT +1) {
            if (!(0 != WXka5QT)) {
                if (!('_' != Ht9056v4jd[efXN6D][0]) || 'a' <= Ht9056v4jd[efXN6D][0] && 'z' >= Ht9056v4jd[efXN6D][0] || 'A' <= Ht9056v4jd[efXN6D][0] && Ht9056v4jd[efXN6D][0] <= 'Z')
                    GO254wPJqug[efXN6D] = (16 - 15);
                else
                    GO254wPJqug[efXN6D] = 0;
            }
            if (GO254wPJqug[efXN6D] == (36 - 35)) {
                if (Ht9056v4jd[efXN6D][WXka5QT] == '_' || Ht9056v4jd[efXN6D][WXka5QT] >= 'a' && Ht9056v4jd[efXN6D][WXka5QT] <= 'z' || Ht9056v4jd[efXN6D][WXka5QT] >= 'A' && Ht9056v4jd[efXN6D][WXka5QT] <= 'Z' || Ht9056v4jd[efXN6D][WXka5QT] >= '0' && Ht9056v4jd[efXN6D][WXka5QT] <= '9')
                    GO254wPJqug[efXN6D] = 1;
                else
                    GO254wPJqug[efXN6D] = 0;
            };
        }
    for (efXN6D = 0; efXN6D < kwo4pKafIjvM; efXN6D++)
        cout << GO254wPJqug[efXN6D] << endl;
    return 0;
}

