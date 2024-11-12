int main () {
    int okF867LEjrx3;
    int he4M0pg;
    int NYlsgaIpJkq;
    char BaPBE1tz [(1189 - 932)];
    char z6JNazlk2UtW [(1233 - 976)];
    char w3CShO1 [257];
    int RtaukTcwo4K, d0hwAJXL, Gai2GU0p, RriNDCAodIx;
    cin.getline (BaPBE1tz, 257);
    cin.getline (z6JNazlk2UtW, 257);
    cin.getline (w3CShO1, 257);
    okF867LEjrx3 = strlen (BaPBE1tz);
    he4M0pg = strlen (z6JNazlk2UtW);
    {
        Gai2GU0p = 851 - 851;
        while (Gai2GU0p < okF867LEjrx3) {
            if (BaPBE1tz[Gai2GU0p] == z6JNazlk2UtW[(132 - 132)]) {
                {
                    RtaukTcwo4K = 0;
                    while (RtaukTcwo4K < he4M0pg) {
                        if (!(z6JNazlk2UtW[RtaukTcwo4K] == BaPBE1tz[Gai2GU0p +RtaukTcwo4K]))
                            break;
                        RtaukTcwo4K = RtaukTcwo4K +1;
                    };
                }
                if (!(he4M0pg != RtaukTcwo4K))
                    break;
            }
            Gai2GU0p = Gai2GU0p +1;
        };
    }
    NYlsgaIpJkq = strlen (w3CShO1);
    if (Gai2GU0p == okF867LEjrx3)
        cout << BaPBE1tz << endl;
    else {
        for (RtaukTcwo4K = 0; RtaukTcwo4K < Gai2GU0p; RtaukTcwo4K = RtaukTcwo4K +1)
            cout << BaPBE1tz[RtaukTcwo4K];
        cout << w3CShO1;
        for (RriNDCAodIx = 0; BaPBE1tz[RtaukTcwo4K +he4M0pg + RriNDCAodIx] != '\0'; RriNDCAodIx = RriNDCAodIx +1)
            cout << BaPBE1tz[RtaukTcwo4K +he4M0pg + RriNDCAodIx];
        cout << endl;
    }
    return 0;
}

