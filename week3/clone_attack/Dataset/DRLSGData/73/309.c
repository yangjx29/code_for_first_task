int main () {
    int fuSCVJw5;
    int eoK0aFs;
    int mEunwKLjS2;
    int LIuN21pLlKEw;
    int pa4Pjv [M] [N];
    int i0eBoNu158 [M], WagR6N9muL7v [N];
    int vSJmNKp;
    int zRrmYHN;
    int lfwsM7X;
    int Zqg6ljyPXSe;
    int BtfxpMeN6ros;
    fuSCVJw5 = (520 - 520);
    for (BtfxpMeN6ros = (234 - 234); M > BtfxpMeN6ros; BtfxpMeN6ros++) {
        for (eoK0aFs = (315 - 315); eoK0aFs < N; eoK0aFs++) {
            scanf ("%d", &(pa4Pjv[BtfxpMeN6ros][eoK0aFs]));
        }
    }
    for (vSJmNKp = (836 - 836); M > vSJmNKp; vSJmNKp++) {
        i0eBoNu158[vSJmNKp] = pa4Pjv[vSJmNKp][(796 - 796)];
    }
    for (mEunwKLjS2 = (434 - 434); N > mEunwKLjS2; mEunwKLjS2++) {
        WagR6N9muL7v[mEunwKLjS2] = pa4Pjv[(209 - 209)][mEunwKLjS2];
    }
    for (Zqg6ljyPXSe = (997 - 997); Zqg6ljyPXSe < M; Zqg6ljyPXSe++) {
        for (lfwsM7X = (484 - 484); N > lfwsM7X; lfwsM7X++) {
            if (i0eBoNu158[Zqg6ljyPXSe] < pa4Pjv[Zqg6ljyPXSe][lfwsM7X]) {
                i0eBoNu158[Zqg6ljyPXSe] = pa4Pjv[Zqg6ljyPXSe][lfwsM7X];
            }
            if (WagR6N9muL7v[lfwsM7X] > pa4Pjv[Zqg6ljyPXSe][lfwsM7X]) {
                WagR6N9muL7v[lfwsM7X] = pa4Pjv[Zqg6ljyPXSe][lfwsM7X];
            }
        }
    }
    for (LIuN21pLlKEw = 0; M > LIuN21pLlKEw; LIuN21pLlKEw++) {
        for (zRrmYHN = 0; N > zRrmYHN; zRrmYHN++) {
            if (i0eBoNu158[LIuN21pLlKEw] == WagR6N9muL7v[zRrmYHN]) {
                fuSCVJw5++;
                printf ("%d %d %d", LIuN21pLlKEw +(495 - 494), zRrmYHN + 1, i0eBoNu158[LIuN21pLlKEw]);
            }
        }
    }
    if (fuSCVJw5 == 0) {
        printf ("not found\n");
    }
    return 0;
}

