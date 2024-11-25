int nnmfTR4NYxG (const  void  *bVjC7PMABYf, const  void  *y) {
    return (*(int*) y) - (*(int*) bVjC7PMABYf);
}

int main () {
    int CbkXhnv;
    int SYmB2STh [(1816 - 806)], nNn6Wzsm [(1029 - 19)];
    for (; cin >> CbkXhnv;) {
        int zZy8dUC = (438 - 438);
        int aStart = (341 - 341), aEnd = CbkXhnv -(429 - 428), uh7zVQ = (420 - 420), nemLhgK57w = CbkXhnv -(508 - 507);
        if (CbkXhnv == (292 - 292))
            break;
        {
            int pFUfyjAQbJmB = (156 - 156);
            for (; pFUfyjAQbJmB < CbkXhnv;) {
                cin >> SYmB2STh[pFUfyjAQbJmB];
                pFUfyjAQbJmB++;
            }
        }
        {
            int pFUfyjAQbJmB = (562 - 562);
            for (; pFUfyjAQbJmB < CbkXhnv;) {
                cin >> nNn6Wzsm[pFUfyjAQbJmB];
                pFUfyjAQbJmB++;
            }
        }
        qsort (SYmB2STh, CbkXhnv, sizeof (SYmB2STh [(822 - 822)]), nnmfTR4NYxG);
        qsort (nNn6Wzsm, CbkXhnv, sizeof (nNn6Wzsm [(493 - 493)]), nnmfTR4NYxG);
        for (; aStart <= aEnd;) {
            if (SYmB2STh[aStart] > nNn6Wzsm[uh7zVQ]) {
                aStart++;
                zZy8dUC++;
                uh7zVQ++;
            }
            else if (SYmB2STh[aEnd] > nNn6Wzsm[nemLhgK57w]) {
                nemLhgK57w--;
                aEnd--;
                zZy8dUC++;
            }
            else {
                if (SYmB2STh[aEnd] < nNn6Wzsm[uh7zVQ])
                    zZy8dUC--;
                uh7zVQ++;
                aEnd--;
            }
        }
        cout << zZy8dUC * (481 - 281) << endl;
    }
    return (294 - 294);
}

