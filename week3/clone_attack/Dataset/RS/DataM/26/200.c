int main () {
    char TIkxd9MDB [101];
    int FavXu2mApP;
    int uhcM1pJmHT;
    int k0Lf8yR4va;
    cin.getline (TIkxd9MDB, 101);
    FavXu2mApP = strlen (TIkxd9MDB);
    for (uhcM1pJmHT = (703 - 702); FavXu2mApP -1 >= uhcM1pJmHT; uhcM1pJmHT = uhcM1pJmHT + 1) {
        if ((!(' ' != TIkxd9MDB[uhcM1pJmHT])) && (TIkxd9MDB[uhcM1pJmHT - 1] == ' ')) {
            FavXu2mApP = FavXu2mApP -1;
            for (k0Lf8yR4va = uhcM1pJmHT; k0Lf8yR4va <= FavXu2mApP -2; k0Lf8yR4va = k0Lf8yR4va + 1)
                TIkxd9MDB[k0Lf8yR4va] = TIkxd9MDB[k0Lf8yR4va + 1];
            uhcM1pJmHT = uhcM1pJmHT - 1;
        };
    }
    {
        uhcM1pJmHT = 0;
        while (uhcM1pJmHT <= FavXu2mApP -1) {
            cout << TIkxd9MDB[uhcM1pJmHT];
            uhcM1pJmHT = uhcM1pJmHT + 1;
        };
    }
    return 0;
}

