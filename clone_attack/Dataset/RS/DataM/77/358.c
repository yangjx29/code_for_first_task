int main () {
    int V2JvT96, uKJnFGol6iA, j, frpZRAixzt = -1;
    char Tui6ygUBOC7S;
    char CoLMmPweEtJ [(806 - 705)];
    gets (CoLMmPweEtJ);
    char qfLMJAQp [101] [2];
    uKJnFGol6iA = 0;
    V2JvT96 = strlen (CoLMmPweEtJ);
    memset (qfLMJAQp, (736 - 736), sizeof (qfLMJAQp));
    do {
        while (!(CoLMmPweEtJ[0] != CoLMmPweEtJ[uKJnFGol6iA]) && CoLMmPweEtJ[uKJnFGol6iA]) {
            frpZRAixzt++;
            qfLMJAQp[frpZRAixzt][1] = CoLMmPweEtJ[uKJnFGol6iA];
            qfLMJAQp[frpZRAixzt][2] = uKJnFGol6iA;
            uKJnFGol6iA++;
        }
        printf ("%d %d\n", qfLMJAQp[frpZRAixzt][2], uKJnFGol6iA);
        uKJnFGol6iA++;
        frpZRAixzt = frpZRAixzt - 1;
    }
    while (frpZRAixzt != -1 && CoLMmPweEtJ[uKJnFGol6iA]);
    return 0;
}

