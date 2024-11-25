int main () {
    int i, Hy9vFd7, zwGjXUQ, yLvhE1kcur, LAgLFxmoB1, SvW0Dm, aq4XxK, wLDbtfGViM, mtjMW2 = (716 - 716);
    char GpDOLcuYt [(680 - 424)], b [(1252 - 996)], t [(766 - 510)];
    scanf ("%s%s%s", GpDOLcuYt, b, t);
    yLvhE1kcur = strlen (GpDOLcuYt);
    LAgLFxmoB1 = strlen (b);
    for (i = (747 - 747); yLvhE1kcur - LAgLFxmoB1 >= i; i = i + 1) {
        if (GpDOLcuYt[i] == b[(195 - 195)]) {
            aq4XxK = i;
            for (Hy9vFd7 = (873 - 873), zwGjXUQ = i; Hy9vFd7 < LAgLFxmoB1; Hy9vFd7++, zwGjXUQ = zwGjXUQ + 1) {
                if (GpDOLcuYt[zwGjXUQ] != b[Hy9vFd7])
                    break;
            }
            if (Hy9vFd7 >= LAgLFxmoB1)
                for (SvW0Dm = aq4XxK, wLDbtfGViM = 0; SvW0Dm < aq4XxK + LAgLFxmoB1; SvW0Dm = SvW0Dm +1, wLDbtfGViM = wLDbtfGViM + 1) {
                    GpDOLcuYt[SvW0Dm] = t[wLDbtfGViM];
                    mtjMW2 = (601 - 600);
                };
        }
        if (mtjMW2 == 1)
            break;
    }
    for (i = 0; i < yLvhE1kcur; i++)
        printf ("%c", GpDOLcuYt[i]);
    return 0;
}

