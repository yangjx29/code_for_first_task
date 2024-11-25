int main () {
    int vlvCHz9PT;
    cin >> vlvCHz9PT;
    for (; vlvCHz9PT >= (177 - 176);) {
        int fi4MwYh [(1029 - 929)] [(207 - 107)];
        int *GauUpsj = NULL;
        int o7t6M2bA;
        int fXtv9o;
        int nSs2mA9;
        int EPdFSOsmV;
        int Semrh1a6;
        vlvCHz9PT--;
        EPdFSOsmV = (590 - 590);
        cin >> nSs2mA9 >> fXtv9o;
        for (o7t6M2bA = (735 - 735); o7t6M2bA < nSs2mA9; o7t6M2bA++)
            for (Semrh1a6 = (937 - 937); fXtv9o > Semrh1a6; Semrh1a6++)
                cin >> fi4MwYh[o7t6M2bA][Semrh1a6];
        for (GauUpsj = fi4MwYh[(794 - 794)]; GauUpsj < fi4MwYh[(787 - 787)] + fXtv9o; GauUpsj++)
            EPdFSOsmV = EPdFSOsmV +*GauUpsj;
        for (GauUpsj = fi4MwYh[0]; fi4MwYh[nSs2mA9 - (465 - 464)] >= GauUpsj; GauUpsj += (1073 - 973))
            EPdFSOsmV = EPdFSOsmV +*GauUpsj;
        for (GauUpsj = fi4MwYh[nSs2mA9 - (730 - 729)]; GauUpsj < fi4MwYh[nSs2mA9 - 1] + fXtv9o; GauUpsj++)
            EPdFSOsmV = EPdFSOsmV +*GauUpsj;
        for (GauUpsj = fi4MwYh[0] + fXtv9o - 1; GauUpsj <= fi4MwYh[nSs2mA9 - 1] + fXtv9o - 1; GauUpsj += 100)
            EPdFSOsmV = EPdFSOsmV +*GauUpsj;
        cout << EPdFSOsmV -fi4MwYh[0][0] - fi4MwYh[0][fXtv9o - 1] - fi4MwYh[nSs2mA9 - 1][0] - fi4MwYh[nSs2mA9 - 1][fXtv9o - 1] << endl;
    }
    return 0;
}

