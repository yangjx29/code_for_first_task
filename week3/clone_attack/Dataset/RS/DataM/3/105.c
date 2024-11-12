int main () {
    int SjzR23fr [1000], cNqDRXuv [1000], i, Ql01wyrBF, rZCh3YGr, n, jtXvMimbQJ0G = 0;
    scanf ("%d%d", &n, &rZCh3YGr);
    for (i = 1; i <= n; i = i + 1)
        scanf ("%d", &SjzR23fr[i]);
    {
        i = 1;
        while (i <= n) {
            cNqDRXuv[i] = SjzR23fr[i];
            i++;
        };
    }
    for (i = 1; i <= n; i = i + 1) {
        for (Ql01wyrBF = 1; Ql01wyrBF <= n; Ql01wyrBF = Ql01wyrBF +1)
            if (SjzR23fr[i] + cNqDRXuv[Ql01wyrBF] == rZCh3YGr)
                jtXvMimbQJ0G = jtXvMimbQJ0G + 1;
    }
    if (jtXvMimbQJ0G == 0)
        printf ("no");
    else
        printf ("yes");
}

