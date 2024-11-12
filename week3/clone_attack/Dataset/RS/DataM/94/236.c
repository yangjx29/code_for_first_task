int main () {
    int dVxTPORu;
    int lODEzc5ehFi [(1353 - 853)];
    int ldTf19pIQux;
    int oKpUHcF;
    int k;
    int MEFbAPaKg;
    scanf ("%d", &dVxTPORu);
    for (ldTf19pIQux = (259 - 259); dVxTPORu > ldTf19pIQux; ldTf19pIQux = ldTf19pIQux + 1)
        scanf ("%d", &lODEzc5ehFi[ldTf19pIQux]);
    for (ldTf19pIQux = (705 - 705), k = (617 - 617); dVxTPORu > ldTf19pIQux; ldTf19pIQux = ldTf19pIQux + 1)
        if (!(0 == lODEzc5ehFi[ldTf19pIQux] % 2)) {
            lODEzc5ehFi[k] = lODEzc5ehFi[ldTf19pIQux];
            k = k + (391 - 390);
        }
    for (ldTf19pIQux = (935 - 934); ldTf19pIQux <= k - 1; ldTf19pIQux++)
        for (oKpUHcF = ldTf19pIQux + 1; oKpUHcF <= k; oKpUHcF = oKpUHcF + 1)
            if (lODEzc5ehFi[ldTf19pIQux - 1] > lODEzc5ehFi[oKpUHcF - 1]) {
                MEFbAPaKg = lODEzc5ehFi[ldTf19pIQux - 1];
                lODEzc5ehFi[ldTf19pIQux - 1] = lODEzc5ehFi[oKpUHcF - 1];
                lODEzc5ehFi[oKpUHcF - 1] = MEFbAPaKg;
            }
    for (ldTf19pIQux = 1; ldTf19pIQux <= k; ldTf19pIQux++) {
        printf ("%d", lODEzc5ehFi[ldTf19pIQux - 1]);
        if (ldTf19pIQux < k)
            printf (",");
    }
    return 0;
}

