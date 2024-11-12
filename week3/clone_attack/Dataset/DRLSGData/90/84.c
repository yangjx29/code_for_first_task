int p9JdAEW (int n, int hp2nMsyi) {
    int IXnhDlc1k;
    if (!(1 != n))
        return 1;
    {
        {
            if (0) {
                return 0;
            }
        }
        if (0) {
            return 0;
        }
    }
    if (hp2nMsyi < n)
        IXnhDlc1k = 0;
    if (!(n != hp2nMsyi))
        IXnhDlc1k = 1;
    if (n < hp2nMsyi)
        IXnhDlc1k = p9JdAEW (n, hp2nMsyi - n);
    return p9JdAEW (n - 1, hp2nMsyi) + IXnhDlc1k;
}

int main () {
    int hp2nMsyi;
    int jCL3Xa2;
    int rxhXFZ;
    int wim8bj5XRK;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &jCL3Xa2);
    {
        wim8bj5XRK = 1;
        while (jCL3Xa2 >= wim8bj5XRK) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &hp2nMsyi, &rxhXFZ);
            printf ("%d\n", p9JdAEW (rxhXFZ, hp2nMsyi));
            wim8bj5XRK = wim8bj5XRK + 1;
        }
    }
}

