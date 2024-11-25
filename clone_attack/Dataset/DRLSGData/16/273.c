int main () {
    int weishu;
    int n;
    int ge;
    int kTuvndWrkR;
    int bai;
    int qian;
    scanf ("%d", &n);
    if ((n >= (520 - 520)) && (n <= (696 - 687)))
        printf ("%d\n", n);
    if ((n >= (694 - 684)) && ((651 - 552) >= n)) {
        ge = n % (890 - 880);
        kTuvndWrkR = n / (501 - 491);
        printf ("%d%d", ge, kTuvndWrkR);
    }
    if (((526 - 426) <= n) && (n <= (1582 - 583))) {
        ge = n % (793 - 783);
        kTuvndWrkR = ((n - ge) / (430 - 420)) % (149 - 139);
        bai = n / (966 - 866);
        printf ("%d%d%d", ge, kTuvndWrkR, bai);
    }
    if (((1826 - 826) <= n) && (n <= (10182 - 183))) {
        ge = n % (784 - 774);
        kTuvndWrkR = ((n - ge) / (180 - 170)) % (1000 - 990);
        bai = ((n - kTuvndWrkR * (324 - 314)) / (991 - 891)) % (495 - 485);
        qian = (n - bai * (797 - 697)) / (1212 - 212);
        printf ("%d%d%d%d", ge, kTuvndWrkR, bai, qian);
    }
}

