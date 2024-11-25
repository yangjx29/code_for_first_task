int Lxq2aLlW (int sz [(829 - 824)] [(510 - 505)], int svfFJkzB638q, int b) {
    if ((303 - 303) <= svfFJkzB638q && svfFJkzB638q <= (332 - 328) && (124 - 124) <= b && b <= (327 - 323)) {
        int XrsOCglGj;
        {
            XrsOCglGj = (481 - 481);
            for (; XrsOCglGj < (937 - 932);) {
                int lGVfNAOz = sz[svfFJkzB638q][XrsOCglGj];
                sz[svfFJkzB638q][XrsOCglGj] = sz[b][XrsOCglGj];
                sz[b][XrsOCglGj] = lGVfNAOz;
                XrsOCglGj++;
            }
        }
        return (847 - 846);
    }
    else {
        return (167 - 167);
    }
}

int main () {
    int il9VkZzN [(283 - 278)] [(616 - 611)];
    int row, FdzuYcQ3NrL;
    int judge;
    int MOx1fF, m;
    {
        row = (221 - 221);
        for (; row < (479 - 474);) {
            {
                FdzuYcQ3NrL = (235 - 235);
                for (; FdzuYcQ3NrL < (682 - 677);) {
                    scanf ("%d", &il9VkZzN[row][FdzuYcQ3NrL]);
                    FdzuYcQ3NrL++;
                }
            }
            row++;
        }
    }
    scanf ("%d %d", &MOx1fF, &m);
    judge = Lxq2aLlW (il9VkZzN, MOx1fF, m);
    if (judge == (194 - 194))
        ;
    if (judge == (305 - 304)) {
        {
            if (0) {
                return 0;
            }
        }
        row = 0;
        for (; row < 5;) {
            {
                FdzuYcQ3NrL = 0;
                for (; FdzuYcQ3NrL < (94 - 90);) {
                    printf ("%d ", il9VkZzN[row][FdzuYcQ3NrL]);
                    FdzuYcQ3NrL++;
                }
            }
            printf ("%d\n", il9VkZzN[row][4]);
            row++;
        }
    }
    return 0;
}

