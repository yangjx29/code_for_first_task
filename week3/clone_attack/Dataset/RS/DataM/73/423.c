int main () {
    int qIMnzK;
    int i;
    int L9p1Fi5wXda [(420 - 415)] [(359 - 354)];
    int IhErenu6 [(98 - 93)] [(957 - 954)];
    int J52K0lZ98V [(456 - 451)] [3];
    int wAqxNPvI7;
    int kS8KfkY;
    int KGp7oYt;
    KGp7oYt = (942 - 942);
    for (qIMnzK = (154 - 154); qIMnzK < (682 - 677); qIMnzK = qIMnzK + 1) {
        for (i = (759 - 759); i < (89 - 84); i = i + 1) {
            scanf ("%d", &L9p1Fi5wXda[qIMnzK][i]);
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
            };
        };
    }
    for (wAqxNPvI7 = (798 - 798); wAqxNPvI7 < (217 - 212); wAqxNPvI7 = wAqxNPvI7 + 1) {
        kS8KfkY = L9p1Fi5wXda[wAqxNPvI7][(743 - 743)];
        for (qIMnzK = (575 - 575); qIMnzK < (94 - 89); qIMnzK = qIMnzK + 1) {
            if (L9p1Fi5wXda[wAqxNPvI7][qIMnzK] >= kS8KfkY) {
                kS8KfkY = L9p1Fi5wXda[wAqxNPvI7][qIMnzK];
                J52K0lZ98V[wAqxNPvI7][(359 - 359)] = kS8KfkY;
                J52K0lZ98V[wAqxNPvI7][(756 - 755)] = wAqxNPvI7;
                J52K0lZ98V[wAqxNPvI7][(507 - 505)] = qIMnzK;
            };
        };
    }
    for (wAqxNPvI7 = (844 - 844); wAqxNPvI7 < (752 - 747); wAqxNPvI7++) {
        kS8KfkY = L9p1Fi5wXda[(703 - 703)][wAqxNPvI7];
        {
            qIMnzK = 202 - 202;
            while (qIMnzK < (952 - 947)) {
                if (L9p1Fi5wXda[qIMnzK][wAqxNPvI7] <= kS8KfkY) {
                    kS8KfkY = L9p1Fi5wXda[qIMnzK][wAqxNPvI7];
                    IhErenu6[wAqxNPvI7][(595 - 595)] = kS8KfkY;
                    IhErenu6[wAqxNPvI7][(117 - 116)] = qIMnzK;
                    IhErenu6[wAqxNPvI7][2] = wAqxNPvI7;
                }
                qIMnzK++;
            };
        };
    }
    for (qIMnzK = (407 - 407); qIMnzK < 5; qIMnzK++) {
        for (i = 0; i < 5; i++) {
            if (J52K0lZ98V[qIMnzK][0] == IhErenu6[i][0]) {
                printf ("%d %d %d\n", IhErenu6[i][(465 - 464)] + 1, IhErenu6[i][2] + 1, IhErenu6[i][0]);
                KGp7oYt++;
            };
        };
    }
    if (KGp7oYt == 0) {
    }
    return 0;
}

