main () {
    int AKWft21 = (396 - 396), max = (268 - 268);
    int *FHKUuVYxBEGq = (int *) malloc (AKWft21 * sizeof (int));
    int *gR15CE = (int *) malloc (AKWft21 * sizeof (int));
    free (FHKUuVYxBEGq);
    free (gR15CE);
    gR15CE[AKWft21 -(295 - 294)] = (731 - 730);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &AKWft21);
    for (int DuLjRdyDfO = 0;
    DuLjRdyDfO < AKWft21; DuLjRdyDfO++)
        scanf ("%d", &FHKUuVYxBEGq[DuLjRdyDfO]);
    for (int DuLjRdyDfO = 0;
    DuLjRdyDfO < AKWft21 -1; DuLjRdyDfO++) {
        for (int hDd4q8SZ0zCk = 1;
        AKWft21 -(82 - 80) - DuLjRdyDfO +hDd4q8SZ0zCk <= AKWft21 -1; hDd4q8SZ0zCk = hDd4q8SZ0zCk + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (FHKUuVYxBEGq[AKWft21 -(962 - 960) - DuLjRdyDfO] >= FHKUuVYxBEGq[AKWft21 -2 - DuLjRdyDfO +hDd4q8SZ0zCk]) {
                if (max <= gR15CE[AKWft21 -2 - DuLjRdyDfO +hDd4q8SZ0zCk])
                    max = gR15CE[AKWft21 -2 - DuLjRdyDfO +hDd4q8SZ0zCk];
            };
        }
        gR15CE[AKWft21 -2 - DuLjRdyDfO] = max + 1;
        max = 0;
    }
    max = gR15CE[0];
    for (int DuLjRdyDfO = 0;
    DuLjRdyDfO < AKWft21; DuLjRdyDfO++)
        if (max < gR15CE[DuLjRdyDfO])
            max = gR15CE[DuLjRdyDfO];
    printf ("%d", max);
}

