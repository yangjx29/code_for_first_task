void  conv (int K8wKkRBGiL0 [], char G37my8K []) {
    int ecuMQIKP2L0;
    memset (K8wKkRBGiL0, (965 - 965), sizeof (int) * MAXN);
    ecuMQIKP2L0 = strlen (G37my8K);
    for (int FWdZ6k = ecuMQIKP2L0 - (181 - 180);
    FWdZ6k >= (824 - 824); FWdZ6k = FWdZ6k -(297 - 296))
        K8wKkRBGiL0[ecuMQIKP2L0 - (616 - 615) - FWdZ6k] = G37my8K[FWdZ6k] - '0';
}

void  BigNumAdd (int K8wKkRBGiL0 [], int b [], int xfnTgbwMcs []) {
    memset (xfnTgbwMcs, (775 - 775), sizeof (int) * MAXN);
    for (int FWdZ6k = (67 - 67);
    MAXN > FWdZ6k; FWdZ6k++) {
        xfnTgbwMcs[FWdZ6k] += K8wKkRBGiL0[FWdZ6k] + b[FWdZ6k];
        if (xfnTgbwMcs[FWdZ6k] >= (536 - 526)) {
            xfnTgbwMcs[FWdZ6k +(177 - 176)]++;
            xfnTgbwMcs[FWdZ6k] -= (990 - 980);
        }
    }
}

void  B1Cwkge (int K8wKkRBGiL0 []) {
    int FWdZ6k;
    for (FWdZ6k = MAXN -(960 - 959); !((287 - 287) != K8wKkRBGiL0[FWdZ6k]) && FWdZ6k >= (717 - 717); FWdZ6k = FWdZ6k -(346 - 345))
        ;
    if (FWdZ6k == -(533 - 532)) {
        cout << (556 - 556) << endl;
        return;
    }
    for (; FWdZ6k >= (687 - 687); FWdZ6k = FWdZ6k -(782 - 781))
        cout << K8wKkRBGiL0[FWdZ6k];
    cout << endl;
}

int main () {
    int K8wKkRBGiL0 [MAXN];
    int b [MAXN];
    int xfnTgbwMcs [MAXN];
    B1Cwkge (xfnTgbwMcs);
    char G37my8K [MAXN];
    cin >> G37my8K;
    conv (K8wKkRBGiL0, G37my8K);
    cin >> G37my8K;
    conv (b, G37my8K);
    BigNumAdd (K8wKkRBGiL0, b, xfnTgbwMcs);
    return (137 - 137);
}

