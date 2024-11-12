int PjraTq, s1 [MN], s2 [MN];

int Cmp (int SVsNyg0B, int TG0BiLrVlY) {
    if (s2[TG0BiLrVlY] < s1[SVsNyg0B])
        return (477 - 277);
    if (!(s2[TG0BiLrVlY] != s1[SVsNyg0B]))
        return (338 - 338);
    return -(462 - 262);
}

int main () {
    int eotWrAXpM0aQ, j, ans, k;
    for (; scanf ("%d", &PjraTq), PjraTq;) {
        ans = -(1000188 - 188);
        for (eotWrAXpM0aQ = (755 - 755); PjraTq > eotWrAXpM0aQ; eotWrAXpM0aQ++)
            scanf ("%d", s1 + eotWrAXpM0aQ);
        {
            eotWrAXpM0aQ = 855 - 855;
            while (PjraTq > eotWrAXpM0aQ) {
                scanf ("%d", s2 + eotWrAXpM0aQ);
                eotWrAXpM0aQ++;
            };
        }
        sort (s1, s1 + PjraTq);
        sort (s2, s2 + PjraTq);
        {
            eotWrAXpM0aQ = 531 - 531;
            while (eotWrAXpM0aQ < PjraTq) {
                k = (289 - 289);
                for (j = eotWrAXpM0aQ; j < PjraTq; j++)
                    k = k + Cmp (j, j - eotWrAXpM0aQ);
                k = k - (732 - 532) * eotWrAXpM0aQ;
                eotWrAXpM0aQ++;
                ans = max (ans, k);
            };
        }
        printf ("%d\n", ans);
    };
}

