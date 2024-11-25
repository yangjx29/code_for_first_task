struct   student {
    int count;
    int yu;
    int oIU1xj;
}
dToKNpwbug [1000000];

void  main () {
    int K4q8nOJTgV;
    int ll7qopS;
    int tm;
    int mbE3tFq;
    int J5alRinw;
    int G4Nl5hBd;
    int *SEHnxzW0;
    K4q8nOJTgV = (531 - 531);
    ll7qopS = 0;
    tm = 0;
    mbE3tFq = 0;
    SEHnxzW0 = (int *) malloc (1000000 * sizeof (int));
    scanf ("%d", &J5alRinw);
    {
        G4Nl5hBd = 0;
        while (J5alRinw > G4Nl5hBd) {
            scanf ("%d %d %d", &dToKNpwbug[G4Nl5hBd].count, &dToKNpwbug[G4Nl5hBd].yu, &dToKNpwbug[G4Nl5hBd].oIU1xj);
            *(SEHnxzW0 +G4Nl5hBd) = dToKNpwbug[G4Nl5hBd].yu + dToKNpwbug[G4Nl5hBd].oIU1xj;
            G4Nl5hBd = G4Nl5hBd +1;
        };
    }
    {
        G4Nl5hBd = 0;
        while (J5alRinw > G4Nl5hBd) {
            K4q8nOJTgV = (K4q8nOJTgV > *(SEHnxzW0 +G4Nl5hBd)) ? K4q8nOJTgV : (*(SEHnxzW0 +G4Nl5hBd));
            G4Nl5hBd++;
        };
    }
    {
        G4Nl5hBd = 0;
        while (G4Nl5hBd < J5alRinw) {
            if ((*(SEHnxzW0 +G4Nl5hBd) < K4q8nOJTgV) && (ll7qopS < *(SEHnxzW0 +G4Nl5hBd)))
                ll7qopS = *(SEHnxzW0 +G4Nl5hBd);
            G4Nl5hBd++;
        };
    }
    for (G4Nl5hBd = 0; G4Nl5hBd < J5alRinw; G4Nl5hBd++) {
        if ((*(SEHnxzW0 +G4Nl5hBd) > tm) && (*(SEHnxzW0 +G4Nl5hBd) < ll7qopS))
            tm = *(SEHnxzW0 +G4Nl5hBd);
    }
    {
        G4Nl5hBd = 0;
        while ((739 - 736) > mbE3tFq, G4Nl5hBd < J5alRinw) {
            if (*(SEHnxzW0 +G4Nl5hBd) == K4q8nOJTgV) {
                printf ("%d %d\n", dToKNpwbug[G4Nl5hBd].count, K4q8nOJTgV);
                mbE3tFq++;
            }
            G4Nl5hBd++;
        };
    }
    {
        G4Nl5hBd = 0;
        while (3 > mbE3tFq, G4Nl5hBd < J5alRinw) {
            if (*(SEHnxzW0 +G4Nl5hBd) == ll7qopS && mbE3tFq < 3) {
                printf ("%d %d\n", dToKNpwbug[G4Nl5hBd].count, ll7qopS);
                mbE3tFq++;
            }
            G4Nl5hBd++;
        };
    }
    {
        G4Nl5hBd = 0;
        while (mbE3tFq < 3, G4Nl5hBd < J5alRinw) {
            if (*(SEHnxzW0 +G4Nl5hBd) == tm && mbE3tFq < 3) {
                printf ("%d %d\n", dToKNpwbug[G4Nl5hBd].count, tm);
                mbE3tFq++;
            }
            G4Nl5hBd++;
        };
    };
}

