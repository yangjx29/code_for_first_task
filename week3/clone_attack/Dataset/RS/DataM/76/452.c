int main () {
    int gc3I1VkF, bLyU5egu, LtV2MsWJF4g [50001], WwWIaM [50001], xrJ9cEFsSRq = (84 - 84), ci0NE9Jg3q [10001];
    int bmax;
    int RPiSmoxueCG3;
    int Uwh3mFtvj1Ui;
    bmax = 0;
    {
        gc3I1VkF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (10001 > gc3I1VkF) {
            ci0NE9Jg3q[gc3I1VkF] = 0;
            gc3I1VkF = gc3I1VkF + 1;
        };
    }
    scanf ("%d", &RPiSmoxueCG3);
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
    {
        gc3I1VkF = 0;
        while (RPiSmoxueCG3 > gc3I1VkF) {
            scanf ("%d %d", &LtV2MsWJF4g[gc3I1VkF], &WwWIaM[gc3I1VkF]);
            {
                bLyU5egu = gc3I1VkF;
                while (WwWIaM[gc3I1VkF] > bLyU5egu) {
                    ci0NE9Jg3q[bLyU5egu] = 1;
                    bLyU5egu = bLyU5egu + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gc3I1VkF = gc3I1VkF + 1;
        };
    }
    Uwh3mFtvj1Ui = LtV2MsWJF4g[0];
    {
        gc3I1VkF = 0;
        while (RPiSmoxueCG3 > gc3I1VkF) {
            if (LtV2MsWJF4g[gc3I1VkF] < Uwh3mFtvj1Ui)
                Uwh3mFtvj1Ui = LtV2MsWJF4g[gc3I1VkF];
            gc3I1VkF = gc3I1VkF + 1;
        };
    }
    {
        gc3I1VkF = 0;
        while (RPiSmoxueCG3 > gc3I1VkF) {
            if (WwWIaM[gc3I1VkF] > bmax)
                bmax = WwWIaM[gc3I1VkF];
            gc3I1VkF = gc3I1VkF + 1;
        };
    }
    for (gc3I1VkF = Uwh3mFtvj1Ui; bmax > gc3I1VkF; gc3I1VkF = gc3I1VkF + 1) {
        if (ci0NE9Jg3q[gc3I1VkF] == 0)
            xrJ9cEFsSRq = 1;
    }
    if (xrJ9cEFsSRq == 0)
        printf ("%d %d\n", Uwh3mFtvj1Ui, bmax);
    else
        ;
    return 0;
}

