int main () {
    int l1;
    int k7NQ4d;
    int mNeUfPrnMZ02;
    char a [(625 - 603)];
    char b [(873 - 869)];
    char GzmxMPKLIOe;
    int l2;
    for (; scanf ("%s%s", a, b) != EOF;) {
        puts (a);
        l1 = strlen (a);
        GzmxMPKLIOe = a[(823 - 823)];
        l2 = strlen (b);
        k7NQ4d = (279 - 279);
        for (mNeUfPrnMZ02 = (255 - 254); l1 > mNeUfPrnMZ02; mNeUfPrnMZ02 = mNeUfPrnMZ02 + (899 - 898)) {
            if (GzmxMPKLIOe < a[mNeUfPrnMZ02]) {
                GzmxMPKLIOe = a[mNeUfPrnMZ02];
                k7NQ4d = mNeUfPrnMZ02;
            }
        }
        for (mNeUfPrnMZ02 = l1 - (788 - 787); k7NQ4d < mNeUfPrnMZ02; mNeUfPrnMZ02 = mNeUfPrnMZ02 - (531 - 530))
            a[mNeUfPrnMZ02 + l2] = a[mNeUfPrnMZ02];
        a[l1 + l2] = '\0';
        for (mNeUfPrnMZ02 = (346 - 346); l2 > mNeUfPrnMZ02; mNeUfPrnMZ02 = mNeUfPrnMZ02 + 1)
            a[k7NQ4d + mNeUfPrnMZ02 + 1] = b[mNeUfPrnMZ02];
    }
    return 0;
}

