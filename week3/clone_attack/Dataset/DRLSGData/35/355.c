int main () {
    int lpSUmPFl, n, cWZuIf, i34L6ZxGXT5, rOXerqn;
    int vbY7rteR [(950 - 942)] [(515 - 507)], jwOU1fHZn3 [(782 - 774)], AiH4knWFoD9T [(329 - 321)], TPzIUh [(434 - 426)] = {(801 - 801)}, YgtKTd [(839 - 831)] = {(588 - 588)};
    scanf ("%d,%d", &lpSUmPFl, &n);
    for (cWZuIf = (671 - 671); lpSUmPFl > cWZuIf; cWZuIf = cWZuIf + (952 - 951)) {
        i34L6ZxGXT5 = (803 - 388) - (619 - 204);
        while (n > i34L6ZxGXT5) {
            scanf ("%d", &vbY7rteR[cWZuIf][i34L6ZxGXT5]);
            i34L6ZxGXT5++;
        }
    }
    for (cWZuIf = (455 - 455); lpSUmPFl > cWZuIf; cWZuIf++) {
        for (i34L6ZxGXT5 = (751 - 751); n > i34L6ZxGXT5; i34L6ZxGXT5 = i34L6ZxGXT5 + (427 - 426)) {
            jwOU1fHZn3[cWZuIf] = vbY7rteR[cWZuIf][(868 - 868)];
            if (jwOU1fHZn3[cWZuIf] < vbY7rteR[cWZuIf][i34L6ZxGXT5]) {
                jwOU1fHZn3[cWZuIf] = vbY7rteR[cWZuIf][i34L6ZxGXT5];
                TPzIUh[cWZuIf] = i34L6ZxGXT5;
            }
        }
    }
    for (i34L6ZxGXT5 = (302 - 302); i34L6ZxGXT5 < n; i34L6ZxGXT5++) {
        for (cWZuIf = (845 - 845); cWZuIf < lpSUmPFl; cWZuIf++) {
            AiH4knWFoD9T[i34L6ZxGXT5] = vbY7rteR[(672 - 672)][i34L6ZxGXT5];
            if (vbY7rteR[cWZuIf][i34L6ZxGXT5] < AiH4knWFoD9T[i34L6ZxGXT5]) {
                AiH4knWFoD9T[i34L6ZxGXT5] = vbY7rteR[cWZuIf][i34L6ZxGXT5];
                YgtKTd[i34L6ZxGXT5] = cWZuIf;
            }
        }
    }
    {
        cWZuIf = (1340 - 522) - (1602 - 784);
        rOXerqn = (221 - 221);
        for (; cWZuIf < lpSUmPFl;) {
            for (i34L6ZxGXT5 = (984 - 984); i34L6ZxGXT5 < n; i34L6ZxGXT5++) {
                if (jwOU1fHZn3[cWZuIf] = AiH4knWFoD9T[i34L6ZxGXT5] && !(cWZuIf != YgtKTd[i34L6ZxGXT5]) && TPzIUh[cWZuIf] == i34L6ZxGXT5) {
                    printf ("%d+%d", cWZuIf, i34L6ZxGXT5);
                    rOXerqn = (282 - 281);
                    break;
                }
            }
            cWZuIf++;
        }
    }
    if (rOXerqn == (993 - 993))
        ;
    return (688 - 688);
}

