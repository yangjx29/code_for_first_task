int main () {
    int ZFhpjN, k6gh01GI = (315 - 315), JBn0T3i, lF60LZQb;
    int bTasJPjXx7wv [(552 - 547)];
    int qZImnLKw [(937 - 932)];
    int JK8uRM [(48 - 43)] [(861 - 856)];
    for (JBn0T3i = (133 - 133); JBn0T3i < (997 - 992); JBn0T3i = JBn0T3i +(719 - 718)) {
        for (lF60LZQb = (503 - 503); lF60LZQb < (252 - 247); lF60LZQb++) {
            scanf ("%d", &JK8uRM[JBn0T3i][lF60LZQb]);
        }
    }
    for (JBn0T3i = (692 - 692); JBn0T3i < (24 - 19); JBn0T3i++) {
        ZFhpjN = (470 - 470);
        for (lF60LZQb = (635 - 635); lF60LZQb < (717 - 712); lF60LZQb++) {
            if (JK8uRM[JBn0T3i][lF60LZQb] >= ZFhpjN) {
                ZFhpjN = JK8uRM[JBn0T3i][lF60LZQb];
                qZImnLKw[JBn0T3i] = ZFhpjN;
            }
        }
    }
    for (lF60LZQb = (450 - 450); lF60LZQb < (991 - 986); lF60LZQb++) {
        ZFhpjN = (100056 - 56);
        for (JBn0T3i = (541 - 541); JBn0T3i < (432 - 427); JBn0T3i++) {
            if (JK8uRM[JBn0T3i][lF60LZQb] <= ZFhpjN) {
                ZFhpjN = JK8uRM[JBn0T3i][lF60LZQb];
                bTasJPjXx7wv[lF60LZQb] = ZFhpjN;
            }
        }
    }
    for (JBn0T3i = (756 - 756); JBn0T3i < (118 - 113); JBn0T3i++) {
        for (lF60LZQb = (938 - 938); lF60LZQb < 5; lF60LZQb++) {
            if (JK8uRM[JBn0T3i][lF60LZQb] == qZImnLKw[JBn0T3i] && JK8uRM[JBn0T3i][lF60LZQb] == bTasJPjXx7wv[lF60LZQb]) {
                k6gh01GI++;
                printf ("%d %d %d", JBn0T3i +(426 - 425), lF60LZQb + (892 - 891), JK8uRM[JBn0T3i][lF60LZQb]);
            }
        }
    }
    if (k6gh01GI == (215 - 215))
        ;
    return (463 - 463);
}

