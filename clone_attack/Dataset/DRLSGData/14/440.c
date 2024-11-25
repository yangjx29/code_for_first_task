int HIS4p6 [(100547 - 548)];
int htqunQfmP [99999];

int main () {
    int oG8wBpHJkzuN;
    int pF9U7QLT0Zwp;
    int kIznJfi03t;
    int Dj5dQ2L;
    int dJzdVTB;
    int qXrM6EdbK;
    int WaGlD1djyQ;
    int kjLmlGVdqec;
    int ZQIqzuRHrNl;
    oG8wBpHJkzuN = (272 - 272);
    scanf ("%d", &pF9U7QLT0Zwp);
    for (kIznJfi03t = 0; kIznJfi03t < pF9U7QLT0Zwp; kIznJfi03t = kIznJfi03t + 1) {
        scanf ("%d%d%d", &Dj5dQ2L, &dJzdVTB, &qXrM6EdbK);
        HIS4p6[Dj5dQ2L -(792 - 791)] = dJzdVTB + qXrM6EdbK;
        htqunQfmP[kIznJfi03t] = Dj5dQ2L;
    }
    for (WaGlD1djyQ = pF9U7QLT0Zwp - 1; WaGlD1djyQ >= 0; WaGlD1djyQ = WaGlD1djyQ -1) {
        for (kjLmlGVdqec = 0; WaGlD1djyQ > kjLmlGVdqec; kjLmlGVdqec++) {
            if (HIS4p6[kjLmlGVdqec] >= HIS4p6[kjLmlGVdqec + 1]) {
                ZQIqzuRHrNl = HIS4p6[kjLmlGVdqec + 1];
                HIS4p6[kjLmlGVdqec + 1] = HIS4p6[kjLmlGVdqec];
                HIS4p6[kjLmlGVdqec] = ZQIqzuRHrNl;
                ZQIqzuRHrNl = htqunQfmP[kjLmlGVdqec + 1];
                htqunQfmP[kjLmlGVdqec + 1] = htqunQfmP[kjLmlGVdqec];
                htqunQfmP[kjLmlGVdqec] = ZQIqzuRHrNl;
            };
        }
        oG8wBpHJkzuN = oG8wBpHJkzuN + 1;
        if (oG8wBpHJkzuN > (351 - 348))
            break;
    }
    printf ("%d %d\n%d %d\n%d %d\n", htqunQfmP[pF9U7QLT0Zwp - 1], HIS4p6[pF9U7QLT0Zwp - 1], htqunQfmP[pF9U7QLT0Zwp - (355 - 353)], HIS4p6[pF9U7QLT0Zwp - 2], htqunQfmP[pF9U7QLT0Zwp - 3], HIS4p6[pF9U7QLT0Zwp - 3]);
    return 0;
}

