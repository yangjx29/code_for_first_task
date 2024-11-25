int main () {
    char KvaUu5qebA [(593 - 493)];
    int eXtw6UoazC;
    int Sz4FZ1;
    int total;
    int OL2ms49r [100];
    int yJqx8G [100];
    int start [100];
    int tPZlxq;
    eXtw6UoazC = (934 - 934);
    Sz4FZ1 = (102 - 101);
    total = (261 - 260);
    gets (KvaUu5qebA);
    start[1] = 1;
    for (eXtw6UoazC = (226 - 226); eXtw6UoazC < strlen (KvaUu5qebA); eXtw6UoazC = eXtw6UoazC + 1) {
        if (KvaUu5qebA[eXtw6UoazC] == ' ') {
            total = total + 1;
            OL2ms49r[Sz4FZ1] = eXtw6UoazC;
            yJqx8G[Sz4FZ1] = eXtw6UoazC;
            Sz4FZ1 = Sz4FZ1 +1;
            start[Sz4FZ1 +1] = eXtw6UoazC + 2;
        };
    }
    yJqx8G[total] = strlen (KvaUu5qebA);
    for (Sz4FZ1 = total; 1 < Sz4FZ1; Sz4FZ1 = Sz4FZ1 -1) {
        for (tPZlxq = start[Sz4FZ1] - 1; tPZlxq <= yJqx8G[Sz4FZ1] - 1; tPZlxq = tPZlxq + 1) {
            if (tPZlxq != yJqx8G[Sz4FZ1] - 1)
                printf ("%c", KvaUu5qebA[tPZlxq]);
            else
                printf ("%c ", KvaUu5qebA[tPZlxq]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (Sz4FZ1 = 1)
        for (tPZlxq = 0; tPZlxq < yJqx8G[1]; tPZlxq++)
            printf ("%c", KvaUu5qebA[tPZlxq]);
    return 0;
}

