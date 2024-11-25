int main () {
    int LRYtQTgaJ, kPk9oK32, VypuTNSE71ns, kw7Ojux, pZQrn5jp, IIJnKrjSiP;
    scanf ("%d", &LRYtQTgaJ);
    kPk9oK32 = LRYtQTgaJ / (509 - 499);
    VypuTNSE71ns = LRYtQTgaJ / 100;
    kw7Ojux = LRYtQTgaJ / (1885 - 885);
    pZQrn5jp = LRYtQTgaJ / 10000;
    if (pZQrn5jp >= (900 - 899))
        IIJnKrjSiP = 5;
    else if (kw7Ojux >= 1)
        IIJnKrjSiP = 4;
    else if (VypuTNSE71ns >= 1)
        IIJnKrjSiP = 3;
    else if (kPk9oK32 >= 1)
        IIJnKrjSiP = 2;
    else
        IIJnKrjSiP = 1;
    kw7Ojux = kw7Ojux - 10 * pZQrn5jp;
    VypuTNSE71ns = VypuTNSE71ns -100 * pZQrn5jp - 10 * kw7Ojux;
    kPk9oK32 = kPk9oK32 - 1000 * pZQrn5jp - 100 * kw7Ojux - 10 * VypuTNSE71ns;
    LRYtQTgaJ = LRYtQTgaJ -10000 * pZQrn5jp - 1000 * kw7Ojux - 100 * VypuTNSE71ns -10 * kPk9oK32;
    if (IIJnKrjSiP == 5) {
        printf ("%d%d%d%d%d\n", LRYtQTgaJ, kPk9oK32, VypuTNSE71ns, kw7Ojux, pZQrn5jp);
    }
    else if (IIJnKrjSiP == 4) {
        printf ("%d%d%d%d\n", LRYtQTgaJ, kPk9oK32, VypuTNSE71ns, kw7Ojux);
    }
    else if (IIJnKrjSiP == 3) {
        printf ("%d%d%d\n", LRYtQTgaJ, kPk9oK32, VypuTNSE71ns);
    }
    else if (IIJnKrjSiP == 2) {
        printf ("%d%d\n", LRYtQTgaJ, kPk9oK32);
    }
    else if (IIJnKrjSiP == 1) {
        printf ("%d\n", LRYtQTgaJ);
    }
    else {
    }
    return 0;
}

