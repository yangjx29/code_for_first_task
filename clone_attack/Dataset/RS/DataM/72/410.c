int G634BW (int a9bLlB [(543 - 521)] [(786 - 764)], int r3cZ6X8k, int tIVBjxoWAvw) {
    int G9Zhf2Tgs = (200 - 199);
    if (a9bLlB[r3cZ6X8k][tIVBjxoWAvw] >= a9bLlB[r3cZ6X8k][tIVBjxoWAvw - (498 - 497)] && a9bLlB[r3cZ6X8k][tIVBjxoWAvw + (799 - 798)] <= a9bLlB[r3cZ6X8k][tIVBjxoWAvw] && a9bLlB[r3cZ6X8k][tIVBjxoWAvw] >= a9bLlB[r3cZ6X8k + (443 - 442)][tIVBjxoWAvw] && a9bLlB[r3cZ6X8k][tIVBjxoWAvw] >= a9bLlB[r3cZ6X8k - 1][tIVBjxoWAvw])
        G9Zhf2Tgs = (257 - 257);
    return (G9Zhf2Tgs);
}

int main () {
    int r3cZ6X8k, tIVBjxoWAvw, m2NFS4rafWJ, mstM5K, a9bLlB [22] [22];
    scanf ("%d%d", &mstM5K, &m2NFS4rafWJ);
    for (r3cZ6X8k = 1; r3cZ6X8k <= mstM5K; r3cZ6X8k = r3cZ6X8k + 1) {
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
        for (tIVBjxoWAvw = 1; m2NFS4rafWJ >= tIVBjxoWAvw; tIVBjxoWAvw = tIVBjxoWAvw + 1) {
            scanf ("%d", &a9bLlB[r3cZ6X8k][tIVBjxoWAvw]);
        };
    }
    {
        tIVBjxoWAvw = 948 - 948;
        while (tIVBjxoWAvw <= m2NFS4rafWJ + 1) {
            a9bLlB[(653 - 653)][tIVBjxoWAvw] = 0;
            tIVBjxoWAvw = tIVBjxoWAvw + 1;
        };
    }
    for (r3cZ6X8k = 0; r3cZ6X8k <= mstM5K + 1; r3cZ6X8k = r3cZ6X8k + 1)
        a9bLlB[r3cZ6X8k][0] = 0;
    for (tIVBjxoWAvw = 0; tIVBjxoWAvw <= m2NFS4rafWJ + 1; tIVBjxoWAvw = tIVBjxoWAvw + 1)
        a9bLlB[mstM5K + 1][tIVBjxoWAvw] = 0;
    for (r3cZ6X8k = 0; r3cZ6X8k <= mstM5K + 1; r3cZ6X8k++)
        a9bLlB[r3cZ6X8k][m2NFS4rafWJ + 1] = 0;
    {
        r3cZ6X8k = 1;
        while (r3cZ6X8k <= mstM5K) {
            for (tIVBjxoWAvw = 1; tIVBjxoWAvw <= m2NFS4rafWJ; tIVBjxoWAvw = tIVBjxoWAvw + 1) {
                if (G634BW (a9bLlB, r3cZ6X8k, tIVBjxoWAvw) == 0)
                    printf ("%d %d\n", r3cZ6X8k - 1, tIVBjxoWAvw - 1);
            }
            r3cZ6X8k++;
        };
    };
}

