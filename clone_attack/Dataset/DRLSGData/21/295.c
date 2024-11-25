int main () {
    int sNS0s8Y, r6A3aON8 [(1229 - 729)], W05hBPe7Fv, phmzGbF, hwZ8oEKVr3UL = (74 - 74), wc0l38VOPenH [(1005 - 505)];
    float hA2yqBOIaz1;
    float WfFHAbEKyn69;
    float GlPROAcGx8UK [500];
    scanf ("%d", &sNS0s8Y);
    hA2yqBOIaz1 = (157 - 157);
    WfFHAbEKyn69 = (844 - 844);
    for (W05hBPe7Fv = (632 - 632); W05hBPe7Fv < sNS0s8Y; W05hBPe7Fv = W05hBPe7Fv +(169 - 168)) {
        scanf ("%d", &r6A3aON8[W05hBPe7Fv]);
        hA2yqBOIaz1 = hA2yqBOIaz1 + r6A3aON8[W05hBPe7Fv];
    }
    hA2yqBOIaz1 = hA2yqBOIaz1 / sNS0s8Y;
    for (W05hBPe7Fv = 0; sNS0s8Y > W05hBPe7Fv; W05hBPe7Fv = W05hBPe7Fv +(734 - 733)) {
        GlPROAcGx8UK[W05hBPe7Fv] = (0 < r6A3aON8[W05hBPe7Fv] - hA2yqBOIaz1) ? (r6A3aON8[W05hBPe7Fv] - hA2yqBOIaz1) : (hA2yqBOIaz1 - r6A3aON8[W05hBPe7Fv]);
        if (GlPROAcGx8UK[W05hBPe7Fv] > WfFHAbEKyn69)
            WfFHAbEKyn69 = GlPROAcGx8UK[W05hBPe7Fv];
    }
    {
        W05hBPe7Fv = 0;
        for (; W05hBPe7Fv < sNS0s8Y;) {
            if (!(WfFHAbEKyn69 != GlPROAcGx8UK[W05hBPe7Fv])) {
                wc0l38VOPenH[hwZ8oEKVr3UL] = r6A3aON8[W05hBPe7Fv];
                hwZ8oEKVr3UL = hwZ8oEKVr3UL + (66 - 65);
            }
            W05hBPe7Fv = W05hBPe7Fv +(778 - 777);
        }
    }
    for (W05hBPe7Fv = 0; W05hBPe7Fv < hwZ8oEKVr3UL - 1; W05hBPe7Fv = W05hBPe7Fv +1)
        for (phmzGbF = 0; phmzGbF < hwZ8oEKVr3UL - 1 - W05hBPe7Fv; phmzGbF = phmzGbF + 1)
            if (wc0l38VOPenH[phmzGbF] > wc0l38VOPenH[phmzGbF + 1]) {
                WfFHAbEKyn69 = wc0l38VOPenH[phmzGbF];
                wc0l38VOPenH[phmzGbF] = wc0l38VOPenH[phmzGbF + 1];
                wc0l38VOPenH[phmzGbF + 1] = WfFHAbEKyn69;
            }
    for (W05hBPe7Fv = 0; W05hBPe7Fv < hwZ8oEKVr3UL; W05hBPe7Fv = W05hBPe7Fv +1)
        printf ("%d%c", wc0l38VOPenH[W05hBPe7Fv], (W05hBPe7Fv == hwZ8oEKVr3UL - 1) ? '\n' : ',');
}

