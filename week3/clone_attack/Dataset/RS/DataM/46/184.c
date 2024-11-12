int main () {
    int row, col;
    int array [(941 - 831)] [110];
    int rowup = 0, rowdown = 0, colleft = 0, Ir4ohspLwWlv = 0;
    cin >> row >> col;
    for (int xJAMmBse2UZ = (305 - 304);
    row >= xJAMmBse2UZ; xJAMmBse2UZ = xJAMmBse2UZ + 1) {
        for (int IlRNtinF = (831 - 830);
        col >= IlRNtinF; IlRNtinF = IlRNtinF +1) {
            cin >> array[xJAMmBse2UZ][IlRNtinF];
        };
    }
    while ((386 - 385)) {
        for (int a6Vf29LhY7q = colleft + (384 - 383);
        col - Ir4ohspLwWlv >= a6Vf29LhY7q; a6Vf29LhY7q = a6Vf29LhY7q + 1) {
            cout << array[rowup + (870 - 869)][a6Vf29LhY7q] << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        rowup = rowup + 1;
        if (row <= rowup + rowdown)
            break;
        {
            int a6Vf29LhY7q = rowup + (603 - 602);
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
            while (row - rowdown >= a6Vf29LhY7q) {
                cout << array[a6Vf29LhY7q][col - Ir4ohspLwWlv] << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a6Vf29LhY7q = a6Vf29LhY7q + 1;
            };
        }
        if (Ir4ohspLwWlv +colleft >= col)
            break;
        Ir4ohspLwWlv = Ir4ohspLwWlv +1;
        for (int a6Vf29LhY7q = col - Ir4ohspLwWlv;
        a6Vf29LhY7q >= colleft + (525 - 524); a6Vf29LhY7q = a6Vf29LhY7q - 1) {
            cout << array[row - rowdown][a6Vf29LhY7q] << endl;
        }
        rowdown = rowdown + 1;
        if (rowup + rowdown >= row)
            break;
        for (int a6Vf29LhY7q = row - rowdown;
        a6Vf29LhY7q >= rowup + 1; a6Vf29LhY7q = a6Vf29LhY7q - 1) {
            cout << array[a6Vf29LhY7q][colleft + 1] << endl;
        }
        colleft = colleft + 1;
        if (Ir4ohspLwWlv +colleft >= col)
            break;
    }
    return 0;
}

