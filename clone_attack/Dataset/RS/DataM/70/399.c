int main () {
    int mtkZiL;
    int vS63Npi1, w4uabhL = (697 - 697);
    float x;
    float SlG3FKV;
    float hol3Z9y;
    float y1;
    float W1YQVnwdEtpF;
    float kcJZLUl;
    float PnxBYvzGc2VL;
    float EpzECQRs;
    float x4;
    float kVk4uX6;
    float dis1;
    float dis2;
    float Hm0wrAs9XPN;
    float vH0FOwyDW6Qt;
    float UNSx28Ep;
    float KoPajuFOEDZ;
    float jkT1BKc;
    scanf ("%d", &mtkZiL);
    {
        vS63Npi1 = 455 - 455;
        while (vS63Npi1 < mtkZiL) {
            scanf ("%f %f", &x, &SlG3FKV);
            if (w4uabhL == (685 - 685)) {
                hol3Z9y = W1YQVnwdEtpF = PnxBYvzGc2VL = x4 = x;
                y1 = kcJZLUl = EpzECQRs = kVk4uX6 = SlG3FKV;
                w4uabhL = (268 - 267);
            }
            if (hol3Z9y > x) {
                hol3Z9y = x;
                y1 = SlG3FKV;
            }
            if (x > W1YQVnwdEtpF) {
                kcJZLUl = SlG3FKV;
                W1YQVnwdEtpF = x;
            }
            if (SlG3FKV < EpzECQRs) {
                PnxBYvzGc2VL = x;
                EpzECQRs = SlG3FKV;
            }
            if (kVk4uX6 < SlG3FKV) {
                kVk4uX6 = SlG3FKV;
                x4 = x;
            }
            vS63Npi1 = vS63Npi1 + 1;
        };
    }
    dis1 = sqrt ((W1YQVnwdEtpF -hol3Z9y) * (W1YQVnwdEtpF -hol3Z9y) + (kcJZLUl - y1) * (kcJZLUl - y1));
    jkT1BKc = dis1;
    dis2 = sqrt ((PnxBYvzGc2VL -hol3Z9y) * (PnxBYvzGc2VL -hol3Z9y) + (EpzECQRs -y1) * (EpzECQRs -y1));
    Hm0wrAs9XPN = sqrt ((x4 - hol3Z9y) * (x4 - hol3Z9y) + (kVk4uX6 - y1) * (kVk4uX6 - y1));
    if (jkT1BKc < dis2) {
        jkT1BKc = dis2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (Hm0wrAs9XPN > jkT1BKc) {
        jkT1BKc = Hm0wrAs9XPN;
    }
    vH0FOwyDW6Qt = sqrt ((PnxBYvzGc2VL -W1YQVnwdEtpF) * (PnxBYvzGc2VL -W1YQVnwdEtpF) + (EpzECQRs -kcJZLUl) * (EpzECQRs -kcJZLUl));
    if (vH0FOwyDW6Qt > jkT1BKc) {
        jkT1BKc = vH0FOwyDW6Qt;
    }
    UNSx28Ep = sqrt ((x4 - W1YQVnwdEtpF) * (x4 - W1YQVnwdEtpF) + (kVk4uX6 - kcJZLUl) * (kVk4uX6 - kcJZLUl));
    if (UNSx28Ep > jkT1BKc) {
        jkT1BKc = UNSx28Ep;
    }
    KoPajuFOEDZ = sqrt ((x4 - PnxBYvzGc2VL) * (x4 - PnxBYvzGc2VL) + (kVk4uX6 - EpzECQRs) * (kVk4uX6 - EpzECQRs));
    if (KoPajuFOEDZ > jkT1BKc) {
        jkT1BKc = KoPajuFOEDZ;
    }
    printf ("%.4f\n", jkT1BKc);
    return (118 - 118);
}

