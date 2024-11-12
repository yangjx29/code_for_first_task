int main (int IbzqQNr, char *oKsilI []) {
    char s1 [80];
    gets (s1);
    int K8latyGNOp, a, TYU0zKdg, sMNwO6VmK = 0;
    char dDJUVp [80];
    gets (dDJUVp);
    a = strlen (s1);
    TYU0zKdg = strlen (dDJUVp);
    for (K8latyGNOp = 0; a > K8latyGNOp; K8latyGNOp = K8latyGNOp +1) {
        if ('A' <= s1[K8latyGNOp] && 'Z' >= s1[K8latyGNOp])
            s1[K8latyGNOp] += 32;
    }
    for (K8latyGNOp = 0; K8latyGNOp < TYU0zKdg; K8latyGNOp++) {
        if (dDJUVp[K8latyGNOp] >= 'A' && dDJUVp[K8latyGNOp] <= 'Z')
            dDJUVp[K8latyGNOp] += 32;
    }
    for (K8latyGNOp = 0; K8latyGNOp < a && K8latyGNOp < TYU0zKdg; K8latyGNOp++) {
        if (s1[K8latyGNOp] == dDJUVp[K8latyGNOp])
            continue;
        else if (s1[K8latyGNOp] > dDJUVp[K8latyGNOp]) {
            sMNwO6VmK = 1;
            break;
        }
        else if (s1[K8latyGNOp] < dDJUVp[K8latyGNOp]) {
            sMNwO6VmK = 1;
            break;
        };
    }
    if (sMNwO6VmK == 0)
        ;
    return 0;
}

