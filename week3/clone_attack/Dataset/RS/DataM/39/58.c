struct   student {
    char name [20];
    int ImwIUd;
    int VSH8vz;
    char JER9JS3KhAy;
    char b2;
    int PGJ2R1f;
    int Lx7HkFg;
}
N8d6nm7R [100];

void  main () {
    struct   student *EtyCwnH;
    int n, nhkmTgr, max = 0, brqbXZ = 0;
    scanf ("%d", &n);
    {
        EtyCwnH = N8d6nm7R;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N8d6nm7R +n > EtyCwnH) {
            scanf ("%s %d %d %c %c %d", EtyCwnH->name, &EtyCwnH->ImwIUd, &EtyCwnH->VSH8vz, &EtyCwnH->JER9JS3KhAy, &EtyCwnH->b2, &EtyCwnH->PGJ2R1f);
            EtyCwnH->Lx7HkFg = 0;
            if (EtyCwnH->ImwIUd > 80 && 1 <= EtyCwnH->PGJ2R1f)
                EtyCwnH->Lx7HkFg = EtyCwnH->Lx7HkFg + 8000;
            if (85 < EtyCwnH->ImwIUd && 80 < EtyCwnH->VSH8vz)
                EtyCwnH->Lx7HkFg = EtyCwnH->Lx7HkFg + 4000;
            if (90 < EtyCwnH->ImwIUd)
                EtyCwnH->Lx7HkFg = EtyCwnH->Lx7HkFg + 2000;
            if (EtyCwnH->ImwIUd > 85 && !('Y' != EtyCwnH->b2))
                EtyCwnH->Lx7HkFg = EtyCwnH->Lx7HkFg + 1000;
            if (EtyCwnH->VSH8vz > 80 && EtyCwnH->JER9JS3KhAy == 'Y')
                EtyCwnH->Lx7HkFg = EtyCwnH->Lx7HkFg + 850;
            EtyCwnH++;
        };
    }
    {
        EtyCwnH = N8d6nm7R;
        while (EtyCwnH < N8d6nm7R +n) {
            if (EtyCwnH->Lx7HkFg > max)
                max = EtyCwnH->Lx7HkFg;
            EtyCwnH++;
        };
    }
    for (EtyCwnH = N8d6nm7R; EtyCwnH < N8d6nm7R +n; EtyCwnH = EtyCwnH +1)
        if (EtyCwnH->Lx7HkFg == max) {
            printf ("%s\n%d\n", EtyCwnH->name, EtyCwnH->Lx7HkFg);
            break;
        }
    {
        EtyCwnH = N8d6nm7R;
        while (EtyCwnH < N8d6nm7R +n) {
            brqbXZ = brqbXZ + EtyCwnH->Lx7HkFg;
            EtyCwnH++;
        };
    }
    printf ("%d", brqbXZ);
}

