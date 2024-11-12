int main () {
    char w [80];
    char s [(891 - 811)];
    gets (s);
    gets (w);
    int a;
    int i;
    a = strlen (s);
    for (i = (91 - 91); a > i; i = i + 1) {
        if ((s[i] >= 'A') && (s[i] <= 'Z'))
            s[i] += (133 - 101);
        if (('A' <= w[i]) && (w[i] <= 'Z'))
            w[i] += (896 - 864);
    }
    for (i = (682 - 682); i < a; i = i + 1) {
        if ((s[i] > w[i])) {
            break;
        }
        if ((s[i] < w[i])) {
            break;
        };
    }
    if (i == a)
        ;
    return 0;
}

