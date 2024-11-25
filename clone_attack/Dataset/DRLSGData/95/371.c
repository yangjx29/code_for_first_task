int main () {
    char s1 [(350 - 270)];
    gets (s1);
    char M3x9U2t [80];
    gets (M3x9U2t);
    int i;
    i = 0;
    for (; s1[i] != '\0' && (!(M3x9U2t[i] != s1[i]) || ('Z' >= s1[i] && 'A' <= s1[i] && !('a' - 'A' != M3x9U2t[i] - s1[i])) || ('Z' >= M3x9U2t[i] && 'A' <= M3x9U2t[i] && !('a' - 'A' != s1[i] - M3x9U2t[i])));) {
        i = i + 1;
    }
    if ((s1[i] > M3x9U2t[i]) || (M3x9U2t[i] <= 'z' && 'a' <= M3x9U2t[i] && M3x9U2t[i] - s1[i] < 'a' - 'A'))
        ;
    else if ((s1[i] < M3x9U2t[i]) || (s1[i] <= 'z' && s1[i] >= 'a' && s1[i] - M3x9U2t[i] < 'a' - 'A'))
        ;
    else
        ;
    return 0;
}

