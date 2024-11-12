int main () {
    int bpSfhum;
    int xDy5Un;
    int bQnCYNd9uSMf;
    int xWHZ1X8SLB;
    int RwRHI7QMbg0;
    bpSfhum = (957 - 957);
    xDy5Un = (114 - 114);
    bQnCYNd9uSMf = (144 - 144);
    int b [300];
    char PP9u0tW14Tv6 [(10715 - 715)];
    char ZuwWpGFJ [(1289 - 989)] [(690 - 660)];
    gets (PP9u0tW14Tv6);
    int hrmtgWG1Ej;
    hrmtgWG1Ej = strlen (PP9u0tW14Tv6);
    for (xWHZ1X8SLB = (531 - 531); xWHZ1X8SLB < hrmtgWG1Ej + (189 - 188); xWHZ1X8SLB++) {
        if (PP9u0tW14Tv6[xWHZ1X8SLB] != ' ' && PP9u0tW14Tv6[xWHZ1X8SLB] != '\0') {
            ZuwWpGFJ[bpSfhum][xDy5Un] = PP9u0tW14Tv6[xWHZ1X8SLB];
            xDy5Un = xDy5Un + 1;
        }
        if (!(' ' != PP9u0tW14Tv6[xWHZ1X8SLB]) || PP9u0tW14Tv6[xWHZ1X8SLB] == '\0') {
            ZuwWpGFJ[bpSfhum][xDy5Un] = '\0';
            bpSfhum = bpSfhum + 1;
            xDy5Un = 0;
        };
    }
    {
        RwRHI7QMbg0 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (RwRHI7QMbg0 < bpSfhum - (216 - 215)) {
            b[bQnCYNd9uSMf] = strlen (ZuwWpGFJ[RwRHI7QMbg0]);
            RwRHI7QMbg0++;
            if (b[bQnCYNd9uSMf] != 0) {
                printf ("%d,", b[bQnCYNd9uSMf]);
            }
            bQnCYNd9uSMf++;
        };
    }
    b[bpSfhum - (978 - 977)] = strlen (ZuwWpGFJ[bpSfhum - (307 - 306)]);
    printf ("%d\n", b[bpSfhum - 1]);
    return 0;
}

