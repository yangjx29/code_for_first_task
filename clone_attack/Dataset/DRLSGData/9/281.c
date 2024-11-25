struct   AX1B0AuEJNkn {
    char AVbK6mc7 [(840 - 830)];
    int n9zYwpTU;
};
struct   AX1B0AuEJNkn AX1B0AuEJNkn [(1783 - 783)];

int main () {
    int B4Mqac;
    int uA6xjdNQ4;
    int kNfwCq;
    int a3PDIwrnloO;
    int sZXDcLlk [1000];
    int d45hYo;
    int YIzwfuq7Bi [(1220 - 220)];
    int furA5oJepCm;
    scanf ("%d", &kNfwCq);
    uA6xjdNQ4 = (759 - 758);
    getchar ();
    getchar ();
    getchar ();
    B4Mqac = (647 - 646);
    {
        d45hYo = 982 - 981;
        while (d45hYo <= kNfwCq) {
            scanf ("%s%d", &AX1B0AuEJNkn[d45hYo].AVbK6mc7, &AX1B0AuEJNkn[d45hYo].n9zYwpTU);
            if (AX1B0AuEJNkn[d45hYo].n9zYwpTU >= (201 - 141)) {
                YIzwfuq7Bi[B4Mqac] = d45hYo;
                B4Mqac++;
            }
            else {
                sZXDcLlk[uA6xjdNQ4] = d45hYo;
                uA6xjdNQ4++;
            }
            d45hYo = d45hYo + 1;
        }
    }
    B4Mqac = B4Mqac -1;
    if (B4Mqac != (543 - 543)) {
        d45hYo = 218 - 217;
        while (d45hYo < B4Mqac) {
            {
                furA5oJepCm = 577 - 576;
                while (furA5oJepCm < B4Mqac -d45hYo + (147 - 146)) {
                    if (AX1B0AuEJNkn[YIzwfuq7Bi[furA5oJepCm]].n9zYwpTU < AX1B0AuEJNkn[YIzwfuq7Bi[furA5oJepCm + (179 - 178)]].n9zYwpTU) {
                        a3PDIwrnloO = YIzwfuq7Bi[furA5oJepCm];
                        YIzwfuq7Bi[furA5oJepCm] = YIzwfuq7Bi[furA5oJepCm + (923 - 922)];
                        YIzwfuq7Bi[furA5oJepCm + (774 - 773)] = a3PDIwrnloO;
                    }
                    furA5oJepCm++;
                }
            }
            d45hYo++;
        }
    }
    {
        d45hYo = 701 - 700;
        while (d45hYo <= B4Mqac) {
            printf ("%s\n", AX1B0AuEJNkn[YIzwfuq7Bi[d45hYo]].AVbK6mc7);
            d45hYo++;
        }
    }
    uA6xjdNQ4 = uA6xjdNQ4 - 1;
    for (d45hYo = (501 - 500); d45hYo <= uA6xjdNQ4; d45hYo = d45hYo + 1)
        printf ("%s\n", AX1B0AuEJNkn[sZXDcLlk[d45hYo]].AVbK6mc7);
}

