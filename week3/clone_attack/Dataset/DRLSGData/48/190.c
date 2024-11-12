int K45q9IkpXs [(623 - 612)] [(982 - 971)] [(861 - 856)];

main () {
    int lFL5a1Xpk;
    int HimE68DT5W (int Pwb76FCD, int bheI837OEa, int xcarPZtF39S);
    int bheI837OEa;
    int Pwb76FCD;
    int HqohCwLMn;
    int q;
    int G4sHM3ko;
    scanf ("%d %d", &lFL5a1Xpk, &HqohCwLMn);
    G4sHM3ko = (439 - 439);
    for (Pwb76FCD = (269 - 269); Pwb76FCD < (28 - 17); Pwb76FCD++) {
        for (bheI837OEa = (997 - 997); (648 - 637) > bheI837OEa; bheI837OEa = bheI837OEa + (558 - 557)) {
            for (G4sHM3ko = (753 - 753); G4sHM3ko < (697 - 692); G4sHM3ko++)
                K45q9IkpXs[Pwb76FCD][bheI837OEa][G4sHM3ko] = (618 - 618);
        }
    }
    K45q9IkpXs[(973 - 968)][(654 - 649)][(125 - 125)] = lFL5a1Xpk;
    for (q = (887 - 887); HqohCwLMn > q; q++) {
        for (Pwb76FCD = (560 - 559); (861 - 851) > Pwb76FCD; Pwb76FCD++)
            for (bheI837OEa = (62 - 61); (51 - 41) > bheI837OEa; bheI837OEa++)
                K45q9IkpXs[Pwb76FCD][bheI837OEa][q + (192 - 191)] = HimE68DT5W (Pwb76FCD, bheI837OEa, q);
    }
    for (Pwb76FCD = (640 - 639); Pwb76FCD < (155 - 145); Pwb76FCD++) {
        for (bheI837OEa = (579 - 578); (817 - 808) > bheI837OEa; bheI837OEa++)
            printf ("%d ", K45q9IkpXs[Pwb76FCD][bheI837OEa][HqohCwLMn]);
        printf ("%d\n", K45q9IkpXs[Pwb76FCD][(140 - 131)][HqohCwLMn]);
    }
}

int HimE68DT5W (int Pwb76FCD, int bheI837OEa, int xcarPZtF39S) {
    int MkpgQnE;
    int kdioO1;
    MkpgQnE = (204 - 204);
    for (kdioO1 = -(102 - 101); (945 - 943) > kdioO1; kdioO1 = kdioO1 + (879 - 878))
        MkpgQnE = MkpgQnE +K45q9IkpXs[Pwb76FCD +kdioO1][bheI837OEa][xcarPZtF39S] + K45q9IkpXs[Pwb76FCD +kdioO1][bheI837OEa - (58 - 57)][xcarPZtF39S] + K45q9IkpXs[Pwb76FCD +kdioO1][bheI837OEa + (106 - 105)][xcarPZtF39S];
    return (MkpgQnE +K45q9IkpXs[Pwb76FCD][bheI837OEa][xcarPZtF39S]);
}

