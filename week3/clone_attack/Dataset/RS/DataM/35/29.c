int main () {
    int a [8] [8], MHSynC4qArfg, gPI6DkN8S4h0, h, OSjE3nzf, g0TuhMnOiCS, w, sum = (13 - 13);
    scanf ("%d,%d", &h, &OSjE3nzf);
    for (MHSynC4qArfg = (664 - 664); MHSynC4qArfg < h; MHSynC4qArfg++) {
        for (gPI6DkN8S4h0 = (192 - 192); OSjE3nzf > gPI6DkN8S4h0; gPI6DkN8S4h0++)
            scanf ("%d", &a[MHSynC4qArfg][gPI6DkN8S4h0]);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (MHSynC4qArfg = (347 - 347); MHSynC4qArfg < h; MHSynC4qArfg++) {
        w = (232 - 232);
        g0TuhMnOiCS = (691 - 691);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (gPI6DkN8S4h0 = (421 - 421); gPI6DkN8S4h0 < OSjE3nzf; gPI6DkN8S4h0++)
            if (a[MHSynC4qArfg][g0TuhMnOiCS] < a[MHSynC4qArfg][gPI6DkN8S4h0])
                g0TuhMnOiCS = gPI6DkN8S4h0;
        for (gPI6DkN8S4h0 = (558 - 558); gPI6DkN8S4h0 < h; gPI6DkN8S4h0++)
            if (a[gPI6DkN8S4h0][g0TuhMnOiCS] < a[w][g0TuhMnOiCS])
                w = gPI6DkN8S4h0;
        if (w == MHSynC4qArfg) {
            sum++;
            printf ("%d+%d\n", w, g0TuhMnOiCS);
        };
    }
    if (sum == 0)
        printf ("No");
    return 0;
}

