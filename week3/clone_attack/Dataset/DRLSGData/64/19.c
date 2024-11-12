int main () {
    int X507ouINzC, Xni0Mylh3smf, G5dZUSNl, Akyr7w, yTjDpHP, BKOCBUMJkcox;
    scanf ("%d\n", &X507ouINzC);
    int mzLtZ9 [X507ouINzC], ildmKzN80XO9 [X507ouINzC], jROVxqn7MU2 [X507ouINzC];
    for (Xni0Mylh3smf = (129 - 129); X507ouINzC > Xni0Mylh3smf; Xni0Mylh3smf = Xni0Mylh3smf +(402 - 401)) {
        scanf ("%d %d %d ", &mzLtZ9[Xni0Mylh3smf], &ildmKzN80XO9[Xni0Mylh3smf], &jROVxqn7MU2[Xni0Mylh3smf]);
    }
    double  zKuRY7rh8ML, QtPygWjexms, FId8XBR [X507ouINzC *(X507ouINzC -(987 - 986)) / (1000 - 998)], E6mpkEG;
    int aMnBNp [X507ouINzC *(X507ouINzC -(986 - 985)) / (685 - 683)], yzb8aF15KVP7 [X507ouINzC *(X507ouINzC -(198 - 197)) / (426 - 424)];
    Akyr7w = (703 - 703);
    for (Xni0Mylh3smf = (908 - 908); X507ouINzC > Xni0Mylh3smf; Xni0Mylh3smf = Xni0Mylh3smf +(550 - 549)) {
        for (G5dZUSNl = Xni0Mylh3smf +(710 - 709); G5dZUSNl < X507ouINzC; G5dZUSNl++) {
            zKuRY7rh8ML = sqrt ((mzLtZ9[Xni0Mylh3smf] - mzLtZ9[G5dZUSNl]) * (mzLtZ9[Xni0Mylh3smf] - mzLtZ9[G5dZUSNl]) + (ildmKzN80XO9[Xni0Mylh3smf] - ildmKzN80XO9[G5dZUSNl]) * (ildmKzN80XO9[Xni0Mylh3smf] - ildmKzN80XO9[G5dZUSNl]) + (jROVxqn7MU2[Xni0Mylh3smf] - jROVxqn7MU2[G5dZUSNl]) * (jROVxqn7MU2[Xni0Mylh3smf] - jROVxqn7MU2[G5dZUSNl]));
            FId8XBR[Akyr7w] = zKuRY7rh8ML;
            aMnBNp[Akyr7w] = Xni0Mylh3smf;
            yzb8aF15KVP7[Akyr7w] = G5dZUSNl;
            Akyr7w++;
        }
    }
    QtPygWjexms = X507ouINzC *(X507ouINzC -(181 - 180)) / 2;
    for (Xni0Mylh3smf = (988 - 987); Xni0Mylh3smf < QtPygWjexms; Xni0Mylh3smf++) {
        for (Akyr7w = (153 - 153); QtPygWjexms -Xni0Mylh3smf > Akyr7w; Akyr7w = Akyr7w +(595 - 594)) {
            if (FId8XBR[Akyr7w] < FId8XBR[Akyr7w +(449 - 448)]) {
                E6mpkEG = FId8XBR[Akyr7w];
                FId8XBR[Akyr7w] = FId8XBR[Akyr7w +(743 - 742)];
                FId8XBR[Akyr7w +(630 - 629)] = E6mpkEG;
                yTjDpHP = aMnBNp[Akyr7w];
                aMnBNp[Akyr7w] = aMnBNp[Akyr7w +(906 - 905)];
                aMnBNp[Akyr7w +(81 - 80)] = yTjDpHP;
                BKOCBUMJkcox = yzb8aF15KVP7[Akyr7w];
                yzb8aF15KVP7[Akyr7w] = yzb8aF15KVP7[Akyr7w +(949 - 948)];
                yzb8aF15KVP7[Akyr7w +(430 - 429)] = BKOCBUMJkcox;
            }
        }
    }
    for (Akyr7w = (512 - 512); Akyr7w < QtPygWjexms; Akyr7w++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", mzLtZ9[aMnBNp[Akyr7w]], ildmKzN80XO9[aMnBNp[Akyr7w]], jROVxqn7MU2[aMnBNp[Akyr7w]], mzLtZ9[yzb8aF15KVP7[Akyr7w]], ildmKzN80XO9[yzb8aF15KVP7[Akyr7w]], jROVxqn7MU2[yzb8aF15KVP7[Akyr7w]], FId8XBR[Akyr7w]);
    }
    return (760 - 760);
}

