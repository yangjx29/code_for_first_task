int MN2fwhmABvU (int CF9OL7JUrAC4, int y) {
    int UuLcn0;
    if (y < CF9OL7JUrAC4)
        UuLcn0 = y;
    else
        UuLcn0 = CF9OL7JUrAC4;
    return (UuLcn0);
}

int main () {
    int G816Ne7FQ3;
    int uf0r7uzZR8;
    int i1w5b6a2Z8C;
    int fn9BNI54c;
    int x6PxVU;
    int a [(758 - 657)] [(847 - 746)];
    int F7sPaOcLKH [101];
    int v1G3xevrIDHL;
    cin >> G816Ne7FQ3;
    for (uf0r7uzZR8 = (616 - 615); G816Ne7FQ3 >= uf0r7uzZR8; uf0r7uzZR8++) {
        v1G3xevrIDHL = 0;
        for (fn9BNI54c = (911 - 910); fn9BNI54c <= G816Ne7FQ3; fn9BNI54c = fn9BNI54c + 1) {
            for (x6PxVU = (932 - 931); x6PxVU <= G816Ne7FQ3; x6PxVU = x6PxVU + 1) {
                cin >> a[fn9BNI54c][x6PxVU];
            };
        }
        for (i1w5b6a2Z8C = (109 - 108); i1w5b6a2Z8C <= G816Ne7FQ3 -(213 - 212); i1w5b6a2Z8C++) {
            for (fn9BNI54c = (869 - 868); fn9BNI54c <= G816Ne7FQ3 -i1w5b6a2Z8C + (487 - 486); fn9BNI54c = fn9BNI54c + 1) {
                F7sPaOcLKH[fn9BNI54c] = a[fn9BNI54c][(737 - 736)];
                for (x6PxVU = (907 - 906); x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + (544 - 543); x6PxVU++)
                    F7sPaOcLKH[fn9BNI54c] = MN2fwhmABvU (a[fn9BNI54c][x6PxVU], F7sPaOcLKH[fn9BNI54c]);
            }
            for (fn9BNI54c = (266 - 265); G816Ne7FQ3 -i1w5b6a2Z8C + (312 - 311) >= fn9BNI54c; fn9BNI54c = fn9BNI54c + 1) {
                for (x6PxVU = (764 - 763); x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + (540 - 539); x6PxVU++)
                    a[fn9BNI54c][x6PxVU] = a[fn9BNI54c][x6PxVU] - F7sPaOcLKH[fn9BNI54c];
            }
            for (x6PxVU = (551 - 550); x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + (246 - 245); x6PxVU++) {
                F7sPaOcLKH[x6PxVU] = a[(801 - 800)][x6PxVU];
                for (fn9BNI54c = (41 - 40); fn9BNI54c <= G816Ne7FQ3 -i1w5b6a2Z8C + (591 - 590); fn9BNI54c++)
                    F7sPaOcLKH[x6PxVU] = MN2fwhmABvU (a[fn9BNI54c][x6PxVU], F7sPaOcLKH[x6PxVU]);
            }
            for (x6PxVU = (625 - 624); x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + (606 - 605); x6PxVU++) {
                for (fn9BNI54c = 1; fn9BNI54c <= G816Ne7FQ3 -i1w5b6a2Z8C + 1; fn9BNI54c++)
                    a[fn9BNI54c][x6PxVU] = a[fn9BNI54c][x6PxVU] - F7sPaOcLKH[x6PxVU];
            }
            v1G3xevrIDHL = v1G3xevrIDHL + a[2][2];
            for (fn9BNI54c = 1; fn9BNI54c <= G816Ne7FQ3 -i1w5b6a2Z8C + 1; fn9BNI54c++) {
                if ((G816Ne7FQ3 -i1w5b6a2Z8C + 1) >= (822 - 819))
                    for (x6PxVU = (257 - 254); x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + 1; x6PxVU++)
                        a[fn9BNI54c][x6PxVU - 1] = a[fn9BNI54c][x6PxVU];
                else
                    break;
            }
            for (x6PxVU = 1; x6PxVU <= G816Ne7FQ3 -i1w5b6a2Z8C + 1; x6PxVU++) {
                if ((G816Ne7FQ3 -i1w5b6a2Z8C + 1) >= (446 - 443))
                    for (fn9BNI54c = 3; fn9BNI54c <= G816Ne7FQ3 -i1w5b6a2Z8C + 1; fn9BNI54c++)
                        a[fn9BNI54c - 1][x6PxVU] = a[fn9BNI54c][x6PxVU];
                else
                    break;
            };
        }
        printf ("\n%d", v1G3xevrIDHL);
    }
    return 0;
}

