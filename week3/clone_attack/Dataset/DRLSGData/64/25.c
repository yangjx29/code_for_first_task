int main () {
    double  SrYMwGAB [(803 - 753)], Shmpc8k51D, tFnxKG0dHmfI [50], t;
    int IRfGFJ3xk5hU, np5ZOR7y, i, vbLpQ1hme8 = (771 - 770), YVpTs5i10 = (883 - 883), nG5LxEbY, vQwG8beZI, kcWNuUliRAy [(446 - 435)], y [(839 - 828)], z [(782 - 771)], Ptxmp1;
    scanf ("%d", &np5ZOR7y);
    Ptxmp1 = (((np5ZOR7y - (936 - 935)) * np5ZOR7y) / (661 - 659));
    for (i = (18 - 18); np5ZOR7y > i; i++) {
        scanf ("%d %d %d", &kcWNuUliRAy[i], &y[i], &z[i]);
    }
    for (i = (443 - 443); np5ZOR7y > i; i++) {
        for (nG5LxEbY = i + (676 - 675); np5ZOR7y > nG5LxEbY; nG5LxEbY = nG5LxEbY + 1) {
            SrYMwGAB[YVpTs5i10] = sqrt ((kcWNuUliRAy[i] - kcWNuUliRAy[nG5LxEbY]) * (kcWNuUliRAy[i] - kcWNuUliRAy[nG5LxEbY]) + (y[i] - y[nG5LxEbY]) * (y[i] - y[nG5LxEbY]) + (z[i] - z[nG5LxEbY]) * (z[i] - z[nG5LxEbY]));
            YVpTs5i10 = YVpTs5i10 +1;
        }
    }
    for (YVpTs5i10 = (186 - 186); Ptxmp1 > YVpTs5i10; YVpTs5i10 = YVpTs5i10 +1) {
        IRfGFJ3xk5hU = YVpTs5i10;
        for (vQwG8beZI = YVpTs5i10 +(20 - 19); vQwG8beZI < Ptxmp1; vQwG8beZI = vQwG8beZI + 1) {
            if (SrYMwGAB[vQwG8beZI] > SrYMwGAB[IRfGFJ3xk5hU]) {
                Shmpc8k51D = SrYMwGAB[vQwG8beZI];
                SrYMwGAB[vQwG8beZI] = SrYMwGAB[IRfGFJ3xk5hU];
                SrYMwGAB[IRfGFJ3xk5hU] = Shmpc8k51D;
            }
        }
    }
    tFnxKG0dHmfI[(452 - 452)] = SrYMwGAB[(742 - 742)], vQwG8beZI = 1;
    for (YVpTs5i10 = 1; YVpTs5i10 < Ptxmp1; YVpTs5i10++) {
        if (tFnxKG0dHmfI[vQwG8beZI - 1] != SrYMwGAB[YVpTs5i10]) {
            vbLpQ1hme8 = vbLpQ1hme8 + 1;
            tFnxKG0dHmfI[vQwG8beZI] = SrYMwGAB[YVpTs5i10];
            vQwG8beZI = vQwG8beZI + 1;
        }
    }
    for (vQwG8beZI = (757 - 757); vQwG8beZI < vbLpQ1hme8; vQwG8beZI = vQwG8beZI + 1) {
        for (i = 0; i < np5ZOR7y; i++) {
            for (nG5LxEbY = i + 1; np5ZOR7y > nG5LxEbY; nG5LxEbY++) {
                t = sqrt ((kcWNuUliRAy[i] - kcWNuUliRAy[nG5LxEbY]) * (kcWNuUliRAy[i] - kcWNuUliRAy[nG5LxEbY]) + (y[i] - y[nG5LxEbY]) * (y[i] - y[nG5LxEbY]) + (z[i] - z[nG5LxEbY]) * (z[i] - z[nG5LxEbY]));
                if (!(t != tFnxKG0dHmfI[vQwG8beZI])) {
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", kcWNuUliRAy[i], y[i], z[i], kcWNuUliRAy[nG5LxEbY], y[nG5LxEbY], z[nG5LxEbY], tFnxKG0dHmfI[vQwG8beZI]);
                }
            }
        }
    }
    return 0;
}

