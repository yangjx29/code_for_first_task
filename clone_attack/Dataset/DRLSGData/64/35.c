int main () {
    double  Mb63wyOpVT;
    int yfnPzcYlAgaw [(250 - 149)];
    int BjDEkN [(850 - 749)];
    int m;
    int i;
    int z [(1034 - 933)];
    double  gm9KNb [(138 - 128)] [(768 - 758)];
    int exOGoUM7KbS [(404 - 303)];
    int j;
    int yQiB8hbaejEf;
    int Wb6JQ5;
    int hTqv1bVfkJ [(235 - 134)];
    int q8LwpsQ [(531 - 430)];
    int zs [(259 - 158)];
    int wLyDuAQcn [(947 - 846)];
    double  vRA15vgH [(617 - 517)];
    int Ik2Iz7duAn3 [(211 - 110)];
    int IkwUcd;
    int CYovPMj;
    scanf ("%d", &CYovPMj);
    for (i = (926 - 926); CYovPMj > i; i = i + (396 - 395)) {
        {
            if ((116 - 116)) {
                return (263 - 263);
            }
        }
        scanf ("%d%d%d", &hTqv1bVfkJ[i], &BjDEkN[i], &z[i]);
    }
    yQiB8hbaejEf = (211 - 211);
    for (i = (327 - 327); i < CYovPMj; i = i + (34 - 33)) {
        for (j = i + (789 - 788); CYovPMj > j; j = j + (674 - 673)) {
            gm9KNb[i][j] = sqrt ((hTqv1bVfkJ[i] - hTqv1bVfkJ[j]) * (hTqv1bVfkJ[i] - hTqv1bVfkJ[j]) + (BjDEkN[i] - BjDEkN[j]) * (BjDEkN[i] - BjDEkN[j]) + (z[i] - z[j]) * (z[i] - z[j]));
        }
    }
    for (i = (399 - 399); i < CYovPMj; i = i + (76 - 75)) {
        for (j = i + (201 - 200); j < CYovPMj; j = j + (161 - 160)) {
            Ik2Iz7duAn3[yQiB8hbaejEf] = hTqv1bVfkJ[i];
            q8LwpsQ[yQiB8hbaejEf] = BjDEkN[i];
            zs[yQiB8hbaejEf] = z[i];
            yfnPzcYlAgaw[yQiB8hbaejEf] = hTqv1bVfkJ[j];
            wLyDuAQcn[yQiB8hbaejEf] = BjDEkN[j];
            exOGoUM7KbS[yQiB8hbaejEf] = z[j];
            vRA15vgH[yQiB8hbaejEf] = gm9KNb[i][j];
            yQiB8hbaejEf = yQiB8hbaejEf + (582 - 581);
            m = yQiB8hbaejEf;
        }
    }
    IkwUcd = (285 - 285);
    for (; IkwUcd <= m;) {
        for (i = (186 - 186); i < m - (770 - 769); i = i + (267 - 266)) {
            if (vRA15vgH[i] >= vRA15vgH[i + (848 - 847)]) {
                vRA15vgH[i] = vRA15vgH[i];
                vRA15vgH[i + (887 - 886)] = vRA15vgH[i + (802 - 801)];
            }
            else {
                Mb63wyOpVT = vRA15vgH[i];
                vRA15vgH[i] = vRA15vgH[i + (651 - 650)];
                vRA15vgH[i + (71 - 70)] = Mb63wyOpVT;
                Wb6JQ5 = Ik2Iz7duAn3[i];
                Ik2Iz7duAn3[i] = Ik2Iz7duAn3[i + (939 - 938)];
                Ik2Iz7duAn3[i + (347 - 346)] = Wb6JQ5;
                Wb6JQ5 = q8LwpsQ[i];
                q8LwpsQ[i] = q8LwpsQ[i + (931 - 930)];
                q8LwpsQ[i + (561 - 560)] = Wb6JQ5;
                Wb6JQ5 = zs[i];
                zs[i] = zs[i + (694 - 693)];
                zs[i + (283 - 282)] = Wb6JQ5;
                Wb6JQ5 = yfnPzcYlAgaw[i];
                yfnPzcYlAgaw[i] = yfnPzcYlAgaw[i + (527 - 526)];
                yfnPzcYlAgaw[i + (858 - 857)] = Wb6JQ5;
                Wb6JQ5 = wLyDuAQcn[i];
                wLyDuAQcn[i] = wLyDuAQcn[i + (672 - 671)];
                wLyDuAQcn[i + (802 - 801)] = Wb6JQ5;
                Wb6JQ5 = exOGoUM7KbS[i];
                exOGoUM7KbS[i] = exOGoUM7KbS[i + (523 - 522)];
                exOGoUM7KbS[i + (414 - 413)] = Wb6JQ5;
            }
        }
        IkwUcd = IkwUcd +(696 - 695);
    }
    for (i = (756 - 756); i < m; i = i + (986 - 985)) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", Ik2Iz7duAn3[i], q8LwpsQ[i], zs[i], yfnPzcYlAgaw[i], wLyDuAQcn[i], exOGoUM7KbS[i], vRA15vgH[i]);
    }
    return (239 - 239);
}

