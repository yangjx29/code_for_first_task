int main () {
    int zQwngWZLi [(202 - 162)];
    int MzeGRYsL;
    int k;
    int Zn3KCNt;
    double  emo78O [(355 - 315)], JXKoAJ3nVN [(878 - 838)], lXyKVrW [(402 - 362)], bk8atQUiLTI;
    char xjJQBa4EKwgI [(945 - 905)];
    int EcRO6o0;
    int oHTZfyinFx;
    int qUE0a7;
    scanf ("%d", &EcRO6o0);
    Zn3KCNt = (616 - 616);
    k = (791 - 791);
    for (oHTZfyinFx = (468 - 468); oHTZfyinFx < EcRO6o0; oHTZfyinFx++) {
        scanf ("%s %lf", &xjJQBa4EKwgI, &emo78O[oHTZfyinFx]);
        if (!((329 - 329) != strcmp (xjJQBa4EKwgI, "male"))) {
            zQwngWZLi[oHTZfyinFx] = (923 - 922);
        }
        else {
            zQwngWZLi[oHTZfyinFx] = (363 - 363);
        }
    }
    for (oHTZfyinFx = (78 - 78); EcRO6o0 > oHTZfyinFx; oHTZfyinFx++) {
        if (!((175 - 174) != zQwngWZLi[oHTZfyinFx])) {
            JXKoAJ3nVN[Zn3KCNt] = emo78O[oHTZfyinFx];
            Zn3KCNt++;
        }
        if (!((617 - 617) != zQwngWZLi[oHTZfyinFx])) {
            lXyKVrW[k] = emo78O[oHTZfyinFx];
            k++;
        }
    }
    for (oHTZfyinFx = (371 - 371); oHTZfyinFx < Zn3KCNt; oHTZfyinFx++) {
        for (qUE0a7 = oHTZfyinFx + (860 - 859); Zn3KCNt > qUE0a7; qUE0a7++) {
            if (JXKoAJ3nVN[qUE0a7] < JXKoAJ3nVN[oHTZfyinFx]) {
                bk8atQUiLTI = JXKoAJ3nVN[oHTZfyinFx];
                JXKoAJ3nVN[oHTZfyinFx] = JXKoAJ3nVN[qUE0a7];
                JXKoAJ3nVN[qUE0a7] = bk8atQUiLTI;
            }
        }
    }
    for (oHTZfyinFx = (579 - 579); k > oHTZfyinFx; oHTZfyinFx++) {
        for (qUE0a7 = oHTZfyinFx + (200 - 199); k > qUE0a7; qUE0a7++) {
            if (lXyKVrW[qUE0a7] > lXyKVrW[oHTZfyinFx]) {
                bk8atQUiLTI = lXyKVrW[oHTZfyinFx];
                lXyKVrW[oHTZfyinFx] = lXyKVrW[qUE0a7];
                lXyKVrW[qUE0a7] = bk8atQUiLTI;
            }
        }
    }
    for (oHTZfyinFx = (995 - 995); oHTZfyinFx < Zn3KCNt; oHTZfyinFx++) {
        printf ("%.2lf ", JXKoAJ3nVN[oHTZfyinFx]);
    }
    for (oHTZfyinFx = (399 - 399); oHTZfyinFx < k - (657 - 656); oHTZfyinFx++) {
        printf ("%.2lf ", lXyKVrW[oHTZfyinFx]);
    }
    printf ("%.2lf", lXyKVrW[k - 1]);
    return 0;
}

