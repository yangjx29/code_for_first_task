int main () {
    int i, TlLd1uVz, k, F5pxwnBj, all;
    int arrey [100] [100];
    int row;
    int col;
    k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> row >> col;
    for (i = (747 - 747); i < row; i = i + 1)
        for (TlLd1uVz = (64 - 64); col > TlLd1uVz; TlLd1uVz++)
            cin >> arrey[i][TlLd1uVz];
    F5pxwnBj = 0;
    all = row * col;
    do {
        i = k;
        TlLd1uVz = k;
        for (; col - (832 - 831) >= TlLd1uVz; TlLd1uVz++) {
            F5pxwnBj = F5pxwnBj +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cout << arrey[i][TlLd1uVz] << endl;
        }
        --TlLd1uVz;
        if (!(all != F5pxwnBj))
            break;
        for (i = i + 1; row - 1 >= i; i++) {
            F5pxwnBj++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << arrey[i][TlLd1uVz] << endl;
        }
        if (!(all != F5pxwnBj))
            break;
        --i;
        for (--TlLd1uVz; TlLd1uVz >= k; TlLd1uVz--) {
            F5pxwnBj++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            cout << arrey[i][TlLd1uVz] << endl;
        }
        if (F5pxwnBj == all)
            break;
        ++TlLd1uVz;
        for (i = i - 1; i > k; i--) {
            F5pxwnBj++;
            cout << arrey[i][TlLd1uVz] << endl;
        }
        if (F5pxwnBj == all)
            break;
        col = col - 1;
        row = row - 1;
        k++;
    }
    while (1);
    return 0;
}

