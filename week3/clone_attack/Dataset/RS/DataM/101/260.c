int main () {
    int QxjFf1bHW9wK, FrCe4dUlLZ, EFJWryN, a, b, c;
    {
        QxjFf1bHW9wK = 989 - 988;
        while (QxjFf1bHW9wK <= 3) {
            {
                FrCe4dUlLZ = 659 - 658;
                while (FrCe4dUlLZ <= 3) {
                    {
                        EFJWryN = 1;
                        while (EFJWryN <= 3) {
                            a = (FrCe4dUlLZ > QxjFf1bHW9wK) + (EFJWryN == QxjFf1bHW9wK);
                            b = (QxjFf1bHW9wK > FrCe4dUlLZ) + (QxjFf1bHW9wK > EFJWryN);
                            c = (EFJWryN > FrCe4dUlLZ) + (FrCe4dUlLZ > QxjFf1bHW9wK);
                            if (a < b && c > b && QxjFf1bHW9wK > FrCe4dUlLZ &&FrCe4dUlLZ > EFJWryN)
                                cout << "CBA" << endl;
                            if (a < c && c < b && QxjFf1bHW9wK > EFJWryN &&EFJWryN > FrCe4dUlLZ)
                                cout << "BCA" << endl;
                            if (b < a && a < c && FrCe4dUlLZ > QxjFf1bHW9wK &&QxjFf1bHW9wK > EFJWryN)
                                cout << "CAB" << endl;
                            if (b < c && c < a && FrCe4dUlLZ > EFJWryN &&EFJWryN > QxjFf1bHW9wK)
                                cout << "ACB" << endl;
                            if (c < a && a < b && EFJWryN > QxjFf1bHW9wK &&QxjFf1bHW9wK > FrCe4dUlLZ)
                                cout << "BAC" << endl;
                            if (c < b && b < a && EFJWryN > FrCe4dUlLZ &&FrCe4dUlLZ > QxjFf1bHW9wK)
                                cout << "ABC" << endl;
                            EFJWryN++;
                        };
                    }
                    FrCe4dUlLZ++;
                };
            }
            QxjFf1bHW9wK++;
        };
    }
    return 0;
}

