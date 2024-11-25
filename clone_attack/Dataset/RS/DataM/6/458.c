int main () {
    int FZwro1;
    int D4t21JwOz;
    int col;
    int Ym9lr4yuSKhq;
    int GYfMEtn;
    int t3N9me0ukho5;
    int M23B65 [(673 - 568)] [(490 - 385)] = {(777 - 777)};
    int *Ux1vs3uYZ = NULL;
    FZwro1 = (699 - 699);
    D4t21JwOz = (190 - 190);
    col = (697 - 697);
    Ym9lr4yuSKhq = (689 - 689);
    GYfMEtn = (740 - 740);
    t3N9me0ukho5 = 0;
    cin >> FZwro1;
    while (FZwro1 = FZwro1 -1) {
        cin >> D4t21JwOz >> col;
        for (Ym9lr4yuSKhq = 0; Ym9lr4yuSKhq < D4t21JwOz; Ym9lr4yuSKhq = Ym9lr4yuSKhq +1) {
            for (GYfMEtn = 0; GYfMEtn < col; GYfMEtn = GYfMEtn +1) {
                cin >> M23B65[Ym9lr4yuSKhq][GYfMEtn];
            };
        }
        for (Ux1vs3uYZ = &M23B65[0][0]; &M23B65[0][0] + col > Ux1vs3uYZ; Ux1vs3uYZ = Ux1vs3uYZ +1) {
            t3N9me0ukho5 = t3N9me0ukho5 + *Ux1vs3uYZ;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (Ym9lr4yuSKhq = (112 - 111); Ym9lr4yuSKhq < D4t21JwOz -(918 - 917); Ym9lr4yuSKhq++) {
            t3N9me0ukho5 = t3N9me0ukho5 + M23B65[Ym9lr4yuSKhq][0] + M23B65[Ym9lr4yuSKhq][col - 1];
        }
        if (1 < D4t21JwOz) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (Ux1vs3uYZ = &M23B65[D4t21JwOz -1][0]; Ux1vs3uYZ < &M23B65[D4t21JwOz -1][0] + col; Ux1vs3uYZ++) {
                t3N9me0ukho5 = t3N9me0ukho5 + *Ux1vs3uYZ;
            };
        }
        cout << t3N9me0ukho5 << endl;
        t3N9me0ukho5 = 0;
    }
    return 0;
}

