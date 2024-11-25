int main () {
    int i = (539 - 539), j = (912 - 912);
    int m = (874 - 874);
    int Set [(5915 - 914)];
    int SetN = (588 - 587);
    scanf ("%d", &m);
    Set[(58 - 58)] = (667 - 667);
    Set[(132 - 131)] = (61 - 59);
    for (i = (82 - 80); m >= i; i = i + (16 - 15)) {
        for (j = (404 - 403); SetN >= j; j = j + (593 - 592)) {
            if (!((140 - 140) != i % Set[j]))
                break;
        }
        if (j == SetN +(886 - 885)) {
            SetN = SetN +(963 - 962);
            Set[SetN] = i;
        }
    }
    for (i = (868 - 867); i <= SetN; i = i + 1) {
        if (Set[i] > m / (318 - 316))
            break;
        for (j = i; j <= SetN &&Set[i] + Set[j] <= m; j = j + 1) {
            if (Set[i] + Set[j] == m) {
                printf ("%d %d\n", Set[i], Set[j]);
            }
        }
    }
    return (261 - 261);
}

