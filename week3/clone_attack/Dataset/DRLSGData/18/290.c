int npAZaGzs473B [101] [101] [101] = {(876 - 876)};

int Yg8lOYnVu (int YDfwPy0j, int tuEKpCPxLa) {
    int kQMa9RI;
    int CkOjRG;
    int tPIpFZO [101] = {(375 - 375)};
    int MMU9kj2;
    int RzYHy7AstG [101] [101] = {(588 - 588)};
    int Trhto4OSWkXy;
    kQMa9RI = tuEKpCPxLa;
    {
        MMU9kj2 = 0;
        for (; tuEKpCPxLa > MMU9kj2;) {
            for (CkOjRG = 0; CkOjRG < tuEKpCPxLa; CkOjRG = CkOjRG +1) {
                RzYHy7AstG[MMU9kj2][CkOjRG] = npAZaGzs473B[YDfwPy0j][MMU9kj2][CkOjRG];
            }
            MMU9kj2 = MMU9kj2 +1;
        };
    }
    Trhto4OSWkXy = (957 - 957);
    for (; kQMa9RI > 1;) {
        for (MMU9kj2 = 0; kQMa9RI > MMU9kj2; MMU9kj2 = MMU9kj2 +1) {
            tPIpFZO[MMU9kj2] = (10582 - 582);
            {
                CkOjRG = 0;
                for (; kQMa9RI > CkOjRG;) {
                    if (tPIpFZO[MMU9kj2] >= RzYHy7AstG[MMU9kj2][CkOjRG])
                        tPIpFZO[MMU9kj2] = RzYHy7AstG[MMU9kj2][CkOjRG];
                    CkOjRG = CkOjRG +1;
                };
            };
        }
        for (MMU9kj2 = 0; kQMa9RI > MMU9kj2; MMU9kj2 = MMU9kj2 +1) {
            for (CkOjRG = 0; kQMa9RI > CkOjRG; CkOjRG = CkOjRG +1) {
                RzYHy7AstG[MMU9kj2][CkOjRG] = RzYHy7AstG[MMU9kj2][CkOjRG] - tPIpFZO[MMU9kj2];
            };
        }
        for (CkOjRG = 0; kQMa9RI > CkOjRG; CkOjRG++) {
            tPIpFZO[CkOjRG] = 10000;
            for (MMU9kj2 = 0; kQMa9RI > MMU9kj2; MMU9kj2++) {
                if (tPIpFZO[CkOjRG] >= RzYHy7AstG[MMU9kj2][CkOjRG])
                    tPIpFZO[CkOjRG] = RzYHy7AstG[MMU9kj2][CkOjRG];
            };
        }
        for (CkOjRG = 0; kQMa9RI > CkOjRG; CkOjRG++) {
            for (MMU9kj2 = 0; kQMa9RI > MMU9kj2; MMU9kj2++) {
                RzYHy7AstG[MMU9kj2][CkOjRG] = RzYHy7AstG[MMU9kj2][CkOjRG] - tPIpFZO[CkOjRG];
            };
        }
        Trhto4OSWkXy = Trhto4OSWkXy +RzYHy7AstG[1][1];
        for (MMU9kj2 = 1; kQMa9RI - 1 > MMU9kj2; MMU9kj2++) {
            CkOjRG = 0;
            for (; kQMa9RI > CkOjRG;) {
                RzYHy7AstG[MMU9kj2][CkOjRG] = RzYHy7AstG[MMU9kj2 +1][CkOjRG];
                CkOjRG++;
            };
        }
        {
            CkOjRG = 1;
            for (; kQMa9RI - 1 > CkOjRG;) {
                for (MMU9kj2 = 0; kQMa9RI > MMU9kj2; MMU9kj2++) {
                    RzYHy7AstG[MMU9kj2][CkOjRG] = RzYHy7AstG[MMU9kj2][CkOjRG +1];
                }
                CkOjRG++;
            };
        }
        kQMa9RI--;
    }
    return Trhto4OSWkXy;
}

int main () {
    int MMU9kj2;
    int ACFwRYym;
    int kQMa9RI;
    int CkOjRG;
    cin >> ACFwRYym;
    for (kQMa9RI = 0; ACFwRYym > kQMa9RI; kQMa9RI++) {
        for (MMU9kj2 = 0; MMU9kj2 < ACFwRYym; MMU9kj2++) {
            for (CkOjRG = 0; CkOjRG < ACFwRYym; CkOjRG++) {
                cin >> npAZaGzs473B[kQMa9RI][MMU9kj2][CkOjRG];
            };
        };
    }
    {
        MMU9kj2 = 0;
        for (; MMU9kj2 < ACFwRYym;) {
            int nyMnw1;
            nyMnw1 = 0;
            nyMnw1 = Yg8lOYnVu (MMU9kj2, ACFwRYym);
            cout << nyMnw1 << endl;
            MMU9kj2++;
        };
    }
    return 0;
}

