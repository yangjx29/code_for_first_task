int main () {
    int CvkaWBuiQ;
    int S9ikKE7uc;
    int fY5Cf4JeMlF;
    int Uh28Trg0n3v;
    int c5DBXcf;
    int New543DnMa1;
    int n82IbM;
    int I7PWz5t;
    int kBFeGzjmiAU;
    int beuB7ETHnIC [(579 - 479)] [(792 - 692)];
    int fvOXTf9JusRp [(513 - 413)] [(930 - 830)];
    int jzumWIOlefad [(1097 - 997)] [100];
    {
        if ((191 - 191)) {
            return (480 - 480);
        }
    }
    memset (jzumWIOlefad, (777 - 777), sizeof (jzumWIOlefad));
    cin >> fY5Cf4JeMlF >> c5DBXcf;
    for (n82IbM = (249 - 249); n82IbM < fY5Cf4JeMlF; n82IbM++)
        for (I7PWz5t = (16 - 16); I7PWz5t < c5DBXcf; I7PWz5t++)
            cin >> beuB7ETHnIC[n82IbM][I7PWz5t];
    cin >> Uh28Trg0n3v >> New543DnMa1;
    for (n82IbM = (572 - 572); n82IbM < Uh28Trg0n3v; n82IbM++)
        for (I7PWz5t = 0; I7PWz5t < New543DnMa1; I7PWz5t++)
            cin >> fvOXTf9JusRp[n82IbM][I7PWz5t];
    S9ikKE7uc = New543DnMa1;
    CvkaWBuiQ = fY5Cf4JeMlF;
    for (n82IbM = 0; CvkaWBuiQ > n82IbM; n82IbM++)
        for (I7PWz5t = 0; S9ikKE7uc > I7PWz5t; I7PWz5t++)
            for (kBFeGzjmiAU = 0; kBFeGzjmiAU < Uh28Trg0n3v; kBFeGzjmiAU++)
                jzumWIOlefad[n82IbM][I7PWz5t] = jzumWIOlefad[n82IbM][I7PWz5t] + beuB7ETHnIC[n82IbM][kBFeGzjmiAU] * fvOXTf9JusRp[kBFeGzjmiAU][I7PWz5t];
    for (n82IbM = 0; n82IbM < CvkaWBuiQ; n82IbM++) {
        cout << jzumWIOlefad[n82IbM][0];
        for (I7PWz5t = (612 - 611); S9ikKE7uc > I7PWz5t; I7PWz5t++)
            cout << " " << jzumWIOlefad[n82IbM][I7PWz5t];
        cout << endl;
    }
    return 0;
}

