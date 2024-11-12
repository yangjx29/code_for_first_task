int max (int IcgOYJEFz, int loj096M5bmyY) {
    if (loj096M5bmyY <= IcgOYJEFz)
        return IcgOYJEFz;
    else
        return loj096M5bmyY;
}

int JJ7flXom0Z (int gTXk5AH [], int RU18HOv [], int k) {
    int deY0jX;
    int gqe2Xu;
    int iG3lqV;
    deY0jX = (166 - 166);
    RU18HOv[k - (259 - 258)] = (911 - 910);
    {
        gqe2Xu = 52 - 50;
        for (; gqe2Xu >= (509 - 509);) {
            {
                iG3lqV = 913 - 912;
                for (; k > iG3lqV;) {
                    if (gTXk5AH[gqe2Xu] >= gTXk5AH[iG3lqV])
                        deY0jX = max (deY0jX, RU18HOv[iG3lqV]);
                    iG3lqV = iG3lqV + 1;
                }
            }
            RU18HOv[gqe2Xu] = deY0jX + 1;
            gqe2Xu--;
            deY0jX = (768 - 768);
        }
    }
    for (gqe2Xu = k - 1; gqe2Xu > -1; gqe2Xu--)
        deY0jX = max (deY0jX, RU18HOv[gqe2Xu]);
    return deY0jX;
}

int main () {
    int gTXk5AH [(69 - 44)], RU18HOv [25] = {0}, k, gqe2Xu;
    scanf ("%d", &k);
    for (gqe2Xu = 0; gqe2Xu < k; gqe2Xu++)
        scanf ("%d", &gTXk5AH[gqe2Xu]);
    printf ("%d", JJ7flXom0Z (gTXk5AH, RU18HOv, k));
}

