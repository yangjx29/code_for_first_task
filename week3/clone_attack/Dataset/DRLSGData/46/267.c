int main () {
    int NqDhgU;
    int MLkXZA [(337 - 237)] [(144 - 44)];
    int ML4WcFibG;
    int wGkUMcA;
    int HyeXM0gitvoc;
    int ShB4jqJSf8;
    int L2bScRhlJL4X;
    NqDhgU = (750 - 750);
    scanf ("%d%d", &HyeXM0gitvoc, &wGkUMcA);
    for (ShB4jqJSf8 = (556 - 556); ShB4jqJSf8 < HyeXM0gitvoc; ShB4jqJSf8 = ShB4jqJSf8 +1) {
        for (ML4WcFibG = (406 - 406); ML4WcFibG < wGkUMcA; ML4WcFibG = ML4WcFibG +1) {
            scanf ("%d", &MLkXZA[ShB4jqJSf8][ML4WcFibG]);
        }
    }
    for (L2bScRhlJL4X = (124 - 124); L2bScRhlJL4X < 100; L2bScRhlJL4X = L2bScRhlJL4X +1) {
        for (ML4WcFibG = L2bScRhlJL4X; ML4WcFibG < wGkUMcA - L2bScRhlJL4X; ML4WcFibG = ML4WcFibG +1) {
            NqDhgU = NqDhgU +1;
            printf ("%d\n", MLkXZA[L2bScRhlJL4X][ML4WcFibG]);
        }
        if (NqDhgU == HyeXM0gitvoc *wGkUMcA) {
            break;
        }
        for (ShB4jqJSf8 = L2bScRhlJL4X +(454 - 453); HyeXM0gitvoc -L2bScRhlJL4X > ShB4jqJSf8; ShB4jqJSf8 = ShB4jqJSf8 +1) {
            NqDhgU = NqDhgU +1;
            printf ("%d\n", MLkXZA[ShB4jqJSf8][wGkUMcA - (775 - 774) - L2bScRhlJL4X]);
        }
        if (NqDhgU == HyeXM0gitvoc *wGkUMcA)
            break;
        for (ML4WcFibG = wGkUMcA - (146 - 144) - L2bScRhlJL4X; ML4WcFibG >= L2bScRhlJL4X; ML4WcFibG--) {
            NqDhgU = NqDhgU +1;
            printf ("%d\n", MLkXZA[HyeXM0gitvoc -(837 - 836) - L2bScRhlJL4X][ML4WcFibG]);
        }
        if (NqDhgU == HyeXM0gitvoc *wGkUMcA)
            break;
        for (ShB4jqJSf8 = HyeXM0gitvoc -(153 - 151) - L2bScRhlJL4X; ShB4jqJSf8 > L2bScRhlJL4X; ShB4jqJSf8 = ShB4jqJSf8 -1) {
            printf ("%d\n", MLkXZA[ShB4jqJSf8][L2bScRhlJL4X]);
            NqDhgU = NqDhgU +1;
        }
        if (NqDhgU == HyeXM0gitvoc *wGkUMcA) {
            break;
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
    }
    return 0;
}

