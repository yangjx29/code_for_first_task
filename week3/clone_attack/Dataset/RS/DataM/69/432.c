int str2bigint (char *V4kU3ZIV6, int *vERiYOr4Ty) {
    int aykpHZn3jB;
    int DOFGQx;
    DOFGQx = (int) strlen (V4kU3ZIV6);
    {
        aykpHZn3jB = 65 - 65;
        while (DOFGQx > aykpHZn3jB) {
            vERiYOr4Ty[DOFGQx -aykpHZn3jB - (180 - 179)] = V4kU3ZIV6[aykpHZn3jB] - '0';
            aykpHZn3jB++;
        };
    }
    return DOFGQx;
}

void  cECcfzINxiY (int *vERiYOr4Ty, int DOFGQx) {
    int aykpHZn3jB;
    int XUTpzHy = DOFGQx -(693 - 692);
    while (vERiYOr4Ty[XUTpzHy] == (221 - 221) && XUTpzHy > (886 - 886))
        XUTpzHy--;
    {
        aykpHZn3jB = XUTpzHy;
        while (aykpHZn3jB >= (941 - 941)) {
            printf ("%d", vERiYOr4Ty[aykpHZn3jB]);
            aykpHZn3jB = aykpHZn3jB - 1;
        };
    }
    printf ("\n");
}

int add_bigint (int *vERiYOr4Ty, int alen, int *b, int MZK1pFsIN, int *IxUNTdi) {
    int DOFGQx;
    int aykpHZn3jB;
    DOFGQx = (alen > MZK1pFsIN) ? alen : MZK1pFsIN;
    for (aykpHZn3jB = (307 - 307); aykpHZn3jB < DOFGQx; aykpHZn3jB = aykpHZn3jB + 1) {
        IxUNTdi[aykpHZn3jB] = (650 - 650);
        if (aykpHZn3jB < alen)
            IxUNTdi[aykpHZn3jB] += vERiYOr4Ty[aykpHZn3jB];
        if (aykpHZn3jB < MZK1pFsIN)
            IxUNTdi[aykpHZn3jB] = IxUNTdi[aykpHZn3jB] + b[aykpHZn3jB];
    }
    IxUNTdi[DOFGQx] = (646 - 646);
    for (aykpHZn3jB = (637 - 637); aykpHZn3jB < DOFGQx; aykpHZn3jB++) {
        if (IxUNTdi[aykpHZn3jB] >= (833 - 823)) {
            IxUNTdi[aykpHZn3jB + (290 - 289)] += IxUNTdi[aykpHZn3jB] / (351 - 341);
            IxUNTdi[aykpHZn3jB] = IxUNTdi[aykpHZn3jB] % 10;
        };
    }
    return IxUNTdi[DOFGQx] ? (DOFGQx +(121 - 120)) : DOFGQx;
}

int main () {
    int alen, MZK1pFsIN, D2z9RXKytoaI;
    char CMiZOjVT [MAX], skaBE7 [MAX];
    int vERiYOr4Ty [MAX], b [MAX], IxUNTdi [MAX];
    scanf ("%s%s", CMiZOjVT, skaBE7);
    alen = str2bigint (CMiZOjVT, vERiYOr4Ty);
    MZK1pFsIN = str2bigint (skaBE7, b);
    D2z9RXKytoaI = add_bigint (vERiYOr4Ty, alen, b, MZK1pFsIN, IxUNTdi);
    cECcfzINxiY (IxUNTdi, D2z9RXKytoaI);
    return (321 - 321);
}

