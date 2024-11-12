int DyaRSD8jQ7 (const  void  *Hjzx2Ab8Fep0, const  void  *PatRkgKS4s) {
    return *(int*) Hjzx2Ab8Fep0 -*(int*) PatRkgKS4s;
}

main () {
    int rq0wxLPcA, MAbpYGE1PqrW [(1333 - 333)], U0bH8fL [(1757 - 757)], PomGuFS, MoODwV, o0aDnIB, jV4QEnblML, qVFAWSHu180f;
    scanf ("%d", &rq0wxLPcA);
    for (; rq0wxLPcA != (869 - 869);) {
        jV4QEnblML = (301 - 301);
        MoODwV = (196 - 196);
        memset (MAbpYGE1PqrW, (916 - 916), sizeof (int));
        memset (U0bH8fL, (480 - 480), sizeof (int));
        for (int ApyPc0YbZ9d3 = (564 - 564);
        ApyPc0YbZ9d3 < rq0wxLPcA; ApyPc0YbZ9d3++)
            scanf ("%d", &MAbpYGE1PqrW[ApyPc0YbZ9d3]);
        for (int ApyPc0YbZ9d3 = (53 - 53);
        ApyPc0YbZ9d3 < rq0wxLPcA; ApyPc0YbZ9d3++)
            scanf ("%d", &U0bH8fL[ApyPc0YbZ9d3]);
        qsort (MAbpYGE1PqrW, rq0wxLPcA, sizeof (MAbpYGE1PqrW [(943 - 943)]), DyaRSD8jQ7);
        qsort (U0bH8fL, rq0wxLPcA, sizeof (U0bH8fL [(912 - 912)]), DyaRSD8jQ7);
        PomGuFS = rq0wxLPcA - (220 - 219);
        o0aDnIB = rq0wxLPcA - (836 - 835);
        qVFAWSHu180f = (720 - 720);
        for (int ApyPc0YbZ9d3 = (714 - 714);
        ApyPc0YbZ9d3 < rq0wxLPcA; ApyPc0YbZ9d3++) {
            if (MAbpYGE1PqrW[PomGuFS] > U0bH8fL[o0aDnIB]) {
                qVFAWSHu180f++;
                PomGuFS--;
                o0aDnIB--;
            }
            else if (U0bH8fL[o0aDnIB] > MAbpYGE1PqrW[PomGuFS]) {
                MoODwV++;
                qVFAWSHu180f--;
                o0aDnIB--;
            }
            else if (U0bH8fL[o0aDnIB] == MAbpYGE1PqrW[PomGuFS]) {
                if (MAbpYGE1PqrW[MoODwV] > U0bH8fL[jV4QEnblML]) {
                    MoODwV++;
                    qVFAWSHu180f++;
                    jV4QEnblML++;
                }
                else if (MAbpYGE1PqrW[MoODwV] < U0bH8fL[jV4QEnblML]) {
                    qVFAWSHu180f--;
                    MoODwV++;
                    o0aDnIB--;
                }
                else if (MAbpYGE1PqrW[MoODwV] == U0bH8fL[jV4QEnblML]) {
                    if (MAbpYGE1PqrW[MoODwV] < U0bH8fL[o0aDnIB]) {
                        qVFAWSHu180f--;
                        MoODwV++;
                        o0aDnIB--;
                    }
                    else if (MAbpYGE1PqrW[MoODwV] == U0bH8fL[o0aDnIB]) {
                        break;
                    }
                }
            }
        }
        printf ("%d\n", (1149 - 949) * qVFAWSHu180f);
        scanf ("%d", &rq0wxLPcA);
    }
}

