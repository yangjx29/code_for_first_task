void  main () {
    char G3HuRW2xX [20] = {(710 - 710)}, SE63H27m5a [(843 - 840)] = {(776 - 776)}, PhJ685IzcQ [10] = {0};
    int tI46kj, ramAxyI1z, HYCqP6esby, jx7eqikU90E, t5lFyeOH, QsgBY5v, fpDoQE, hsVbf3v8Y;
    for (fpDoQE = 0; 10000 > fpDoQE; fpDoQE = fpDoQE + (573 - 572)) {
        scanf ("%s %s", &G3HuRW2xX, &SE63H27m5a);
        t5lFyeOH = strlen (G3HuRW2xX);
        QsgBY5v = strlen (SE63H27m5a);
        strcpy (PhJ685IzcQ, G3HuRW2xX);
        for (ramAxyI1z = 0, hsVbf3v8Y = G3HuRW2xX[0]; ramAxyI1z < t5lFyeOH; ramAxyI1z = ramAxyI1z + 1)
            if (G3HuRW2xX[ramAxyI1z] > hsVbf3v8Y) {
                hsVbf3v8Y = G3HuRW2xX[ramAxyI1z];
                tI46kj = ramAxyI1z;
            }
            else
                hsVbf3v8Y = hsVbf3v8Y;
        for (HYCqP6esby = tI46kj + 1, jx7eqikU90E = 0; ramAxyI1z + QsgBY5v >= HYCqP6esby, QsgBY5v > jx7eqikU90E; HYCqP6esby = HYCqP6esby +1, jx7eqikU90E++)
            G3HuRW2xX[HYCqP6esby] = SE63H27m5a[jx7eqikU90E];
        for (HYCqP6esby = tI46kj + QsgBY5v +1, jx7eqikU90E = tI46kj + 1; HYCqP6esby < t5lFyeOH + QsgBY5v, t5lFyeOH > jx7eqikU90E; HYCqP6esby = HYCqP6esby +1, jx7eqikU90E++)
            G3HuRW2xX[HYCqP6esby] = PhJ685IzcQ[jx7eqikU90E];
        printf ("%s\n", G3HuRW2xX);
        for (ramAxyI1z = 0; ramAxyI1z < t5lFyeOH + QsgBY5v; ramAxyI1z = ramAxyI1z + 1)
            G3HuRW2xX[ramAxyI1z] = 0;
        for (ramAxyI1z = 0; ramAxyI1z < QsgBY5v; ramAxyI1z = ramAxyI1z + 1)
            SE63H27m5a[ramAxyI1z] = 0;
    }
}

