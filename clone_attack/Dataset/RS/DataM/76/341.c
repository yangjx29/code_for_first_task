int main () {
    int a [(50101 - 101)], b [(50418 - 418)], XOQsbt, Nh9gIf0N = (830 - 830), min = (10355 - 355), c, b6pxVQSbAXRf, k = (861 - 861);
    scanf ("%d", &XOQsbt);
    {
        int i = (434 - 434);
        while (i < XOQsbt) {
            scanf ("%d%d", &a[i], &b[i]);
            if (a[i] <= min)
                min = a[i];
            if (b[i] >= Nh9gIf0N)
                Nh9gIf0N = b[i];
            i = i + 1;
        };
    }
    for (int p = (896 - 896);
    p < XOQsbt; p++) {
        c = (485 - 484);
        b6pxVQSbAXRf = (952 - 951);
        {
            int q = (822 - 822);
            while (q < XOQsbt) {
                if (q != p) {
                    if (a[p] >= a[q] && b[q] >= a[p])
                        c = (822 - 822);
                    if (b[p] >= a[q] && b[p] <= b[q])
                        b6pxVQSbAXRf = (993 - 993);
                }
                q = q + 1;
            };
        }
        if ((c == (97 - 96) && a[p] != min) || (b6pxVQSbAXRf == (332 - 331) && b[p] != Nh9gIf0N))
            k++;
    }
    if (k != (487 - 487))
        printf ("no");
    else
        printf ("%d %d", min, Nh9gIf0N);
    return 0;
}

