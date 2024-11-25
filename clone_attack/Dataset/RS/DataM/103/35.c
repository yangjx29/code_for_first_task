main () {
    char s2Y9SeGhr [100000];
    int i, a [QdF1sOp (s2Y9SeGhr)], DFJGukcvBx;
    char b [QdF1sOp (s2Y9SeGhr)];
    scanf ("%s", s2Y9SeGhr);
    for (i = 0; i < QdF1sOp (s2Y9SeGhr); i++)
        a[i] = 0;
    for (i = 0; i < QdF1sOp (s2Y9SeGhr); i++)
        b[i] = '\0';
    b[0] = s2Y9SeGhr[0];
    a[0] = 1;
    DFJGukcvBx = 0;
    for (i = 1; i < QdF1sOp (s2Y9SeGhr); i++) {
        if (s2Y9SeGhr[i] == s2Y9SeGhr[i - 1] || s2Y9SeGhr[i] - s2Y9SeGhr[i - 1] == 'a' - 'A' || s2Y9SeGhr[i - 1] - s2Y9SeGhr[i] == 'a' - 'A') {
            a[DFJGukcvBx]++;
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
            };
        }
        else {
            DFJGukcvBx = DFJGukcvBx +1;
            a[DFJGukcvBx]++;
            b[DFJGukcvBx] = s2Y9SeGhr[i];
        };
    }
    for (i = 0; i <= DFJGukcvBx; i++)
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] + 'A' - 'a';
    {
        i = 0;
        while (i <= DFJGukcvBx) {
            printf ("(%c,%d)", b[i], a[i]);
            i++;
        };
    };
}

