struct   student {
    char eupSJqxXaw [20];
    int po5978kN;
    int Nrsy0BxIG1N;
    char XH7PUZE;
    char My9cZ1xnt;
    int tVY6LBR;
    int ipx5C1NzEOre;
}
WOidLjt [100];

int main () {
    int yhDoQU9, lPcmRIq, nu4PlhBFS9 = (648 - 648), erfXUmQ, M96J4BIt = (311 - 311);
    scanf ("%d", &yhDoQU9);
    for (lPcmRIq = (594 - 594); yhDoQU9 > lPcmRIq; lPcmRIq = lPcmRIq + 1) {
        scanf ("%s %d %d %c %c %d", WOidLjt[lPcmRIq].eupSJqxXaw, &WOidLjt[lPcmRIq].po5978kN, &WOidLjt[lPcmRIq].Nrsy0BxIG1N, &WOidLjt[lPcmRIq].XH7PUZE, &WOidLjt[lPcmRIq].My9cZ1xnt, &WOidLjt[lPcmRIq].tVY6LBR);
    }
    for (lPcmRIq = 0; lPcmRIq < yhDoQU9; lPcmRIq++) {
        WOidLjt[lPcmRIq].ipx5C1NzEOre = 0;
        if (WOidLjt[lPcmRIq].po5978kN > (336 - 256) && 0 < WOidLjt[lPcmRIq].tVY6LBR)
            WOidLjt[lPcmRIq].ipx5C1NzEOre = WOidLjt[lPcmRIq].ipx5C1NzEOre + 8000;
        if ((592 - 507) < WOidLjt[lPcmRIq].po5978kN && WOidLjt[lPcmRIq].Nrsy0BxIG1N > (939 - 859))
            WOidLjt[lPcmRIq].ipx5C1NzEOre = WOidLjt[lPcmRIq].ipx5C1NzEOre + (4811 - 811);
        if (WOidLjt[lPcmRIq].po5978kN > 90)
            WOidLjt[lPcmRIq].ipx5C1NzEOre = WOidLjt[lPcmRIq].ipx5C1NzEOre + 2000;
        if (WOidLjt[lPcmRIq].po5978kN > 85 && WOidLjt[lPcmRIq].My9cZ1xnt == 89)
            WOidLjt[lPcmRIq].ipx5C1NzEOre = WOidLjt[lPcmRIq].ipx5C1NzEOre + (1807 - 807);
        if (WOidLjt[lPcmRIq].Nrsy0BxIG1N > 80 && WOidLjt[lPcmRIq].XH7PUZE == 89)
            WOidLjt[lPcmRIq].ipx5C1NzEOre = WOidLjt[lPcmRIq].ipx5C1NzEOre + 850;
    }
    for (lPcmRIq = 0; lPcmRIq < yhDoQU9; lPcmRIq++) {
        M96J4BIt = M96J4BIt +WOidLjt[lPcmRIq].ipx5C1NzEOre;
    }
    for (lPcmRIq = 0; lPcmRIq < yhDoQU9; lPcmRIq++) {
        if (WOidLjt[lPcmRIq].ipx5C1NzEOre > nu4PlhBFS9) {
            erfXUmQ = lPcmRIq;
            nu4PlhBFS9 = WOidLjt[lPcmRIq].ipx5C1NzEOre;
        }
    }
    printf ("%s\n%d\n%d", WOidLjt[erfXUmQ].eupSJqxXaw, WOidLjt[erfXUmQ].ipx5C1NzEOre, M96J4BIt);
}

