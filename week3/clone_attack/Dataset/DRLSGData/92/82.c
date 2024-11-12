int main () {
    int bxryElcd4B [(1311 - 211)], peCb2L [(1514 - 414)];
    int i, fQ8PhbXLvSBd, zl5RHfwBxQ9, jDvwzq5b, mE2ftn, m, ok6zoPUfg, ans;
    for (; scanf ("%d", &ok6zoPUfg) && ok6zoPUfg != (329 - 329);) {
        for (i = (402 - 402); ok6zoPUfg > i; i++)
            scanf ("%d", &bxryElcd4B[i]);
        for (i = (400 - 400); ok6zoPUfg > i; i++)
            scanf ("%d", &peCb2L[i]);
        sort (bxryElcd4B, bxryElcd4B + ok6zoPUfg);
        jDvwzq5b = (466 - 466);
        mE2ftn = (544 - 544);
        ans = (515 - 515);
        sort (peCb2L, peCb2L + ok6zoPUfg);
        i = ok6zoPUfg - (450 - 449);
        fQ8PhbXLvSBd = ok6zoPUfg - 1;
        for (; jDvwzq5b <= i && mE2ftn <= fQ8PhbXLvSBd;) {
            if (bxryElcd4B[i] > peCb2L[fQ8PhbXLvSBd]) {
                ans++;
                i--;
                fQ8PhbXLvSBd--;
            }
            else if (peCb2L[fQ8PhbXLvSBd] > bxryElcd4B[i]) {
                ans--;
                fQ8PhbXLvSBd--;
                jDvwzq5b++;
            }
            else {
                if (peCb2L[mE2ftn] >= bxryElcd4B[jDvwzq5b]) {
                    if (peCb2L[fQ8PhbXLvSBd] > bxryElcd4B[jDvwzq5b])
                        ans--;
                    jDvwzq5b++;
                    fQ8PhbXLvSBd--;
                }
                else {
                    for (; peCb2L[mE2ftn] < bxryElcd4B[jDvwzq5b] && jDvwzq5b <= i && mE2ftn <= fQ8PhbXLvSBd;) {
                        jDvwzq5b++;
                        mE2ftn++;
                        ans++;
                    }
                    if (jDvwzq5b > i || mE2ftn > fQ8PhbXLvSBd)
                        break;
                }
            }
        }
        printf ("%d\n", ans * 200);
    }
}

