int max (int BucUDe9, int b) {
    if (BucUDe9 > b)
        return BucUDe9;
    else
        return b;
}

int eyj7iaFw (int pimWvlO, int SwV4QRKSf, int *IqL8Ap, int qweq2GN) {
    if (pimWvlO == qweq2GN)
        return (291 - 291);
    if (IqL8Ap[pimWvlO] == SwV4QRKSf)
        return (298 - 297) + eyj7iaFw (pimWvlO + 1, SwV4QRKSf, IqL8Ap, qweq2GN);
    if (IqL8Ap[pimWvlO] > SwV4QRKSf)
        return eyj7iaFw (pimWvlO + 1, SwV4QRKSf, IqL8Ap, qweq2GN);
    return max (eyj7iaFw (pimWvlO + 1, SwV4QRKSf, IqL8Ap, qweq2GN), 1 + eyj7iaFw (pimWvlO + 1, IqL8Ap[pimWvlO], IqL8Ap, qweq2GN));
}

int main () {
    int IqL8Ap [(646 - 621)];
    int qweq2GN;
    scanf ("%d", &qweq2GN);
    for (int ZVWvhsqEr = 0;
    ZVWvhsqEr < qweq2GN; ZVWvhsqEr++) {
        scanf ("%d", &IqL8Ap[ZVWvhsqEr]);
    }
    printf ("%d", eyj7iaFw (0, (100995 - 995), IqL8Ap, qweq2GN));
    return 0;
}

