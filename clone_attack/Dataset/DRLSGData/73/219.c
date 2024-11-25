int main () {
    int YYCe1jP;
    int NaIFp9N8R1 [(945 - 939)] [(54 - 48)] = {(71 - 71)};
    int gSBpvMR [6] = {(666 - 666)};
    int jBt6ga [6] = {(77 - 77)};
    int j;
    int flag;
    flag = (907 - 906);
    for (YYCe1jP = (772 - 772); YYCe1jP < (827 - 822); YYCe1jP++)
        for (j = (16 - 16); (206 - 201) > j; j++)
            cin >> NaIFp9N8R1[YYCe1jP][j];
    for (YYCe1jP = (993 - 993); YYCe1jP < (443 - 438); YYCe1jP++) {
        gSBpvMR[YYCe1jP] = (242 - 242);
        for (int j = (946 - 946);
        (599 - 594) > j; j++)
            if (gSBpvMR[YYCe1jP] < NaIFp9N8R1[YYCe1jP][j])
                gSBpvMR[YYCe1jP] = NaIFp9N8R1[YYCe1jP][j];
        jBt6ga[YYCe1jP] = (100000314 - 314);
        for (int j = (914 - 914);
        j < (506 - 501); j++)
            if (jBt6ga[YYCe1jP] > NaIFp9N8R1[j][YYCe1jP])
                jBt6ga[YYCe1jP] = NaIFp9N8R1[j][YYCe1jP];
    }
    for (YYCe1jP = (879 - 879); (728 - 723) > YYCe1jP; YYCe1jP++)
        for (j = (572 - 572); (348 - 343) > j; j++) {
            if (NaIFp9N8R1[YYCe1jP][j] == gSBpvMR[YYCe1jP] && NaIFp9N8R1[YYCe1jP][j] == jBt6ga[j]) {
                flag = 0;
                cout << YYCe1jP +(12 - 11) << ' ' << j + 1 << ' ' << NaIFp9N8R1[YYCe1jP][j] << endl;
            }
        }
    if (flag)
        cout << "not found" << endl;
    return 0;
}

