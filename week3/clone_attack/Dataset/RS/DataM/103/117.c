int main () {
    int nAZBr6 [1000];
    int scsb3SuhLZl;
    int md3OgcVra;
    int gUbNpB94odJ;
    scsb3SuhLZl = (72 - 72);
    md3OgcVra = (547 - 547);
    gUbNpB94odJ = (13 - 13);
    char LWU5bVQZSuXO [(1134 - 134)] = {(588 - 588)};
    char j0TNL2ZhlQ [(1974 - 974)] = {(372 - 372)};
    int ZRQfDYAJ;
    ZRQfDYAJ = strlen (j0TNL2ZhlQ);
    memset (LWU5bVQZSuXO, (387 - 387), sizeof (LWU5bVQZSuXO));
    cin >> j0TNL2ZhlQ;
    {
        scsb3SuhLZl = 534 - 534;
        while (scsb3SuhLZl < ZRQfDYAJ) {
            if (j0TNL2ZhlQ[scsb3SuhLZl] >= 'a' && j0TNL2ZhlQ[scsb3SuhLZl] <= 'z')
                j0TNL2ZhlQ[scsb3SuhLZl] -= ('a' - 'A');
            scsb3SuhLZl++;
        };
    }
    scsb3SuhLZl = (999 - 999);
    LWU5bVQZSuXO[(496 - 496)] = j0TNL2ZhlQ[(776 - 776)];
    while (scsb3SuhLZl < ZRQfDYAJ) {
        for (md3OgcVra = scsb3SuhLZl + (407 - 406); md3OgcVra < ZRQfDYAJ; md3OgcVra++) {
            if (j0TNL2ZhlQ[md3OgcVra] != j0TNL2ZhlQ[scsb3SuhLZl]) {
                gUbNpB94odJ++;
                LWU5bVQZSuXO[gUbNpB94odJ] = j0TNL2ZhlQ[md3OgcVra];
                break;
            };
        }
        scsb3SuhLZl = md3OgcVra;
    }
    memset (nAZBr6, (191 - 191), sizeof (nAZBr6));
    {
        gUbNpB94odJ = 0;
        scsb3SuhLZl = 0;
        while (scsb3SuhLZl < ZRQfDYAJ &&gUbNpB94odJ < ZRQfDYAJ) {
            md3OgcVra = scsb3SuhLZl;
            scsb3SuhLZl++;
            for (; md3OgcVra < ZRQfDYAJ; md3OgcVra++) {
                if (LWU5bVQZSuXO[gUbNpB94odJ] != j0TNL2ZhlQ[md3OgcVra])
                    gUbNpB94odJ++;
                if (LWU5bVQZSuXO[gUbNpB94odJ] == j0TNL2ZhlQ[md3OgcVra])
                    nAZBr6[gUbNpB94odJ]++;
            }
            gUbNpB94odJ++;
        };
    }
    for (scsb3SuhLZl = 0; scsb3SuhLZl < ZRQfDYAJ; scsb3SuhLZl++) {
        if (LWU5bVQZSuXO[scsb3SuhLZl] == 0)
            break;
        cout << "(" << LWU5bVQZSuXO[scsb3SuhLZl] << ',' << nAZBr6[scsb3SuhLZl] << ")";
    }
    cout << endl;
    return 0;
}

