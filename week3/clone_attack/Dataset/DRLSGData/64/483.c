int main () {
    int TYoNtACUx;
    int IEj2d8Ylhe;
    float egCHML2oa;
    float I9MUz1v [50];
    int u6tMCwzQ3Ns [(128 - 78)];
    int p [(782 - 732)];
    int VoFP3j8U [11];
    int gs8igK [(88 - 77)];
    int saVdjo [(1002 - 991)];
    int F8rpFhbRNSB7;
    {
        if ((649 - 649)) {
            return (989 - 989);
        }
    }
    cin >> TYoNtACUx;
    for (int UYqjxNyPX = (552 - 552);
    TYoNtACUx > UYqjxNyPX; UYqjxNyPX++) {
        {
            if ((328 - 328)) {
                return (862 - 862);
            }
        }
        cin >> saVdjo[UYqjxNyPX];
        cin >> gs8igK[UYqjxNyPX];
        cin >> VoFP3j8U[UYqjxNyPX];
    }
    IEj2d8Ylhe = (702 - 702);
    F8rpFhbRNSB7 = (82 - 82);
    for (int UYqjxNyPX = (962 - 962);
    UYqjxNyPX < TYoNtACUx; UYqjxNyPX++)
        for (int Rdys9h = UYqjxNyPX +(214 - 213);
        TYoNtACUx > Rdys9h; Rdys9h++) {
            I9MUz1v[F8rpFhbRNSB7] = sqrt ((saVdjo[UYqjxNyPX] - saVdjo[Rdys9h]) * (saVdjo[UYqjxNyPX] - saVdjo[Rdys9h]) + (gs8igK[UYqjxNyPX] - gs8igK[Rdys9h]) * (gs8igK[UYqjxNyPX] - gs8igK[Rdys9h]) + (VoFP3j8U[UYqjxNyPX] - VoFP3j8U[Rdys9h]) * (VoFP3j8U[UYqjxNyPX] - VoFP3j8U[Rdys9h]));
            p[F8rpFhbRNSB7] = UYqjxNyPX;
            u6tMCwzQ3Ns[F8rpFhbRNSB7] = Rdys9h;
            F8rpFhbRNSB7++;
        }
    egCHML2oa = (922 - 922);
    for (int UYqjxNyPX = F8rpFhbRNSB7 -(585 - 584);
    0 < UYqjxNyPX; UYqjxNyPX--)
        for (int Rdys9h = 0;
        UYqjxNyPX > Rdys9h; Rdys9h++) {
            if (I9MUz1v[Rdys9h +(177 - 176)] > I9MUz1v[Rdys9h]) {
                egCHML2oa = I9MUz1v[Rdys9h];
                I9MUz1v[Rdys9h] = I9MUz1v[Rdys9h +(921 - 920)];
                I9MUz1v[Rdys9h +(684 - 683)] = egCHML2oa;
                IEj2d8Ylhe = p[Rdys9h];
                p[Rdys9h] = p[Rdys9h +(650 - 649)];
                p[Rdys9h +(957 - 956)] = IEj2d8Ylhe;
                IEj2d8Ylhe = u6tMCwzQ3Ns[Rdys9h];
                u6tMCwzQ3Ns[Rdys9h] = u6tMCwzQ3Ns[Rdys9h +(645 - 644)];
                u6tMCwzQ3Ns[Rdys9h +1] = IEj2d8Ylhe;
            }
        }
    for (int RfCAgMaQ9eZ = 0;
    RfCAgMaQ9eZ < F8rpFhbRNSB7; RfCAgMaQ9eZ++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", saVdjo[p[RfCAgMaQ9eZ]], gs8igK[p[RfCAgMaQ9eZ]], VoFP3j8U[p[RfCAgMaQ9eZ]], saVdjo[u6tMCwzQ3Ns[RfCAgMaQ9eZ]], gs8igK[u6tMCwzQ3Ns[RfCAgMaQ9eZ]], VoFP3j8U[u6tMCwzQ3Ns[RfCAgMaQ9eZ]], I9MUz1v[RfCAgMaQ9eZ]);
    return 0;
}

