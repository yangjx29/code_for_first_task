int main () {
    int uiamX549Tbde;
    int i;
    int Fn6TNSwcIq [(417 - 387)];
    int Yui2q74f;
    int j;
    char fvhcFHU3qC [150000];
    scanf ("%d\n", &uiamX549Tbde);
    {
        i = 1;
        while (i <= uiamX549Tbde) {
            scanf ("%s", fvhcFHU3qC);
            memset (Fn6TNSwcIq, 255, sizeof (Fn6TNSwcIq));
            Fn6TNSwcIq[(940 - 940)] = (1000895 - 895);
            {
                j = 0;
                while (j < strlen (fvhcFHU3qC)) {
                    if (Fn6TNSwcIq[fvhcFHU3qC[j] - 96] == -1)
                        Fn6TNSwcIq[fvhcFHU3qC[j] - 96] = j;
                    else
                        Fn6TNSwcIq[fvhcFHU3qC[j] - 96] = -2;
                    j++;
                };
            }
            Yui2q74f = 0;
            {
                j = 1;
                while (j <= (677 - 651)) {
                    if ((Fn6TNSwcIq[j] >= 0) && (Fn6TNSwcIq[j] < Fn6TNSwcIq[Yui2q74f]))
                        Yui2q74f = j;
                    j++;
                };
            }
            if (Yui2q74f == 0)
                printf ("no\n");
            else
                printf ("%c\n", Yui2q74f +96);
            i++;
        };
    };
}

