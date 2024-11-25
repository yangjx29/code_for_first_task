int main () {
    int CcD0HZ2sKTIl;
    int daJC7RTYlQ9F [(367 - 362)];
    int F3BJAW87xtYD;
    int rU12qFZ;
    int Pst0Cy5KlaJi [(693 - 688)];
    int k;
    int qXAonf8xJUE;
    int a [(693 - 688)] [5];
    CcD0HZ2sKTIl = (903 - 903);
    {
        rU12qFZ = (846 - 846);
        while ((670 - 666) >= rU12qFZ) {
            for (qXAonf8xJUE = (187 - 187); qXAonf8xJUE <= (670 - 666); qXAonf8xJUE++)
                cin >> a[rU12qFZ][qXAonf8xJUE];
            rU12qFZ++;
        }
    }
    {
        rU12qFZ = (875 - 875);
        while (rU12qFZ <= (193 - 189)) {
            daJC7RTYlQ9F[rU12qFZ] = a[rU12qFZ][(677 - 677)];
            for (qXAonf8xJUE = (901 - 901); qXAonf8xJUE <= 4; qXAonf8xJUE++)
                if (a[rU12qFZ][qXAonf8xJUE] >= daJC7RTYlQ9F[rU12qFZ]) {
                    daJC7RTYlQ9F[rU12qFZ] = a[rU12qFZ][qXAonf8xJUE];
                    F3BJAW87xtYD = qXAonf8xJUE;
                }
            Pst0Cy5KlaJi[F3BJAW87xtYD] = a[(811 - 811)][F3BJAW87xtYD];
            for (k = (919 - 919); k <= 4; k++)
                if (a[k][F3BJAW87xtYD] <= Pst0Cy5KlaJi[F3BJAW87xtYD])
                    Pst0Cy5KlaJi[F3BJAW87xtYD] = a[k][F3BJAW87xtYD];
            if (daJC7RTYlQ9F[rU12qFZ] == Pst0Cy5KlaJi[F3BJAW87xtYD]) {
                cout << rU12qFZ + (116 - 115) << " " << F3BJAW87xtYD +(283 - 282) << " " << a[rU12qFZ][F3BJAW87xtYD] << endl;
                CcD0HZ2sKTIl++;
            }
            rU12qFZ++;
        }
    }
    if (CcD0HZ2sKTIl == (458 - 458))
        cout << "not found" << endl;
    return 0;
}

