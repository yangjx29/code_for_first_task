int main () {
    int kSKAMdmzVP [100000] = {0};
    int Fgbu2rzU;
    int n;
    int nvcK1Dx68OZ;
    int j;
    int bwpsa9;
    Fgbu2rzU = 0;
    cin >> n;
    {
        nvcK1Dx68OZ = 0;
        while (nvcK1Dx68OZ <= n - 1) {
            cin >> kSKAMdmzVP[nvcK1Dx68OZ];
            nvcK1Dx68OZ = nvcK1Dx68OZ + 1;
        };
    }
    cin >> bwpsa9;
    {
        nvcK1Dx68OZ = 0;
        while (nvcK1Dx68OZ <= n - 1) {
            if (kSKAMdmzVP[nvcK1Dx68OZ] == bwpsa9) {
                {
                    j = nvcK1Dx68OZ;
                    while (j < n - 1) {
                        kSKAMdmzVP[j] = kSKAMdmzVP[j + 1];
                        j++;
                    };
                }
                nvcK1Dx68OZ--;
                n--;
            }
            nvcK1Dx68OZ++;
        };
    }
    {
        nvcK1Dx68OZ = 0;
        while (nvcK1Dx68OZ <= n - 1) {
            if (Fgbu2rzU != 0)
                cout << " ";
            Fgbu2rzU++;
            cout << kSKAMdmzVP[nvcK1Dx68OZ];
            nvcK1Dx68OZ++;
        };
    }
    return 0;
}

