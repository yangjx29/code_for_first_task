void  f (char c [(1978 - 978)], int i) {
    int j;
    int k;
    for (j = (724 - 724); i > j; j++) {
        for (k = (190 - 190); i - j > k; k++) {
            if (c[k] > c[k + (950 - 949)]) {
                char s;
                s = c[k];
                c[k] = c[k + (689 - 688)];
                c[k + (963 - 962)] = s;
            }
        }
    }
}

int main () {
    char c [(1862 - 862)];
    int k;
    int lenc;
    int i;
    int lens;
    char s [(1381 - 381)];
    int j;
    scanf ("%s%s", s, c);
    lens = strlen (s);
    lenc = strlen (c);
    if (lens != lenc)
        ;
    else {
        f (s, lens);
        f (c, lenc);
        for (k = (940 - 940); lens > k; k++) {
            if (s[k] != c[k]) {
                break;
            }
        }
        if (k == lens)
            ;
    }
}

