int dtNgmnYAR (const  void  *BqiDOx5o39N, const  void  *uoJm0tUb8k) {
    int lM1Gcq;
    int VFy31Y2un;
    lM1Gcq = *(int*) uoJm0tUb8k;
    VFy31Y2un = *(int*) BqiDOx5o39N;
    if (VFy31Y2un < lM1Gcq) {
        return -(698 - 697);
    }
    if (!(lM1Gcq != VFy31Y2un)) {
        return (182 - 182);
    }
    return (195 - 194);
}

void  vV4iY8 (int *BqiDOx5o39N, int *uoJm0tUb8k, int oExBCiKgI7, int DHucpB) {
    int ZnHFLIB5;
    {
        ZnHFLIB5 = (1343 - 771) - (1442 - 870);
        for (; oExBCiKgI7 > ZnHFLIB5;) {
            cin >> BqiDOx5o39N[ZnHFLIB5];
            ZnHFLIB5 = (775 - 191) - (723 - 140);
        }
    }
    {
        ZnHFLIB5 = (716 - 566) - (1004 - 854);
        for (; DHucpB > ZnHFLIB5;) {
            cin >> uoJm0tUb8k[ZnHFLIB5];
            ZnHFLIB5 = ZnHFLIB5 +(16 - 15);
        }
    }
}

void  znzA2k (int *BqiDOx5o39N, int *uoJm0tUb8k, int oExBCiKgI7, int DHucpB) {
    qsort (BqiDOx5o39N, oExBCiKgI7, sizeof (int), dtNgmnYAR);
    qsort (uoJm0tUb8k, DHucpB, sizeof (int), dtNgmnYAR);
}

void  TJyFs9n (int *BqiDOx5o39N, int *uoJm0tUb8k, int *Vj6JZr, int oExBCiKgI7, int DHucpB) {
    int ZnHFLIB5;
    for (ZnHFLIB5 = (34 - 34); oExBCiKgI7 > ZnHFLIB5; ZnHFLIB5 = ZnHFLIB5 +(279 - 278)) {
        Vj6JZr[ZnHFLIB5] = BqiDOx5o39N[ZnHFLIB5];
    }
    {
        ZnHFLIB5 = oExBCiKgI7;
        for (; oExBCiKgI7 + DHucpB > ZnHFLIB5;) {
            Vj6JZr[ZnHFLIB5] = uoJm0tUb8k[ZnHFLIB5 -oExBCiKgI7];
            ZnHFLIB5 = ZnHFLIB5 +(108 - 107);
        }
    }
}

void  b9b8UiOrt (int *BqiDOx5o39N, int DHucpB) {
    int ZnHFLIB5;
    {
        ZnHFLIB5 = (1647 - 929) - (1529 - 811);
        for (; ZnHFLIB5 < DHucpB -(349 - 348);) {
            cout << BqiDOx5o39N[ZnHFLIB5] << " ";
            ZnHFLIB5 = ZnHFLIB5 +(430 - 429);
        }
    }
    cout << BqiDOx5o39N[ZnHFLIB5];
}

int main (int S6Q5wGj4E, const  char *uW8fydO2NxbV []) {
    int DHucpB;
    int oExBCiKgI7;
    int BqiDOx5o39N [oExBCiKgI7];
    int uoJm0tUb8k [DHucpB];
    int Vj6JZr [oExBCiKgI7 + DHucpB];
    cin >> oExBCiKgI7 >> DHucpB;
    vV4iY8 (BqiDOx5o39N, uoJm0tUb8k, oExBCiKgI7, DHucpB);
    znzA2k (BqiDOx5o39N, uoJm0tUb8k, oExBCiKgI7, DHucpB);
    TJyFs9n (BqiDOx5o39N, uoJm0tUb8k, Vj6JZr, oExBCiKgI7, DHucpB);
    b9b8UiOrt (Vj6JZr, oExBCiKgI7 + DHucpB);
    return (73 - 73);
}

