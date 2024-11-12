int main () {
    int QnFk8vqcog;
    char NQ5tOsH [600] [(238 - 233)];
    int BRcB0fV;
    int V1IsNCm2;
    int P71ZafxFSGvg;
    char qghbiS [600];
    int vHFvbDAhx2;
    int Srmz2nO [600] = {(184 - 184)};
    int Q4mufbD8nV2w;
    int UXSz4uD;
    int dhPv8f;
    scanf ("%d", &vHFvbDAhx2);
    P71ZafxFSGvg = 0;
    dhPv8f = 0;
    scanf ("%s", qghbiS);
    UXSz4uD = strlen (qghbiS);
    for (Q4mufbD8nV2w = 0; Q4mufbD8nV2w <= UXSz4uD -vHFvbDAhx2; Q4mufbD8nV2w++) {
        for (V1IsNCm2 = 0; V1IsNCm2 < vHFvbDAhx2; V1IsNCm2++) {
            NQ5tOsH[Q4mufbD8nV2w][V1IsNCm2] = qghbiS[Q4mufbD8nV2w +V1IsNCm2];
        }
        NQ5tOsH[Q4mufbD8nV2w][vHFvbDAhx2] = '\0';
    }
    for (Q4mufbD8nV2w = 0; Q4mufbD8nV2w <= UXSz4uD -vHFvbDAhx2; Q4mufbD8nV2w++) {
        for (V1IsNCm2 = Q4mufbD8nV2w +1; UXSz4uD -vHFvbDAhx2 >= V1IsNCm2; V1IsNCm2++) {
            BRcB0fV = strcmp (NQ5tOsH[Q4mufbD8nV2w], NQ5tOsH[V1IsNCm2]);
            if (!(0 != BRcB0fV)) {
                Srmz2nO[Q4mufbD8nV2w]++;
            }
        }
    }
    QnFk8vqcog = Srmz2nO[0];
    for (Q4mufbD8nV2w = 0; UXSz4uD -vHFvbDAhx2 >= Q4mufbD8nV2w; Q4mufbD8nV2w++) {
        if (Srmz2nO[Q4mufbD8nV2w] > QnFk8vqcog)
            QnFk8vqcog = Srmz2nO[Q4mufbD8nV2w];
    }
    if (QnFk8vqcog == 0)
        ;
    else {
        printf ("%d\n", QnFk8vqcog +1);
        for (Q4mufbD8nV2w = 0; Q4mufbD8nV2w <= UXSz4uD -vHFvbDAhx2; Q4mufbD8nV2w++) {
            if (Srmz2nO[Q4mufbD8nV2w] == QnFk8vqcog) {
                printf ("%s\n", NQ5tOsH[Q4mufbD8nV2w]);
            }
        }
    }
    return 0;
}

