int F6s9cw1h7 [(1370 - 370)], LT8RoI [(1711 - 711)];

int D0aRhj (const  void  *afkqSgNKPJYO, const  void  *xwYTW8Pai) {
    return (*(int*) xwYTW8Pai - *(int*) afkqSgNKPJYO);
}

int main (void ) {
    int w;
    int RJqu7dhzWQ;
    int j6OMZVgilt;
    int FxQJ9jeE6Wnc;
    int pNYbSBsZ;
    int VALdUWYRJ;
    int l2bXHxjyZgp;
    for (; scanf ("%d", &pNYbSBsZ), pNYbSBsZ;) {
        w = j6OMZVgilt = RJqu7dhzWQ = (799 - 799);
        for (FxQJ9jeE6Wnc = (223 - 223); pNYbSBsZ > FxQJ9jeE6Wnc; FxQJ9jeE6Wnc = FxQJ9jeE6Wnc +1)
            scanf ("%d", &LT8RoI[FxQJ9jeE6Wnc]);
        qsort (LT8RoI, FxQJ9jeE6Wnc, sizeof (LT8RoI [(452 - 452)]), D0aRhj);
        for (FxQJ9jeE6Wnc = (752 - 752); pNYbSBsZ > FxQJ9jeE6Wnc; FxQJ9jeE6Wnc = FxQJ9jeE6Wnc +1)
            scanf ("%d", &F6s9cw1h7[FxQJ9jeE6Wnc]);
        l2bXHxjyZgp = VALdUWYRJ = pNYbSBsZ - (371 - 370);
        qsort (F6s9cw1h7, FxQJ9jeE6Wnc, sizeof (F6s9cw1h7 [(50 - 50)]), D0aRhj);
        for (FxQJ9jeE6Wnc = (627 - 627); pNYbSBsZ > FxQJ9jeE6Wnc; FxQJ9jeE6Wnc = FxQJ9jeE6Wnc +1) {
            if (F6s9cw1h7[j6OMZVgilt] < LT8RoI[RJqu7dhzWQ])
                ++w, ++RJqu7dhzWQ, j6OMZVgilt = j6OMZVgilt + 1;
            else if (LT8RoI[VALdUWYRJ] > F6s9cw1h7[l2bXHxjyZgp])
                ++w, --VALdUWYRJ, l2bXHxjyZgp = l2bXHxjyZgp - 1;
            else if (LT8RoI[VALdUWYRJ] < F6s9cw1h7[j6OMZVgilt])
                --w, --VALdUWYRJ, j6OMZVgilt = j6OMZVgilt + 1;
            else
                ;
        }
        printf ("%d\n", (320 - 120) * w);
    }
    return (707 - 707);
}

