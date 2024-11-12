int main () {
    int ceOLwoS;
    int VwqN9aFyhup, X39GocdOs8, Vq2U05;
    int Cepwn1 [100000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int VZmfFN;
    for (VwqN9aFyhup = 0; VwqN9aFyhup < 100000; VwqN9aFyhup = VwqN9aFyhup +1) {
        cin >> Cepwn1[VwqN9aFyhup];
        if (!(-1 != Cepwn1[VwqN9aFyhup]))
            break;
        if (!(0 != Cepwn1[VwqN9aFyhup])) {
            VZmfFN = 0;
            for (X39GocdOs8 = 0; VwqN9aFyhup > X39GocdOs8; X39GocdOs8 = X39GocdOs8 +1) {
                for (Vq2U05 = 0; VwqN9aFyhup > Vq2U05; Vq2U05 = Vq2U05 +1) {
                    if (Cepwn1[Vq2U05] == 0)
                        continue;
                    if (Cepwn1[X39GocdOs8] == 2 * Cepwn1[Vq2U05])
                        VZmfFN = VZmfFN +1;
                };
            }
            VwqN9aFyhup = 0;
            Cepwn1[0] = 0;
            cout << VZmfFN << endl;
        };
    }
    return 0;
}

