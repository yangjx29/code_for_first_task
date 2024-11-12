int main () {
    int PSWJrFeh;
    int JieBFy5;
    char yfFvLIh [1000];
    int cs [100];
    int d;
    int JKtbUQRdOiV;
    int tgC8SU;
    int JlD73K;
    char AtSMdFuGyg8 [1000];
    int Mza7NmSni;
    scanf ("%d", &JieBFy5);
    JlD73K = 1;
    for (JKtbUQRdOiV = 0; JKtbUQRdOiV < JieBFy5; JKtbUQRdOiV = JKtbUQRdOiV +1) {
        cs[0] = 1;
        for (Mza7NmSni = 1; Mza7NmSni < 100; Mza7NmSni = Mza7NmSni +1) {
            cs[Mza7NmSni] = 0;
        }
        scanf ("%s", &yfFvLIh);
        AtSMdFuGyg8[0] = yfFvLIh[0];
        for (Mza7NmSni = 1; Mza7NmSni < strlen (yfFvLIh); Mza7NmSni = Mza7NmSni +1) {
            PSWJrFeh = 0;
            for (tgC8SU = 0; tgC8SU < JlD73K; tgC8SU = tgC8SU + 1) {
                if (yfFvLIh[Mza7NmSni] == AtSMdFuGyg8[tgC8SU]) {
                    PSWJrFeh = 1;
                    cs[tgC8SU] = cs[tgC8SU] + 1;
                    break;
                }
            }
            if (!(0 != PSWJrFeh)) {
                AtSMdFuGyg8[JlD73K] = yfFvLIh[Mza7NmSni];
                cs[JlD73K] = cs[JlD73K] + 1;
                JlD73K = JlD73K +1;
                d = JlD73K;
            }
        }
        PSWJrFeh = 0;
        for (Mza7NmSni = 0; d > Mza7NmSni; Mza7NmSni = Mza7NmSni +1) {
            if (cs[Mza7NmSni] == 1) {
                PSWJrFeh = 1;
                printf ("%c\n", AtSMdFuGyg8[Mza7NmSni]);
                break;
            }
        }
        if (PSWJrFeh == 0) {
        }
    }
    return 0;
}

