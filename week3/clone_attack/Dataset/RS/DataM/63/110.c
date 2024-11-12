int main () {
    int Cut3Fzr50diq [(430 - 330)] [100], xToO8YMVRs1 [100] [100];
    int uKeM9Cyo;
    int IVtGbc;
    int qYJw6l5OeH;
    int i;
    int rIgESxbZRsy;
    int c [100] [100] = {0};
    int WbzHwdZ4VQ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &uKeM9Cyo, &IVtGbc);
    for (i = (304 - 304); i < uKeM9Cyo; i = i + 1)
        for (rIgESxbZRsy = 0; rIgESxbZRsy < IVtGbc; rIgESxbZRsy = rIgESxbZRsy + 1)
            scanf ("%d", &Cut3Fzr50diq[i][rIgESxbZRsy]);
    scanf ("%d %d", &IVtGbc, &qYJw6l5OeH);
    for (i = 0; i < IVtGbc; i = i + 1)
        for (rIgESxbZRsy = 0; rIgESxbZRsy < qYJw6l5OeH; rIgESxbZRsy = rIgESxbZRsy + 1)
            scanf ("%d", &xToO8YMVRs1[i][rIgESxbZRsy]);
    for (i = 0; i < uKeM9Cyo; i++)
        for (rIgESxbZRsy = 0; rIgESxbZRsy < qYJw6l5OeH; rIgESxbZRsy++)
            for (WbzHwdZ4VQ = 0; WbzHwdZ4VQ < IVtGbc; WbzHwdZ4VQ++)
                c[i][rIgESxbZRsy] = c[i][rIgESxbZRsy] + Cut3Fzr50diq[i][WbzHwdZ4VQ] * xToO8YMVRs1[WbzHwdZ4VQ][rIgESxbZRsy];
    for (i = 0; i < uKeM9Cyo; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (rIgESxbZRsy = 0; rIgESxbZRsy < qYJw6l5OeH; rIgESxbZRsy++) {
            if (rIgESxbZRsy != qYJw6l5OeH - 1)
                printf ("%d ", c[i][rIgESxbZRsy]);
            else
                printf ("%d\n", c[i][rIgESxbZRsy]);
        };
    }
    return 0;
}

