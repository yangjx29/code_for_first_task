int main () {
    int hbxvKdkeBj6;
    int Nbaqw8rHR32;
    int FFiWHM [(496 - 396)] [100];
    int Wig1RVjykmo;
    int iQRtiMg;
    int szNvER0sU1gF;
    int F5MR2F;
    int IrjnwP;
    F5MR2F = (609 - 609);
    cin >> hbxvKdkeBj6;
    IrjnwP = hbxvKdkeBj6;
    for (; IrjnwP > (364 - 364);) {
        for (Nbaqw8rHR32 = (651 - 651); Nbaqw8rHR32 < hbxvKdkeBj6; Nbaqw8rHR32 = Nbaqw8rHR32 +1)
            for (iQRtiMg = (81 - 81); iQRtiMg < hbxvKdkeBj6; iQRtiMg = iQRtiMg + 1)
                cin >> FFiWHM[Nbaqw8rHR32][iQRtiMg];
        F5MR2F = (454 - 454);
        for (Wig1RVjykmo = hbxvKdkeBj6; Wig1RVjykmo > (194 - 193); Wig1RVjykmo--) {
            for (Nbaqw8rHR32 = (70 - 70); Nbaqw8rHR32 < Wig1RVjykmo; Nbaqw8rHR32 = Nbaqw8rHR32 +1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                szNvER0sU1gF = FFiWHM[Nbaqw8rHR32][(115 - 115)];
                for (iQRtiMg = (768 - 768); iQRtiMg < Wig1RVjykmo; iQRtiMg = iQRtiMg + 1) {
                    if (FFiWHM[Nbaqw8rHR32][iQRtiMg] < szNvER0sU1gF)
                        szNvER0sU1gF = FFiWHM[Nbaqw8rHR32][iQRtiMg];
                }
                for (iQRtiMg = 0; iQRtiMg < Wig1RVjykmo; iQRtiMg = iQRtiMg + 1)
                    FFiWHM[Nbaqw8rHR32][iQRtiMg] = FFiWHM[Nbaqw8rHR32][iQRtiMg] - szNvER0sU1gF;
            }
            for (iQRtiMg = 0; iQRtiMg < Wig1RVjykmo; iQRtiMg++) {
                szNvER0sU1gF = FFiWHM[0][iQRtiMg];
                for (Nbaqw8rHR32 = 0; Nbaqw8rHR32 < Wig1RVjykmo; Nbaqw8rHR32++) {
                    if (FFiWHM[Nbaqw8rHR32][iQRtiMg] < szNvER0sU1gF)
                        szNvER0sU1gF = FFiWHM[Nbaqw8rHR32][iQRtiMg];
                }
                for (Nbaqw8rHR32 = 0; Nbaqw8rHR32 < Wig1RVjykmo; Nbaqw8rHR32++)
                    FFiWHM[Nbaqw8rHR32][iQRtiMg] = FFiWHM[Nbaqw8rHR32][iQRtiMg] - szNvER0sU1gF;
            }
            F5MR2F = F5MR2F +FFiWHM[1][1];
            for (Nbaqw8rHR32 = 1; Nbaqw8rHR32 < Wig1RVjykmo; Nbaqw8rHR32++)
                for (iQRtiMg = 0; iQRtiMg < Wig1RVjykmo; iQRtiMg++)
                    FFiWHM[Nbaqw8rHR32][iQRtiMg] = FFiWHM[Nbaqw8rHR32 +1][iQRtiMg];
            for (iQRtiMg = 1; iQRtiMg < Wig1RVjykmo; iQRtiMg++)
                for (Nbaqw8rHR32 = 0; Nbaqw8rHR32 < Wig1RVjykmo; Nbaqw8rHR32++)
                    FFiWHM[Nbaqw8rHR32][iQRtiMg] = FFiWHM[Nbaqw8rHR32][iQRtiMg + 1];
        }
        cout << F5MR2F << endl;
        IrjnwP = IrjnwP -1;
    }
    return 0;
}

