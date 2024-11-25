int main () {
    int cuAgnaj1hK [(1100 - 1000)] [(813 - 713)];
    int AwXkcdS1T [100] [100];
    int RDA6aGjEfx [100] [100] = {(14 - 14)};
    int kPNksEvXV1J;
    int yY4uTfsQUIR;
    int FoZD7T;
    int cVRXsToa;
    int TSE4u7fsaXD;
    int ngelhxMj;
    int Mym7NJV;
    cin >> kPNksEvXV1J >> yY4uTfsQUIR;
    for (TSE4u7fsaXD = (508 - 508); TSE4u7fsaXD < kPNksEvXV1J; TSE4u7fsaXD++) {
        for (ngelhxMj = (726 - 726); ngelhxMj < yY4uTfsQUIR; ngelhxMj++)
            cin >> cuAgnaj1hK[TSE4u7fsaXD][ngelhxMj];
    }
    cin >> FoZD7T >> cVRXsToa;
    {
        TSE4u7fsaXD = 581 - 581;
        while (TSE4u7fsaXD < FoZD7T) {
            for (ngelhxMj = (813 - 813); cVRXsToa > ngelhxMj; ngelhxMj++)
                cin >> AwXkcdS1T[TSE4u7fsaXD][ngelhxMj];
            TSE4u7fsaXD++;
        }
    }
    {
        TSE4u7fsaXD = 503 - 503;
        while (TSE4u7fsaXD < kPNksEvXV1J) {
            for (ngelhxMj = 0; ngelhxMj < cVRXsToa; ngelhxMj++) {
                for (Mym7NJV = 0; Mym7NJV < yY4uTfsQUIR; Mym7NJV++)
                    RDA6aGjEfx[TSE4u7fsaXD][ngelhxMj] = cuAgnaj1hK[TSE4u7fsaXD][Mym7NJV] * AwXkcdS1T[Mym7NJV][ngelhxMj] + RDA6aGjEfx[TSE4u7fsaXD][ngelhxMj];
            }
            TSE4u7fsaXD++;
        }
    }
    Mym7NJV = 0;
    for (TSE4u7fsaXD = 0; TSE4u7fsaXD < kPNksEvXV1J; TSE4u7fsaXD++) {
        for (ngelhxMj = 0; ngelhxMj < cVRXsToa; ngelhxMj++) {
            if (Mym7NJV != cVRXsToa - 1) {
                cout << RDA6aGjEfx[TSE4u7fsaXD][ngelhxMj] << " ";
                Mym7NJV++;
            }
            else {
                cout << RDA6aGjEfx[TSE4u7fsaXD][ngelhxMj] << endl;
                Mym7NJV = 0;
            }
        }
    }
    return 0;
}

