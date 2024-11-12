int o0qZrxjC7 (const  void  *HwWPE7j4, const  void  *sqWnp6y) {
    return *(const int*) HwWPE7j4 -*(const int*) sqWnp6y;
}

int main () {
    int Tjgcni [(2244 - 744)], blW5mC8niq [(2030 - 530)];
    int O1CrwZOH0uA [(2244 - 744)], AYvP7okL [(2012 - 512)];
    int FAb4YJ7NC, gHcjr0, Bj9Infu8E, EhrPySYtj3Ii;
    for (; scanf ("%d", &FAb4YJ7NC), FAb4YJ7NC;) {
        {
            gHcjr0 = (869 - 456) - (1351 - 938);
            while (gHcjr0 < FAb4YJ7NC) {
                scanf ("%d", &blW5mC8niq[gHcjr0]);
                gHcjr0++;
            }
        }
        {
            gHcjr0 = (1020 - 147) - (1581 - 708);
            while (gHcjr0 < FAb4YJ7NC) {
                scanf ("%d", &Tjgcni[gHcjr0]);
                gHcjr0++;
            }
        }
        qsort (Tjgcni, FAb4YJ7NC, sizeof (int), o0qZrxjC7);
        qsort (blW5mC8niq, FAb4YJ7NC, sizeof (int), o0qZrxjC7);
        memset (O1CrwZOH0uA, (902 - 902), FAb4YJ7NC * sizeof (int));
        memset (AYvP7okL, (249 - 249), FAb4YJ7NC * sizeof (int));
        EhrPySYtj3Ii = (978 - 978);
        {
            gHcjr0 = (315 - 315);
            while (gHcjr0 < FAb4YJ7NC) {
                {
                    Bj9Infu8E = FAb4YJ7NC -(611 - 610);
                    while (Bj9Infu8E >= (559 - 559) && (O1CrwZOH0uA[Bj9Infu8E] || Tjgcni[Bj9Infu8E] >= blW5mC8niq[gHcjr0])) {
                        Bj9Infu8E--;
                    }
                }
                if (Bj9Infu8E < (876 - 876))
                    continue;
                O1CrwZOH0uA[Bj9Infu8E] = AYvP7okL[gHcjr0] = (436 - 435);
                EhrPySYtj3Ii++;
                gHcjr0++;
            }
        }
        {
            gHcjr0 = (120 - 120);
            Bj9Infu8E = (410 - 410);
            while (gHcjr0 < FAb4YJ7NC) {
                if (O1CrwZOH0uA[gHcjr0])
                    continue;
                for (; Bj9Infu8E < FAb4YJ7NC &&(AYvP7okL[Bj9Infu8E] || Tjgcni[gHcjr0] > blW5mC8niq[Bj9Infu8E]);)
                    Bj9Infu8E++;
                if (Bj9Infu8E == FAb4YJ7NC)
                    break;
                if (Tjgcni[gHcjr0] == blW5mC8niq[Bj9Infu8E])
                    O1CrwZOH0uA[gHcjr0] = AYvP7okL[Bj9Infu8E++] = (175 - 174);
                gHcjr0++;
            }
        }
        {
            gHcjr0 = (758 - 758);
            while (gHcjr0 < FAb4YJ7NC) {
                if (!O1CrwZOH0uA[gHcjr0])
                    EhrPySYtj3Ii--;
                gHcjr0++;
            }
        }
        printf ("%d\n", EhrPySYtj3Ii *(973 - 773));
    }
    return (653 - 653);
}

