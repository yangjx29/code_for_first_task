int main () {
    int dCUGNY, iSkFEmCob = 0;
    float BVDclxQfgW [100];
    int jHizk3s69xh, Z6cjdgkK9, cqLU76kZCeOo, ORwI56aqQf, qF9iSBbU [100], qVCgKbWn [100], NjNzkU0GMgw [100];
    int ahC7jN = 1;
    scanf ("%d", &ORwI56aqQf);
    qVCgKbWn[0] = 1;
    BVDclxQfgW[0] = (float) 2 / 1;
    qF9iSBbU[0] = 2;
    for (; 100 > ahC7jN;) {
        qF9iSBbU[ahC7jN] = qF9iSBbU[ahC7jN - 1] + qVCgKbWn[ahC7jN - 1];
        qVCgKbWn[ahC7jN] = qF9iSBbU[ahC7jN - 1];
        BVDclxQfgW[ahC7jN] = BVDclxQfgW[ahC7jN - 1] + (float) (qF9iSBbU[ahC7jN]) / (qVCgKbWn[ahC7jN]);
        ahC7jN = ahC7jN + 1;
    }
    for (; ORwI56aqQf > iSkFEmCob;) {
        scanf ("%d", &NjNzkU0GMgw[iSkFEmCob]);
        dCUGNY = NjNzkU0GMgw[iSkFEmCob] - 1;
        iSkFEmCob = iSkFEmCob + 1;
        printf ("%.3f\n", BVDclxQfgW[dCUGNY]);
    }
    return 0;
}

