int main () {
    char n [100];
    int EJBqTAiFs0a (char);
    int p6Q1xW5mp2B;
    int SpowXxc;
    int KCLOMq;
    int kASl3zUCH;
    int wei;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    long  ikcWhJ;
    scanf ("%d%s%d", &p6Q1xW5mp2B, n, &SpowXxc);
    KCLOMq = strlen (n);
    for (kASl3zUCH = 0, ikcWhJ = 0; KCLOMq -1 >= kASl3zUCH; kASl3zUCH = kASl3zUCH + 1) {
        if (KCLOMq -1 > kASl3zUCH)
            ikcWhJ = (ikcWhJ + EJBqTAiFs0a (n[kASl3zUCH])) * p6Q1xW5mp2B;
        else
            ikcWhJ = ikcWhJ + EJBqTAiFs0a (n[kASl3zUCH]);
    }
    for (kASl3zUCH = 0;; ikcWhJ = ikcWhJ / SpowXxc, kASl3zUCH++) {
        wei = ikcWhJ % SpowXxc;
        if ((738 - 728) <= wei)
            n[kASl3zUCH] = wei - (481 - 471) + 'A';
        else
            n[kASl3zUCH] = wei + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (SpowXxc > ikcWhJ)
            break;
    }
    for (kASl3zUCH = kASl3zUCH; 0 <= kASl3zUCH; kASl3zUCH--)
        printf ("%c", n[kASl3zUCH]);
    return 0;
}

int EJBqTAiFs0a (char SpowXxc) {
    int p6Q1xW5mp2B;
    if ('0' <= SpowXxc &&SpowXxc <= '9')
        p6Q1xW5mp2B = SpowXxc -48;
    if (SpowXxc >= 'a' && SpowXxc <= 'z')
        p6Q1xW5mp2B = 10 + SpowXxc -'a';
    if (SpowXxc >= 'A' && SpowXxc <= 'Z')
        p6Q1xW5mp2B = 10 + SpowXxc -'A';
    return p6Q1xW5mp2B;
}

