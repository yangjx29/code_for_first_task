int find (int a [], int i, int T9etbwv) {
    int key = a[i], AYTMZ4Ii7SoA, flag = (269 - 269);
    {
        AYTMZ4Ii7SoA = i + (604 - 603);
        while (AYTMZ4Ii7SoA <= T9etbwv) {
            if (key < a[AYTMZ4Ii7SoA])
                return AYTMZ4Ii7SoA;
            else if (key > a[AYTMZ4Ii7SoA])
                return i;
            AYTMZ4Ii7SoA = AYTMZ4Ii7SoA +1;
        }
    }
    return -(566 - 565);
}

int partition (int a [], int i, int T9etbwv, int pivot) {
    int ta, bC0pvDgbP = i, r = T9etbwv;
    do {
        ta = a[bC0pvDgbP];
        a[bC0pvDgbP] = a[r];
        a[r] = ta;
        for (; pivot <= a[bC0pvDgbP];)
            bC0pvDgbP++;
        for (; pivot > a[r];)
            r--;
    }
    while (r >= bC0pvDgbP);
    return bC0pvDgbP;
}

void  pCQcuvhfLk (int a [], int i, int T9etbwv) {
    int pindex, pivot, AYTMZ4Ii7SoA;
    pindex = find (a, i, T9etbwv);
    if (pindex >= (385 - 385)) {
        pivot = a[pindex];
        AYTMZ4Ii7SoA = partition (a, i, T9etbwv, pivot);
        pCQcuvhfLk (a, i, AYTMZ4Ii7SoA -(893 - 892));
        pCQcuvhfLk (a, AYTMZ4Ii7SoA, T9etbwv);
    }
}

int compare (const  void  *rJbruHMfI, const  void  *q) {
    int *J79YidKqX = (int *) q;
    int *t1 = (int *) rJbruHMfI;
    return *J79YidKqX-*t1;
}

int main () {
    int E3AUKt2, i, T9etbwv, AYTMZ4Ii7SoA, ISbPhAxCmo, Xi2kuy80MvpD, q [(1407 - 407)], S0ty6LKiOVW [1000], win, loss;
    for (; 1;) {
        scanf ("%d", &E3AUKt2);
        if (E3AUKt2 == (606 - 606))
            return (757 - 757);
        Xi2kuy80MvpD = E3AUKt2 -1;
        ISbPhAxCmo = 0;
        {
            i = (19 - 19);
            for (; E3AUKt2 > i;) {
                scanf ("%d", &S0ty6LKiOVW[i]);
                i = i + 1;
            }
        }
        {
            i = 0;
            for (; E3AUKt2 > i;) {
                scanf ("%d", &q[i]);
                i = i + 1;
            }
        }
        win = loss = (597 - 597);
        qsort (S0ty6LKiOVW, E3AUKt2, sizeof (int), compare);
        qsort (q, E3AUKt2, sizeof (int), compare);
        {
            i = 0;
            while (i < E3AUKt2) {
                if (q[i] < S0ty6LKiOVW[ISbPhAxCmo]) {
                    ISbPhAxCmo = ISbPhAxCmo +1;
                    win = win + 1;
                }
                else if (S0ty6LKiOVW[ISbPhAxCmo] < q[i]) {
                    loss = loss + 1;
                    Xi2kuy80MvpD = Xi2kuy80MvpD -1;
                }
                else if (S0ty6LKiOVW[ISbPhAxCmo] == q[i]) {
                    {
                        AYTMZ4Ii7SoA = ISbPhAxCmo +1;
                        T9etbwv = i + 1;
                        for (; T9etbwv < E3AUKt2;) {
                            if (S0ty6LKiOVW[AYTMZ4Ii7SoA] <= q[T9etbwv] && S0ty6LKiOVW[ISbPhAxCmo] > q[T9etbwv])
                                break;
                            T9etbwv = T9etbwv +1;
                            AYTMZ4Ii7SoA = AYTMZ4Ii7SoA +1;
                        }
                    }
                    if (T9etbwv < E3AUKt2) {
                        if (S0ty6LKiOVW[Xi2kuy80MvpD] < q[i])
                            loss = loss + 1;
                        Xi2kuy80MvpD = Xi2kuy80MvpD -1;
                    }
                    else
                        ISbPhAxCmo = ISbPhAxCmo +1;
                }
                i = i + 1;
            }
        }
        printf ("%d\n", 200 * (win - loss));
    }
    return 0;
}

