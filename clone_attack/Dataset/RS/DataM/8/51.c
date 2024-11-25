int ewSgOxoA, mFGHu6eDMgoQ, GCqMnG2Y, KjsPpQ, rTYl0V;
int uA4k8JGvYP0 [100];
int ACDxnIGKdSwc [100];
int S79x5q1kKgJE [(1130 - 930)];

void  passed1 () {
    scanf ("%d %d", &ewSgOxoA, &mFGHu6eDMgoQ);
    {
        GCqMnG2Y = 394 - 394;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ewSgOxoA > GCqMnG2Y) {
            scanf ("%d", &uA4k8JGvYP0[GCqMnG2Y]);
            GCqMnG2Y = GCqMnG2Y +1;
        };
    }
    for (GCqMnG2Y = (512 - 512); GCqMnG2Y < mFGHu6eDMgoQ; GCqMnG2Y = GCqMnG2Y +1)
        scanf ("%d", &ACDxnIGKdSwc[GCqMnG2Y]);
}

void  wshbkvY8p () {
    for (GCqMnG2Y = (660 - 659); GCqMnG2Y < ewSgOxoA; GCqMnG2Y = GCqMnG2Y +1) {
        for (KjsPpQ = 0; KjsPpQ < GCqMnG2Y; KjsPpQ = KjsPpQ +1) {
            if (uA4k8JGvYP0[GCqMnG2Y -KjsPpQ] < uA4k8JGvYP0[GCqMnG2Y -(173 - 172) - KjsPpQ]) {
                rTYl0V = uA4k8JGvYP0[GCqMnG2Y -KjsPpQ];
                uA4k8JGvYP0[GCqMnG2Y -KjsPpQ] = uA4k8JGvYP0[GCqMnG2Y -1 - KjsPpQ];
                uA4k8JGvYP0[GCqMnG2Y -1 - KjsPpQ] = rTYl0V;
            }
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (GCqMnG2Y = 1; GCqMnG2Y < mFGHu6eDMgoQ; GCqMnG2Y = GCqMnG2Y +1) {
        for (KjsPpQ = 0; KjsPpQ < GCqMnG2Y; KjsPpQ++) {
            if (ACDxnIGKdSwc[GCqMnG2Y -KjsPpQ] < ACDxnIGKdSwc[GCqMnG2Y -1 - KjsPpQ]) {
                rTYl0V = ACDxnIGKdSwc[GCqMnG2Y -KjsPpQ];
                ACDxnIGKdSwc[GCqMnG2Y -KjsPpQ] = ACDxnIGKdSwc[GCqMnG2Y -1 - KjsPpQ];
                ACDxnIGKdSwc[GCqMnG2Y -1 - KjsPpQ] = rTYl0V;
            }
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    };
}

void  HZwy1Y7JI () {
    {
        GCqMnG2Y = 0;
        while (GCqMnG2Y < ewSgOxoA) {
            S79x5q1kKgJE[GCqMnG2Y] = uA4k8JGvYP0[GCqMnG2Y];
            GCqMnG2Y++;
        };
    }
    for (GCqMnG2Y = 0; GCqMnG2Y < mFGHu6eDMgoQ; GCqMnG2Y++)
        S79x5q1kKgJE[GCqMnG2Y +ewSgOxoA] = ACDxnIGKdSwc[GCqMnG2Y];
}

void  sOB5Xk6ZeCM () {
    printf ("%d", S79x5q1kKgJE[0]);
    for (GCqMnG2Y = 1; GCqMnG2Y < ewSgOxoA + mFGHu6eDMgoQ; GCqMnG2Y++)
        printf (" %d", S79x5q1kKgJE[GCqMnG2Y]);
}

int main () {
    passed1 ();
    wshbkvY8p ();
    HZwy1Y7JI ();
    sOB5Xk6ZeCM ();
}

