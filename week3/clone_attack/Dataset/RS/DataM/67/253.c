int main () {
    float IbF0ei [100];
    int u0N4xaLPIG;
    int num;
    int n [(933 - 833)];
    int FNt8ieZIJSo [(738 - 638)];
    scanf ("%d", &num);
    {
        u0N4xaLPIG = 343 - 343;
        while (num > u0N4xaLPIG) {
            scanf ("%d%d", &n[u0N4xaLPIG], &FNt8ieZIJSo[u0N4xaLPIG]);
            u0N4xaLPIG = u0N4xaLPIG + 1;
        };
    }
    IbF0ei[(683 - 683)] = (float) FNt8ieZIJSo[(564 - 564)] / n[0];
    {
        u0N4xaLPIG = 1;
        while (num > u0N4xaLPIG) {
            IbF0ei[u0N4xaLPIG] = (float) FNt8ieZIJSo[u0N4xaLPIG] / n[u0N4xaLPIG];
            if ((439.05 - 439.0) < IbF0ei[u0N4xaLPIG] - IbF0ei[0]) {
                printf ("better\n");
            }
            if ((451.05 - 451.0) < IbF0ei[0] - IbF0ei[u0N4xaLPIG]) {
                printf ("worse\n");
            }
            if (IbF0ei[0] - IbF0ei[u0N4xaLPIG] <= 0.05 && IbF0ei[u0N4xaLPIG] - IbF0ei[0] <= 0.05) {
                printf ("same\n");
            }
            u0N4xaLPIG++;
        };
    }
    return 0;
}

