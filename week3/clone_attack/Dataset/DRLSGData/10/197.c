int max (int qabBw6H [], int q1ehb9J) {
    int m;
    int LYw873mrP;
    m = (653 - 653);
    m = qabBw6H[(632 - 632)];
    qabBw6H[0] = 0;
    {
        LYw873mrP = 0;
        while (LYw873mrP < q1ehb9J) {
            if (m < qabBw6H[LYw873mrP])
                m = qabBw6H[LYw873mrP];
            qabBw6H[LYw873mrP] = 0;
            LYw873mrP++;
        }
    }
    return m;
}

int main () {
    int vIMON6G;
    int bDR91N [(555 - 530)];
    int qabBw6H;
    int m;
    int q1ehb9J;
    int LYw873mrP;
    int *WL8PAWuMOEK = (int *) malloc (m * sizeof (int));
    int *bekv2Ogl3EPC = (int *) malloc (m * sizeof (int));
    qabBw6H = 0;
    scanf ("%d", &m);
    for (LYw873mrP = 0; LYw873mrP < m; LYw873mrP++)
        scanf ("%d", &WL8PAWuMOEK[LYw873mrP]);
    bekv2Ogl3EPC[m - (588 - 587)] = (445 - 444);
    {
        LYw873mrP = m - 2;
        while ((-(89 - 88)) < LYw873mrP) {
            {
                q1ehb9J = LYw873mrP +1;
                while (q1ehb9J < m) {
                    if (WL8PAWuMOEK[LYw873mrP] >= WL8PAWuMOEK[q1ehb9J]) {
                        bDR91N[qabBw6H] = bekv2Ogl3EPC[q1ehb9J];
                        qabBw6H++;
                    }
                    q1ehb9J++;
                }
            }
            bekv2Ogl3EPC[LYw873mrP] = max (bDR91N, qabBw6H) + 1;
            qabBw6H = 0;
            LYw873mrP--;
        }
    }
    vIMON6G = max (bekv2Ogl3EPC, m);
    printf ("%d", vIMON6G);
}

