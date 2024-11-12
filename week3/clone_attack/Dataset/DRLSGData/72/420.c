int main () {
    int NRAkvijIT, n, Iz9tRJq, ga42CXu;
    int pmq4jtzFvRa [25] [25] = {0};
    scanf ("%d %d", &NRAkvijIT, &n);
    for (Iz9tRJq = 1; NRAkvijIT >= Iz9tRJq; Iz9tRJq = Iz9tRJq +1) {
        ga42CXu = 1;
        for (; ga42CXu <= n + 1;) {
            if (ga42CXu != n + 1)
                scanf ("%d", &pmq4jtzFvRa[Iz9tRJq][ga42CXu]);
            ga42CXu = ga42CXu + 1;
        }
    }
    {
        Iz9tRJq = 1;
        for (; Iz9tRJq <= NRAkvijIT;) {
            ga42CXu = 1;
            for (; n >= ga42CXu;) {
                if (pmq4jtzFvRa[Iz9tRJq -1][ga42CXu] <= pmq4jtzFvRa[Iz9tRJq][ga42CXu] && pmq4jtzFvRa[Iz9tRJq][ga42CXu] >= pmq4jtzFvRa[Iz9tRJq +1][ga42CXu] && pmq4jtzFvRa[Iz9tRJq][ga42CXu] >= pmq4jtzFvRa[Iz9tRJq][ga42CXu - 1] && pmq4jtzFvRa[Iz9tRJq][ga42CXu] >= pmq4jtzFvRa[Iz9tRJq][ga42CXu + 1] && pmq4jtzFvRa[Iz9tRJq][ga42CXu] != 0)
                    printf ("%d %d\n", Iz9tRJq -1, ga42CXu - 1);
                ga42CXu = ga42CXu + 1;
            }
            Iz9tRJq = Iz9tRJq +1;
        }
    }
    return 0;
}

