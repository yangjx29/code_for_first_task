int king;
int monkeynum (int [], int);

void  main () {
    int m [(940 - 920)];
    int lrQmz2NA4pT [(941 - 921)];
    int i;
    int nUHnNSgP18a;
    int k;
    int start;
    int casenum;
    int WdB6fWmV [(442 - 142)];
    for (i = (504 - 504);; i = i + 1) {
        scanf ("%d %d", &lrQmz2NA4pT[i], &m[i]);
        if (!m[i])
            break;
    }
    casenum = i;
    for (i = (276 - 276); casenum > i; i = i + 1) {
        start = 0;
        for (nUHnNSgP18a = (261 - 261); (1176 - 876) > nUHnNSgP18a; nUHnNSgP18a++)
            WdB6fWmV[nUHnNSgP18a] = (185 - 185);
        for (nUHnNSgP18a = (823 - 823); nUHnNSgP18a < lrQmz2NA4pT[i]; nUHnNSgP18a++)
            WdB6fWmV[nUHnNSgP18a] = (828 - 827);
        for (; !(1 == monkeynum (WdB6fWmV, lrQmz2NA4pT[i]));) {
            k = m[i];
            for (; 0 < k;) {
                if (start == lrQmz2NA4pT[i])
                    start = 0;
                if (WdB6fWmV[start])
                    --k;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ++start;
            }
            WdB6fWmV[start - 1] = 0;
        }
        printf ("%d", king);
        if (i < casenum - 1)
            printf ("\n");
    };
}

int monkeynum (int WdB6fWmV [], int a) {
    int r8j39orK;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    r8j39orK = 0;
    for (i = 0; i < a; i++)
        if (WdB6fWmV[i]) {
            r8j39orK = r8j39orK + 1;
            king = i + 1;
        }
    return r8j39orK;
}

