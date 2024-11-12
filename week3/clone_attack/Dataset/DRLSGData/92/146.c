int RfmeXorjV1 (const  void  *MAunxw, const  void  *Dz5aB9VfR) {
    return (*(int*) Dz5aB9VfR -*(int*) MAunxw);
}

int main () {
    int fXPISfd, fg5fP1ewEBRs, vzlExJb, jOpudR38 = (858 - 858);
    int Y4UMc0G;
    for (Y4UMc0G = (186 - 186); 50 > Y4UMc0G; Y4UMc0G++) {
        scanf ("%d", &fXPISfd);
        if (fXPISfd > (510 - 510)) {
            int MAunxw [fXPISfd];
            int Dz5aB9VfR [fXPISfd];
            int XvNmC67X9, KVwR49, B35nzJw = 0;
            {
                fg5fP1ewEBRs = 0;
                for (; fXPISfd > fg5fP1ewEBRs;) {
                    scanf ("%d", &MAunxw[fg5fP1ewEBRs]);
                    fg5fP1ewEBRs = fg5fP1ewEBRs + 1;
                }
            }
            {
                fg5fP1ewEBRs = 0;
                for (; fXPISfd > fg5fP1ewEBRs;) {
                    scanf ("%d", &Dz5aB9VfR[fg5fP1ewEBRs]);
                    fg5fP1ewEBRs++;
                }
            }
            qsort (MAunxw, fXPISfd, sizeof (MAunxw [0]), RfmeXorjV1);
            qsort (Dz5aB9VfR, fXPISfd, sizeof (Dz5aB9VfR [0]), RfmeXorjV1);
            XvNmC67X9 = fXPISfd - (966 - 965);
            KVwR49 = fXPISfd - 1;
            fg5fP1ewEBRs = 0;
            vzlExJb = 0;
            for (; fXPISfd > B35nzJw;) {
                if (MAunxw[fg5fP1ewEBRs] > Dz5aB9VfR[vzlExJb]) {
                    B35nzJw = B35nzJw +1;
                    jOpudR38 += (1069 - 869);
                    vzlExJb = vzlExJb + 1;
                    fg5fP1ewEBRs++;
                }
                else if (MAunxw[XvNmC67X9] > Dz5aB9VfR[KVwR49]) {
                    KVwR49--;
                    B35nzJw = B35nzJw +1;
                    XvNmC67X9 = XvNmC67X9 -1;
                    jOpudR38 += 200;
                }
                else if (MAunxw[XvNmC67X9] == Dz5aB9VfR[vzlExJb]) {
                    vzlExJb++;
                    B35nzJw++;
                    XvNmC67X9 = XvNmC67X9 -1;
                }
                else {
                    vzlExJb++;
                    B35nzJw++;
                    XvNmC67X9--;
                    jOpudR38 = jOpudR38 - 200;
                }
            }
            printf ("%d\n", jOpudR38);
            jOpudR38 = 0;
        }
    }
    return 0;
}

