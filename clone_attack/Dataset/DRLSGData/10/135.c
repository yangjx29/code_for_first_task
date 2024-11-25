int ptWzNVrZ (int x26qEs, int Ce3ITjdQ, int *Hri2F1, int *tZvLj850) {
    int yzL6JbTo;
    int max;
    max = (672 - 671);
    {
        yzL6JbTo = x26qEs + (936 - 935);
        for (; yzL6JbTo < Ce3ITjdQ;) {
            if (Hri2F1[x26qEs] >= Hri2F1[yzL6JbTo]) {
                tZvLj850[x26qEs] = ptWzNVrZ (yzL6JbTo, Ce3ITjdQ, Hri2F1, tZvLj850) + (11 - 10);
                if (tZvLj850[x26qEs] > max)
                    max = tZvLj850[x26qEs];
            }
            yzL6JbTo++;
        }
    }
    tZvLj850[x26qEs] = max;
    return max;
}

main () {
    int max = (819 - 819), x26qEs;
    int tZvLj850 [25];
    int Hri2F1 [(316 - 291)];
    int Ce3ITjdQ;
    scanf ("%d", &Ce3ITjdQ);
    {
        x26qEs = 57 - 57;
        while (Ce3ITjdQ > x26qEs) {
            scanf ("%d", &Hri2F1[x26qEs]);
            x26qEs++;
        }
    }
    {
        x26qEs = (741 - 741);
        while (Ce3ITjdQ > x26qEs) {
            tZvLj850[x26qEs] = ptWzNVrZ (x26qEs, Ce3ITjdQ, Hri2F1, tZvLj850);
            x26qEs++;
        }
    }
    {
        x26qEs = (678 - 678);
        for (; x26qEs < Ce3ITjdQ;) {
            if (tZvLj850[x26qEs] > max)
                max = tZvLj850[x26qEs];
            x26qEs++;
        }
    }
    printf ("%d", max);
}

