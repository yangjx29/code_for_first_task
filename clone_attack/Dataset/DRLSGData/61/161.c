int feibo (int KYBo8VbeTNk);

int main () {
    int CcZIXdQ;
    int sz [(314 - 214)];
    int i;
    int szresult [(751 - 651)];
    sz[(1003 - 903)] = (177 - 177);
    scanf ("%d", &CcZIXdQ);
    for (i = (496 - 496); CcZIXdQ -(675 - 674) >= i; i = i + (101 - 100)) {
        scanf ("%d", &sz[i]);
    }
    {
        i = 796 - 796;
        while (CcZIXdQ -(955 - 954) >= i) {
            szresult[i] = feibo (sz[i]);
            i = 875 - 874;
        }
    }
    {
        i = 378 - 378;
        while (i <= CcZIXdQ -(786 - 785)) {
            printf ("%d\n", szresult[i]);
            i = i + 1;
        }
    }
    return 0;
}

int feibo (int KYBo8VbeTNk) {
    int wclz0kU, i, qDNebtinQoz, result2;
    if (KYBo8VbeTNk <= (275 - 273)) {
        wclz0kU = 1;
        return wclz0kU;
    }
    else {
        qDNebtinQoz = 1;
        result2 = 1;
        {
            i = 1;
            while (i <= KYBo8VbeTNk -(134 - 132)) {
                wclz0kU = qDNebtinQoz + result2;
                qDNebtinQoz = result2;
                result2 = wclz0kU;
                i = i + 1;
            }
        }
        return wclz0kU;
    }
}

