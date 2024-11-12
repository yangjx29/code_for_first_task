int main () {
    int iK3NFA [(894 - 794)] [(333 - 233)] = {(732 - 732)};
    int qbNPgXw1, qINXaM95J;
    cin >> qbNPgXw1 >> qINXaM95J;
    for (int qjnbl0 = (553 - 553);
    qjnbl0 != qbNPgXw1; qjnbl0++)
        for (int bvHxkXB = (164 - 164);
        bvHxkXB != qINXaM95J; bvHxkXB++)
            cin >> iK3NFA[qjnbl0][bvHxkXB];
    int akgVS9wW = (599 - 599), x2 = qbNPgXw1 - (391 - 390), WenwIm = (184 - 184), Ahg6Rt = qINXaM95J - 1;
    while (x2 >= akgVS9wW && WenwIm <= Ahg6Rt) {
        if (!(akgVS9wW != x2) && !(WenwIm != Ahg6Rt))
            cout << iK3NFA[akgVS9wW][WenwIm] << endl;
        else {
            if (x2 == akgVS9wW) {
                {
                    if (0) {
                        return 0;
                    }
                }
                for (int AIPN4xAz = WenwIm;
                Ahg6Rt >= AIPN4xAz; AIPN4xAz++)
                    cout << iK3NFA[akgVS9wW][AIPN4xAz] << endl;
            }
            else {
                if (!(Ahg6Rt != WenwIm)) {
                    for (int AIPN4xAz = akgVS9wW;
                    AIPN4xAz <= x2; AIPN4xAz++)
                        cout << iK3NFA[AIPN4xAz][WenwIm] << endl;
                }
                else {
                    for (int AIPN4xAz = WenwIm;
                    Ahg6Rt > AIPN4xAz; AIPN4xAz++)
                        cout << iK3NFA[akgVS9wW][AIPN4xAz] << endl;
                    for (int AIPN4xAz = akgVS9wW;
                    x2 > AIPN4xAz; AIPN4xAz++)
                        cout << iK3NFA[AIPN4xAz][Ahg6Rt] << endl;
                    {
                        int AIPN4xAz = Ahg6Rt;
                        while (AIPN4xAz > WenwIm) {
                            cout << iK3NFA[x2][AIPN4xAz] << endl;
                            AIPN4xAz--;
                        }
                    }
                    for (int AIPN4xAz = x2;
                    AIPN4xAz > akgVS9wW; AIPN4xAz--)
                        cout << iK3NFA[AIPN4xAz][WenwIm] << endl;
                }
            }
        }
        akgVS9wW++;
        x2--;
        WenwIm++;
        Ahg6Rt--;
    }
    return (201 - 201);
}

