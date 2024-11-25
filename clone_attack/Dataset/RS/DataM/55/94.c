int main () {
    char a2 [128];
    int n;
    int m;
    int num;
    int MsCMGE1Wakz;
    int k;
    num = (129 - 129);
    char in [255];
    char MnFrQ2XU9M [255] = "0";
    char a [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (MsCMGE1Wakz = 0; MsCMGE1Wakz <= '9'; MsCMGE1Wakz = MsCMGE1Wakz +1)
        a2[MsCMGE1Wakz] = MsCMGE1Wakz -'0';
    for (MsCMGE1Wakz = 'a'; MsCMGE1Wakz <= 'z'; MsCMGE1Wakz = MsCMGE1Wakz +1)
        a2[MsCMGE1Wakz] = MsCMGE1Wakz -'a' + (195 - 185);
    for (MsCMGE1Wakz = 'A'; MsCMGE1Wakz <= 'Z'; MsCMGE1Wakz = MsCMGE1Wakz +1)
        a2[MsCMGE1Wakz] = MsCMGE1Wakz -'A' + (339 - 329);
    scanf ("%d%s%d", &n, in, &m);
    for (MsCMGE1Wakz = 0; in[MsCMGE1Wakz] != '\0'; MsCMGE1Wakz = MsCMGE1Wakz +1)
        num = num * n + a2[in[MsCMGE1Wakz]];
    if (num == 0)
        k = 1;
    else
        k = 0;
    for (; num > 0;) {
        MnFrQ2XU9M[k] = a[num % m];
        num = num / m;
        k = k + 1;
    }
    for (MsCMGE1Wakz = k - 1; MsCMGE1Wakz >= 0; MsCMGE1Wakz--)
        printf ("%c", MnFrQ2XU9M[MsCMGE1Wakz]);
    return 0;
}

