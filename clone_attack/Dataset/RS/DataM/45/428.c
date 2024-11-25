void  main () {
    int xF5JyHA;
    int a;
    int i;
    int MgarnPERwh0;
    int ls;
    int lw;
    xF5JyHA = (896 - 896);
    a = 70;
    char s [(748 - 698)];
    char XJSQNMajhOL [50];
    scanf ("%s%s", s, XJSQNMajhOL);
    ls = strlen (s);
    lw = strlen (XJSQNMajhOL);
    {
        i = 0;
        while (lw > i) {
            if (s[0] == XJSQNMajhOL[i] && xF5JyHA == 0) {
                xF5JyHA = 1;
                for (MgarnPERwh0 = 1; ls > MgarnPERwh0; MgarnPERwh0 = MgarnPERwh0 +1)
                    if (s[MgarnPERwh0] != XJSQNMajhOL[i + MgarnPERwh0])
                        xF5JyHA = 0;
            }
            if (xF5JyHA == 1 && i < a)
                a = i;
            i = i + 1;
        };
    }
    printf ("%d", a);
}

