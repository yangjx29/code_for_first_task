int hbOnkDgKJ (int t4O3MU, char *mXsDBAP, int JHPGJsipqnW) {
    int tnrWd8QVOfF;
    tnrWd8QVOfF = 0;
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
    do {
        mXsDBAP[tnrWd8QVOfF] = t4O3MU % JHPGJsipqnW;
        t4O3MU = t4O3MU / (JHPGJsipqnW);
        printf ("%d", mXsDBAP[tnrWd8QVOfF]);
        tnrWd8QVOfF = tnrWd8QVOfF + 1;
    }
    while (t4O3MU);
    mXsDBAP[tnrWd8QVOfF] = '\0';
    return tnrWd8QVOfF - 1;
}

int main () {
    char mXsDBAP [12];
    int tnrWd8QVOfF;
    int t4O3MU;
    int YpPIrN;
    tnrWd8QVOfF = 0;
    scanf ("%d", &t4O3MU);
    if (t4O3MU == 0) {
        YpPIrN = t4O3MU;
        printf ("%d", YpPIrN);
    }
    else {
        tnrWd8QVOfF = hbOnkDgKJ (t4O3MU, mXsDBAP, 10);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

