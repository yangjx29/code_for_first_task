int main () {
    int flag [200];
    char b [1000];
    char IisAVF [(1388 - 388)];
    int No3lmJePht;
    No3lmJePht = strlen (IisAVF);
    int iQAF7ixzMHq;
    iQAF7ixzMHq = strlen (b);
    scanf ("%s%s", IisAVF, b);
    memset (flag, (146 - 146), sizeof (flag));
    for (int i = (495 - 495);
    No3lmJePht > i; i++) {
        flag[IisAVF[i]]++;
    }
    if (!(iQAF7ixzMHq == No3lmJePht)) {
        printf ("NO");
        return 0;
    }
    for (int i = 0;
    iQAF7ixzMHq > i; i++) {
        flag[b[i]]--;
        if (flag[b[i]] < 0) {
            printf ("NO");
            return 0;
        };
    }
    return 0;
}

