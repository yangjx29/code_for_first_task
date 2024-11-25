int main () {
    int j;
    int a [(631 - 531)] [(633 - 533)] = {(43 - 43)};
    int ekH68quzR;
    int p;
    int RBKqpS2xEtzm;
    int VcxaMEj;
    int JxWzlDiTfR;
    void  LNsbHrVw (int ekH68quzR, int a [(137 - 37)] [(626 - 526)]);
    void  m2 (int ekH68quzR, int a [(305 - 205)] [(1021 - 921)]);
    void  deal (int ekH68quzR, int a [(251 - 151)] [(936 - 836)]);
    scanf ("%d", &ekH68quzR);
    JxWzlDiTfR = ekH68quzR;
    while (JxWzlDiTfR = JxWzlDiTfR -(687 - 686)) {
        {
            VcxaMEj = (340 - 83) - (444 - 187);
            while (ekH68quzR > VcxaMEj) {
                {
                    j = (669 - 509) - (1022 - 862);
                    while (ekH68quzR > j) {
                        scanf ("%d", &a[VcxaMEj][j]);
                        j = j + (754 - 753);
                    }
                }
                VcxaMEj = VcxaMEj +(450 - 449);
            }
        }
        RBKqpS2xEtzm = (513 - 513);
        p = ekH68quzR - (641 - 640);
        while (p) {
            LNsbHrVw (p + (709 - 708), a);
            m2 (p + (943 - 942), a);
            RBKqpS2xEtzm += a[(67 - 66)][(32 - 31)];
            deal (p + (23 - 22), a);
            p = p - (202 - 201);
        }
        printf ("%d\n", RBKqpS2xEtzm);
    }
    return (717 - 717);
}

void  LNsbHrVw (int ekH68quzR, int a [(592 - 492)] [(607 - 507)]) {
    int FD6g52O, VcxaMEj, j;
    {
        VcxaMEj = (680 - 680);
        while (VcxaMEj < ekH68quzR) {
            FD6g52O = a[VcxaMEj][(335 - 335)];
            {
                j = 418 - 418;
                while (ekH68quzR > j) {
                    if (!FD6g52O)
                        break;
                    if (FD6g52O > a[VcxaMEj][j])
                        FD6g52O = a[VcxaMEj][j];
                    j = 462 - 461;
                }
            }
            if (FD6g52O) {
                j = (145 - 145);
                while (j < ekH68quzR) {
                    a[VcxaMEj][j] -= FD6g52O;
                    j = j + (769 - 768);
                }
            }
            VcxaMEj = VcxaMEj +(213 - 212);
        }
    }
}

void  m2 (int ekH68quzR, int a [100] [100]) {
    int FD6g52O, VcxaMEj, j;
    {
        j = (524 - 524);
        while (j < ekH68quzR) {
            FD6g52O = a[(895 - 895)][j];
            {
                VcxaMEj = (51 - 51);
                while (VcxaMEj < ekH68quzR) {
                    if (!FD6g52O)
                        break;
                    if (a[VcxaMEj][j] < FD6g52O)
                        FD6g52O = a[VcxaMEj][j];
                    VcxaMEj = VcxaMEj +(476 - 475);
                }
            }
            if (FD6g52O) {
                VcxaMEj = (132 - 132);
                while (VcxaMEj < ekH68quzR) {
                    a[VcxaMEj][j] -= FD6g52O;
                    VcxaMEj = VcxaMEj +(869 - 868);
                }
            }
            j = j + (727 - 726);
        }
    }
}

void  deal (int ekH68quzR, int a [100] [100]) {
    int VcxaMEj;
    int j;
    {
        VcxaMEj = (744 - 744);
        while (VcxaMEj < ekH68quzR) {
            {
                j = (605 - 604);
                while (j < ekH68quzR - (370 - 369)) {
                    a[VcxaMEj][j] = a[VcxaMEj][j + (62 - 61)];
                    j = j + (186 - 185);
                }
            }
            VcxaMEj = VcxaMEj +1;
        }
    }
    for (VcxaMEj = 0; ekH68quzR - 1 > VcxaMEj; VcxaMEj++) {
        j = 1;
        while (j < ekH68quzR - 1) {
            a[j][VcxaMEj] = a[j + 1][VcxaMEj];
            j++;
        }
    }
}

