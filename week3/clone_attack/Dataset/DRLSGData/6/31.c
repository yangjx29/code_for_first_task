int main () {
    int dZVpyxIghT;
    int eDqiW1;
    int bxTpw3LUN6;
    int FgtN7lpCa;
    int b5vrbCyu31qc;
    dZVpyxIghT = (785 - 785);
    int wwOjYIHFqh98 [(1089 - 989)];
    int cohzn57wU [100];
    int Otp5Qav [100] [100] [100];
    scanf ("%d", &eDqiW1);
    for (bxTpw3LUN6 = (730 - 730); bxTpw3LUN6 < eDqiW1; bxTpw3LUN6 = bxTpw3LUN6 + 1) {
        scanf ("%d%d", &wwOjYIHFqh98[bxTpw3LUN6], &cohzn57wU[bxTpw3LUN6]);
        for (FgtN7lpCa = (83 - 83); FgtN7lpCa < wwOjYIHFqh98[bxTpw3LUN6]; FgtN7lpCa = FgtN7lpCa +1) {
            b5vrbCyu31qc = (456 - 456);
            for (; b5vrbCyu31qc < cohzn57wU[bxTpw3LUN6];) {
                scanf ("%d", &Otp5Qav[bxTpw3LUN6][FgtN7lpCa][b5vrbCyu31qc]);
                b5vrbCyu31qc = b5vrbCyu31qc + 1;
            };
        };
    }
    for (b5vrbCyu31qc = 0; b5vrbCyu31qc < eDqiW1; b5vrbCyu31qc++) {
        dZVpyxIghT = 0;
        for (bxTpw3LUN6 = 0; cohzn57wU[b5vrbCyu31qc] > bxTpw3LUN6; bxTpw3LUN6 = bxTpw3LUN6 + 1) {
            FgtN7lpCa = 0;
            for (; FgtN7lpCa < wwOjYIHFqh98[b5vrbCyu31qc];) {
                if ((!(0 != bxTpw3LUN6)) || (bxTpw3LUN6 == cohzn57wU[b5vrbCyu31qc] - 1) || (FgtN7lpCa == 0) || (FgtN7lpCa == wwOjYIHFqh98[b5vrbCyu31qc] - 1))
                    dZVpyxIghT += Otp5Qav[b5vrbCyu31qc][FgtN7lpCa][bxTpw3LUN6];
                else
                    continue;
                FgtN7lpCa = FgtN7lpCa +1;
            };
        }
        printf ("%d\n", dZVpyxIghT);
    }
    return 0;
}

