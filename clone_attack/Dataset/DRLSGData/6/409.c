PlQFACE6 (int *X4NtBD5C [], int vHr13q, int EplWMq5vP) {
    int z9Td5o = (162 - 162), pTiHafwXAI;
    {
        pTiHafwXAI = (458 - 458);
        for (; pTiHafwXAI < EplWMq5vP;) {
            z9Td5o = z9Td5o + *(X4NtBD5C[0] + pTiHafwXAI) + *(X4NtBD5C[vHr13q - (986 - 985)] + pTiHafwXAI);
            pTiHafwXAI = pTiHafwXAI + (180 - 179);
        }
    }
    {
        pTiHafwXAI = (239 - 238);
        for (; vHr13q - (304 - 303) > pTiHafwXAI;) {
            z9Td5o = z9Td5o + *(X4NtBD5C [pTiHafwXAI]) +*(X4NtBD5C[pTiHafwXAI] + EplWMq5vP -1);
            pTiHafwXAI = pTiHafwXAI + 1;
        }
    }
    return (z9Td5o);
}

main () {
    int *EN7yxbvlq [100];
    int p8kKiB1Q, pTiHafwXAI, baBS7L, vHr13q, EplWMq5vP, z9Td5o, whdqO1gB6;
    scanf ("%d", &p8kKiB1Q);
    {
        whdqO1gB6 = 0;
        for (; whdqO1gB6 < p8kKiB1Q;) {
            whdqO1gB6 = whdqO1gB6 + 1;
            scanf ("%d %d", &vHr13q, &EplWMq5vP);
            {
                pTiHafwXAI = 0;
                for (; vHr13q > pTiHafwXAI;) {
                    EN7yxbvlq[pTiHafwXAI] = (int *) malloc (EplWMq5vP * sizeof (int));
                    pTiHafwXAI = pTiHafwXAI + 1;
                }
            }
            {
                pTiHafwXAI = 0;
                for (; vHr13q > pTiHafwXAI;) {
                    baBS7L = 0;
                    for (; EplWMq5vP > baBS7L;) {
                        scanf ("%d", EN7yxbvlq[pTiHafwXAI] + baBS7L);
                        baBS7L++;
                    }
                    pTiHafwXAI++;
                }
            }
            z9Td5o = PlQFACE6 (EN7yxbvlq, vHr13q, EplWMq5vP);
            printf ("%d\n", z9Td5o);
        }
    }
}

