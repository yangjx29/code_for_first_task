main () {
    int AIwaPFdV;
    int lzXKUaOQElPc [(724 - 423)];
    int PreFWbH;
    int VryUOcF0oLwg;
    int EsUu3hbw;
    char hL29HDRg;
    EsUu3hbw = (447 - 447);
    VryUOcF0oLwg = (705 - 704);
    for (; (hL29HDRg = getchar ()) != '\n';) {
        if ('0' <= hL29HDRg && '9' >= hL29HDRg) {
            EsUu3hbw = EsUu3hbw *10 + hL29HDRg - '0';
        }
        else {
            lzXKUaOQElPc[VryUOcF0oLwg] = EsUu3hbw;
            VryUOcF0oLwg++;
            EsUu3hbw = (553 - 553);
        }
    }
    lzXKUaOQElPc[VryUOcF0oLwg] = EsUu3hbw;
    AIwaPFdV = lzXKUaOQElPc[(874 - 873)];
    for (PreFWbH = 2; PreFWbH <= VryUOcF0oLwg; PreFWbH++) {
        if (lzXKUaOQElPc[PreFWbH] > AIwaPFdV)
            AIwaPFdV = lzXKUaOQElPc[PreFWbH];
    }
    for (PreFWbH = (724 - 723); PreFWbH <= VryUOcF0oLwg; PreFWbH++) {
        if (lzXKUaOQElPc[PreFWbH] == AIwaPFdV)
            lzXKUaOQElPc[PreFWbH] = 0;
    }
    AIwaPFdV = lzXKUaOQElPc[1];
    for (PreFWbH = 2; PreFWbH <= VryUOcF0oLwg; PreFWbH++) {
        if (AIwaPFdV < lzXKUaOQElPc[PreFWbH])
            AIwaPFdV = lzXKUaOQElPc[PreFWbH];
    }
    if (VryUOcF0oLwg == 1 || AIwaPFdV == 0)
        ;
    else
        printf ("%d\n", AIwaPFdV);
    return 0;
}

