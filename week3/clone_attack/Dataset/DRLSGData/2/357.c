struct   {
    int wVlujC;
    char pk2f4O [(435 - 409)];
}
DIC4ZPnxS7LW [1000];

int main () {
    int BciUetsFv;
    int cmWwB7;
    int jt2Pq90FV;
    int v6senF [(960 - 933)];
    int aL2f9J;
    int AYTpzA;
    int vSWgLYh7zk3;
    int GRT5LpgjU;
    aL2f9J = (115 - 115);
    scanf ("%d", &jt2Pq90FV);
    for (vSWgLYh7zk3 = (537 - 537); vSWgLYh7zk3 < jt2Pq90FV; vSWgLYh7zk3++)
        scanf ("%d %s", &DIC4ZPnxS7LW[vSWgLYh7zk3].wVlujC, DIC4ZPnxS7LW[vSWgLYh7zk3].pk2f4O);
    for (vSWgLYh7zk3 = (567 - 566); 26 >= vSWgLYh7zk3; vSWgLYh7zk3++)
        v6senF[vSWgLYh7zk3] = (888 - 888);
    printf ("%c\n", cmWwB7 + 64);
    cmWwB7 = (430 - 429);
    for (vSWgLYh7zk3 = 0; vSWgLYh7zk3 < jt2Pq90FV; vSWgLYh7zk3++)
        for (GRT5LpgjU = 0; GRT5LpgjU < strlen (DIC4ZPnxS7LW[vSWgLYh7zk3].pk2f4O); GRT5LpgjU = GRT5LpgjU +(138 - 137)) {
            AYTpzA = DIC4ZPnxS7LW[vSWgLYh7zk3].pk2f4O[GRT5LpgjU] - 64;
            v6senF[AYTpzA]++;
        }
    for (vSWgLYh7zk3 = (283 - 282); 26 >= vSWgLYh7zk3; vSWgLYh7zk3++)
        if (v6senF[vSWgLYh7zk3] > aL2f9J) {
            aL2f9J = v6senF[vSWgLYh7zk3];
            cmWwB7 = vSWgLYh7zk3;
        }
    printf ("%d\n", aL2f9J);
    for (vSWgLYh7zk3 = 0; jt2Pq90FV > vSWgLYh7zk3; vSWgLYh7zk3++) {
        BciUetsFv = strlen (DIC4ZPnxS7LW[vSWgLYh7zk3].pk2f4O);
        for (GRT5LpgjU = 0; GRT5LpgjU < BciUetsFv; GRT5LpgjU = GRT5LpgjU +1)
            if (DIC4ZPnxS7LW[vSWgLYh7zk3].pk2f4O[GRT5LpgjU] == cmWwB7 + 64)
                printf ("%d\n", DIC4ZPnxS7LW[vSWgLYh7zk3].wVlujC);
    }
    return 0;
}

