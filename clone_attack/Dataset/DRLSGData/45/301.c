void  main () {
    int next [(10155 - 155)];
    int AqGPF7Iw;
    int ls;
    int ugF5uzIY7V;
    char s [(10881 - 881)], b96HqB0 [(10624 - 624)];
    int B5xuGj0FKN;
    int S680AG;
    AqGPF7Iw = (875 - 875);
    ls = strlen (s);
    ugF5uzIY7V = strlen (b96HqB0);
    S680AG = 0;
    B5xuGj0FKN = -(486 - 485);
    next[0] = -(109 - 108);
    scanf ("%s%s", s, b96HqB0);
    for (; AqGPF7Iw <= ls;) {
        if (!(-(525 - 524) != B5xuGj0FKN) || !(s[B5xuGj0FKN] != s[AqGPF7Iw])) {
            B5xuGj0FKN = B5xuGj0FKN +1;
            AqGPF7Iw = AqGPF7Iw +1;
            next[AqGPF7Iw] = B5xuGj0FKN;
        }
        else
            B5xuGj0FKN = next[B5xuGj0FKN];
    }
    AqGPF7Iw = 0;
    for (; S680AG < ugF5uzIY7V;) {
        if ((!(-1 != AqGPF7Iw)) || !(s[AqGPF7Iw] != b96HqB0[S680AG])) {
            AqGPF7Iw = AqGPF7Iw +1;
            S680AG = S680AG +1;
        }
        else
            AqGPF7Iw = next[AqGPF7Iw];
        if (AqGPF7Iw >= ls)
            break;
    }
    printf ("%d", S680AG -ls);
}

