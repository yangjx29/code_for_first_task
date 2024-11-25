int main () {
    int wE6qZSWy32r5, Fkn5Sdx4, a0rg8oR;
    double  m = 0;
    double  OqE4gD [110], C9vDeEb [110], YvYurbktTcFQ [110];
    double  l8BFcNeao = 0;
    double  i1lzFK [110] [110];
    cin >> wE6qZSWy32r5;
    for (Fkn5Sdx4 = 0; Fkn5Sdx4 < wE6qZSWy32r5; Fkn5Sdx4 = Fkn5Sdx4 +1)
        cin >> OqE4gD[Fkn5Sdx4] >> C9vDeEb[Fkn5Sdx4];
    for (Fkn5Sdx4 = 0; Fkn5Sdx4 < wE6qZSWy32r5; Fkn5Sdx4 = Fkn5Sdx4 +1)
        for (a0rg8oR = 0; a0rg8oR < wE6qZSWy32r5; a0rg8oR++) {
            i1lzFK[Fkn5Sdx4][a0rg8oR] = sqrt ((OqE4gD[Fkn5Sdx4] - OqE4gD[a0rg8oR]) * (OqE4gD[Fkn5Sdx4] - OqE4gD[a0rg8oR]) + (C9vDeEb[Fkn5Sdx4] - C9vDeEb[a0rg8oR]) * (C9vDeEb[Fkn5Sdx4] - C9vDeEb[a0rg8oR]));
            if (i1lzFK[Fkn5Sdx4][a0rg8oR] > l8BFcNeao)
                l8BFcNeao = i1lzFK[Fkn5Sdx4][a0rg8oR];
        }
    cout << l8BFcNeao << endl;
    return 0;
}

