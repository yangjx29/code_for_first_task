int a [(502 - 402)] [100];

int nGDZqjBX (int eznhpLsN) {
    int VDigT8U;
    int O3WqOldES;
    for (VDigT8U = (821 - 821); VDigT8U < eznhpLsN; VDigT8U = VDigT8U +1) {
        int bA6oEnP;
        bA6oEnP = a[VDigT8U][(242 - 242)];
        for (O3WqOldES = (493 - 492); eznhpLsN > O3WqOldES; O3WqOldES = O3WqOldES +1)
            if (a[VDigT8U][O3WqOldES] < bA6oEnP)
                bA6oEnP = a[VDigT8U][O3WqOldES];
        if (bA6oEnP == (730 - 730))
            continue;
        for (O3WqOldES = 0; O3WqOldES < eznhpLsN; O3WqOldES = O3WqOldES +1)
            a[VDigT8U][O3WqOldES] -= bA6oEnP;
    }
    for (VDigT8U = 0; VDigT8U < eznhpLsN; VDigT8U = VDigT8U +1) {
        int bA6oEnP;
        bA6oEnP = a[0][VDigT8U];
        for (O3WqOldES = (657 - 656); O3WqOldES < eznhpLsN; O3WqOldES = O3WqOldES +1)
            if (bA6oEnP > a[O3WqOldES][VDigT8U])
                bA6oEnP = a[O3WqOldES][VDigT8U];
        if (bA6oEnP == 0)
            continue;
        for (O3WqOldES = 0; O3WqOldES < eznhpLsN; O3WqOldES = O3WqOldES +1)
            a[O3WqOldES][VDigT8U] -= bA6oEnP;
    }
    return a[(844 - 843)][(468 - 467)];
}

void  B7yB2gP (int eznhpLsN) {
    int O3WqOldES;
    int VDigT8U;
    for (VDigT8U = 1; eznhpLsN - 1 > VDigT8U; VDigT8U = VDigT8U +1)
        a[0][VDigT8U] = a[0][VDigT8U +1];
    for (VDigT8U = 1; VDigT8U < eznhpLsN - 1; VDigT8U = VDigT8U +1)
        a[VDigT8U][0] = a[VDigT8U +1][0];
    for (VDigT8U = 1; VDigT8U < eznhpLsN - 1; VDigT8U = VDigT8U +1)
        for (O3WqOldES = 1; O3WqOldES < eznhpLsN - 1; O3WqOldES = O3WqOldES +1)
            a[VDigT8U][O3WqOldES] = a[VDigT8U +1][O3WqOldES +1];
    return;
}

int main () {
    int eznhpLsN, SnOZsNGE2, VDigT8U, O3WqOldES;
    cin >> eznhpLsN;
    for (SnOZsNGE2 = 0; SnOZsNGE2 < eznhpLsN; SnOZsNGE2 = SnOZsNGE2 +1) {
        int PWkHyr;
        PWkHyr = 0;
        for (VDigT8U = 0; VDigT8U < eznhpLsN; VDigT8U++)
            for (O3WqOldES = 0; O3WqOldES < eznhpLsN; O3WqOldES++)
                cin >> a[VDigT8U][O3WqOldES];
        VDigT8U = eznhpLsN;
        while (VDigT8U > 1) {
            B7yB2gP (VDigT8U);
            PWkHyr = PWkHyr +nGDZqjBX (VDigT8U);
            VDigT8U = VDigT8U -1;
        }
        cout << PWkHyr << endl;
    }
    return 0;
}

