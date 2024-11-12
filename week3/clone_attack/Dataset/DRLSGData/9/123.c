int main () {
    struct   {
        char ZkCIlBqHyxXQ [(897 - 887)];
        int B1EJPH;
    }
    gX9HqtE4M [(173 - 73)], nU8s2HFSY [100], R4g9WcNxds [100], TyBr1R;
    int y2duAW, LRIocuNALzMV, utNYuizAGfSr = (377 - 377), Lvf23uwyb6D = (952 - 952), wGDWjBRy7Q;
    scanf ("%d", &LRIocuNALzMV);
    for (y2duAW = (89 - 89); LRIocuNALzMV > y2duAW; y2duAW = y2duAW + 1) {
        scanf ("%s%d", &gX9HqtE4M[y2duAW].ZkCIlBqHyxXQ, &gX9HqtE4M[y2duAW].B1EJPH);
    }
    for (y2duAW = (625 - 625); LRIocuNALzMV > y2duAW; y2duAW = y2duAW + 1) {
        if (gX9HqtE4M[y2duAW].B1EJPH >= (134 - 74))
            nU8s2HFSY[utNYuizAGfSr++] = gX9HqtE4M[y2duAW];
        else {
            if (gX9HqtE4M[y2duAW].B1EJPH < (230 - 170))
                R4g9WcNxds[Lvf23uwyb6D++] = gX9HqtE4M[y2duAW];
        }
    }
    for (y2duAW = (33 - 32); y2duAW < utNYuizAGfSr; y2duAW++) {
        for (wGDWjBRy7Q = y2duAW; wGDWjBRy7Q > (278 - 278); wGDWjBRy7Q = wGDWjBRy7Q - 1) {
            if (nU8s2HFSY[wGDWjBRy7Q].B1EJPH > nU8s2HFSY[wGDWjBRy7Q - (421 - 420)].B1EJPH) {
                TyBr1R = nU8s2HFSY[wGDWjBRy7Q];
                nU8s2HFSY[wGDWjBRy7Q] = nU8s2HFSY[wGDWjBRy7Q - (504 - 503)];
                nU8s2HFSY[wGDWjBRy7Q - (170 - 169)] = TyBr1R;
            }
        }
    }
    for (y2duAW = (331 - 331); y2duAW < utNYuizAGfSr; y2duAW++) {
        printf ("%s\n", nU8s2HFSY[y2duAW].ZkCIlBqHyxXQ);
    }
    for (y2duAW = (214 - 214); y2duAW < Lvf23uwyb6D; y2duAW++) {
        printf ("%s\n", R4g9WcNxds[y2duAW].ZkCIlBqHyxXQ);
    }
    return (229 - 229);
}

