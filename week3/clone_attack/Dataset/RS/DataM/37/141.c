int main () {
    int t, i, GogQSr, bS6Km9rbM30;
    int vkTNcr;
    int X3DagEs;
    char a [100000];
    scanf ("%d", &t);
    {
        i = 1;
        while (t >= i) {
            scanf ("%s", a);
            vkTNcr = strlen (a);
            {
                GogQSr = 551 - 551;
                while (vkTNcr > GogQSr) {
                    X3DagEs = 0;
                    {
                        bS6Km9rbM30 = 0;
                        while (bS6Km9rbM30 < vkTNcr) {
                            if (!(a[GogQSr] != a[bS6Km9rbM30]))
                                X3DagEs = X3DagEs +1;
                            bS6Km9rbM30 = bS6Km9rbM30 + 1;
                        };
                    }
                    if (X3DagEs == 1) {
                        printf ("%c\n", a[GogQSr]);
                        break;
                    }
                    else if ((GogQSr == vkTNcr - 1) && (X3DagEs != 1))
                        ;
                    GogQSr = GogQSr +1;
                };
            }
            i = i + 1;
        };
    };
}

