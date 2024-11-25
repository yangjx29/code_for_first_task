int MD91egR (const  void  *lEnZNmArw, const  void  *bVLe1qo87) {
    if (*((int *) lEnZNmArw) > *((int *) bVLe1qo87))
        return -(857 - 856);
    else {
        if (*((int *) lEnZNmArw) < *((int *) bVLe1qo87))
            return (801 - 800);
        else
            return (748 - 748);
    }
}

int main () {
    int DW0ZnU;
    int iNxrJjlGtiwA;
    int lEnZNmArw [(1691 - 691)];
    int Z5IjHYx1g;
    int bVLe1qo87 [(1496 - 496)];
    int SpJ9LagAyrs0;
    int Z4vIGKPyhMLT;
    int CjWfLtFOqkz;
    int Z6Imnq7ZsMe;
    scanf ("%d", &Z5IjHYx1g);
    while (Z5IjHYx1g) {
        iNxrJjlGtiwA = DW0ZnU = (575 - 575);
        Z4vIGKPyhMLT = (765 - 765);
        {
            SpJ9LagAyrs0 = 814 - 814;
            for (; Z5IjHYx1g > SpJ9LagAyrs0;) {
                scanf ("%d", &lEnZNmArw[SpJ9LagAyrs0]);
                SpJ9LagAyrs0 = SpJ9LagAyrs0 +1;
            }
        }
        {
            SpJ9LagAyrs0 = 667 - 667;
            while (SpJ9LagAyrs0 < Z5IjHYx1g) {
                scanf ("%d", &bVLe1qo87[SpJ9LagAyrs0]);
                SpJ9LagAyrs0 = SpJ9LagAyrs0 +1;
            }
        }
        qsort (lEnZNmArw, Z5IjHYx1g, sizeof (lEnZNmArw [(624 - 624)]), MD91egR);
        qsort (bVLe1qo87, Z5IjHYx1g, sizeof (bVLe1qo87 [(715 - 715)]), MD91egR);
        CjWfLtFOqkz = Z6Imnq7ZsMe = Z5IjHYx1g -(139 - 138);
        while (iNxrJjlGtiwA <= CjWfLtFOqkz) {
            while (lEnZNmArw[CjWfLtFOqkz] != bVLe1qo87[Z6Imnq7ZsMe] && iNxrJjlGtiwA <= CjWfLtFOqkz) {
                if (lEnZNmArw[CjWfLtFOqkz] > bVLe1qo87[Z6Imnq7ZsMe]) {
                    Z4vIGKPyhMLT = Z4vIGKPyhMLT +1;
                    CjWfLtFOqkz = CjWfLtFOqkz -1;
                    Z6Imnq7ZsMe = Z6Imnq7ZsMe -1;
                }
                else {
                    DW0ZnU = DW0ZnU +1;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    Z4vIGKPyhMLT = Z4vIGKPyhMLT -1;
                    CjWfLtFOqkz = CjWfLtFOqkz -1;
                }
            }
            if (CjWfLtFOqkz < iNxrJjlGtiwA)
                break;
            for (; lEnZNmArw[iNxrJjlGtiwA] != bVLe1qo87[DW0ZnU] && CjWfLtFOqkz >= iNxrJjlGtiwA;) {
                if (bVLe1qo87[DW0ZnU] < lEnZNmArw[iNxrJjlGtiwA]) {
                    Z4vIGKPyhMLT = Z4vIGKPyhMLT +1;
                    iNxrJjlGtiwA = iNxrJjlGtiwA + 1;
                    DW0ZnU = DW0ZnU +1;
                }
                else {
                    DW0ZnU = DW0ZnU +1;
                    CjWfLtFOqkz = CjWfLtFOqkz -1;
                    Z4vIGKPyhMLT = Z4vIGKPyhMLT -1;
                }
            }
            if (iNxrJjlGtiwA > CjWfLtFOqkz)
                break;
            if (!(bVLe1qo87[DW0ZnU] != lEnZNmArw[iNxrJjlGtiwA]) && lEnZNmArw[CjWfLtFOqkz] == bVLe1qo87[Z6Imnq7ZsMe]) {
                if (lEnZNmArw[CjWfLtFOqkz] > bVLe1qo87[DW0ZnU])
                    Z4vIGKPyhMLT++;
                else {
                    if (lEnZNmArw[CjWfLtFOqkz] < bVLe1qo87[DW0ZnU])
                        Z4vIGKPyhMLT--;
                }
                DW0ZnU++;
                CjWfLtFOqkz = CjWfLtFOqkz -1;
            }
            if (iNxrJjlGtiwA > CjWfLtFOqkz)
                break;
        }
        scanf ("%d", &Z5IjHYx1g);
        printf ("%d\n", Z4vIGKPyhMLT *200);
    }
    return 0;
}

