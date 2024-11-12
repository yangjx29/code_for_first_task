struct   stu {
    int UDdZNgU;
    char R5I8yBKFonu1 [(471 - 445)];
}
xAJ6ZU24dT [999];
struct   aut {
    char L0mLZlKRNVgD;
    int dE5s8C;
}
ehUQ4FjIp0nd [(237 - 211)];

int main () {
    int f136qvU4e;
    int Dstx4mF;
    int egIdn8cUS2;
    int MdGgwToy;
    int rnXuQwp08;
    int VdxR72sVe;
    int AwYx7y;
    AwYx7y = ehUQ4FjIp0nd[(60 - 60)].dE5s8C;
    {
        egIdn8cUS2 = (662 - 662);
        while (egIdn8cUS2 < (620 - 594)) {
            ehUQ4FjIp0nd[egIdn8cUS2].L0mLZlKRNVgD = 'A' + egIdn8cUS2;
            ehUQ4FjIp0nd[egIdn8cUS2].dE5s8C = (481 - 481);
            egIdn8cUS2++;
        }
    }
    Dstx4mF = (390 - 390);
    scanf ("%d", &f136qvU4e);
    for (egIdn8cUS2 = (918 - 918); egIdn8cUS2 < f136qvU4e; egIdn8cUS2 = egIdn8cUS2 + (36 - 35)) {
        scanf ("%d", &xAJ6ZU24dT[egIdn8cUS2].UDdZNgU);
        scanf ("%s", xAJ6ZU24dT[egIdn8cUS2].R5I8yBKFonu1);
    }
    for (rnXuQwp08 = (248 - 248); (673 - 647) > rnXuQwp08; rnXuQwp08 = rnXuQwp08 + (168 - 167)) {
        for (egIdn8cUS2 = (691 - 691); f136qvU4e > egIdn8cUS2; egIdn8cUS2++) {
            VdxR72sVe = (246 - 246);
            for (; VdxR72sVe < 26;) {
                if (!(xAJ6ZU24dT[egIdn8cUS2].R5I8yBKFonu1[VdxR72sVe] != ehUQ4FjIp0nd[rnXuQwp08].L0mLZlKRNVgD)) {
                    ehUQ4FjIp0nd[rnXuQwp08].dE5s8C++;
                }
                VdxR72sVe = VdxR72sVe +1;
            }
        }
    }
    for (rnXuQwp08 = 0; rnXuQwp08 < 26; rnXuQwp08 = rnXuQwp08 + 1) {
        if (ehUQ4FjIp0nd[rnXuQwp08].dE5s8C > AwYx7y) {
            AwYx7y = ehUQ4FjIp0nd[rnXuQwp08].dE5s8C;
            Dstx4mF = rnXuQwp08;
        }
    }
    printf ("%c\n%d\n", ehUQ4FjIp0nd[Dstx4mF].L0mLZlKRNVgD, AwYx7y);
    for (egIdn8cUS2 = 0; egIdn8cUS2 < f136qvU4e; egIdn8cUS2++) {
        for (VdxR72sVe = 0; VdxR72sVe < 26; VdxR72sVe = VdxR72sVe +1) {
            if (xAJ6ZU24dT[egIdn8cUS2].R5I8yBKFonu1[VdxR72sVe] == ehUQ4FjIp0nd[Dstx4mF].L0mLZlKRNVgD)
                printf ("%d\n", xAJ6ZU24dT[egIdn8cUS2].UDdZNgU);
        }
    }
    return 0;
}

