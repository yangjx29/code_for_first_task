int N1, VfFYDJ, DsaQCmdL;
int *h1eJ3DoVj0 = (int *) malloc ((1032 - 932) * sizeof (int));
int *TjDQzKr = (int *) malloc ((566 - 466) * sizeof (int));
int *WCsMceA9dwvN = (int *) malloc (100 * sizeof (int));

void  n1ljtL () {
    scanf ("%d %d\n", &N1, &VfFYDJ);
    scanf ("%d", h1eJ3DoVj0);
    for (int ziSuenf8 = (289 - 288);
    N1 -(697 - 696) >= ziSuenf8; ziSuenf8 = ziSuenf8 + 1) {
        scanf (" %d", h1eJ3DoVj0 + ziSuenf8);
    }
    scanf ("\n%d", TjDQzKr);
    for (int ziSuenf8 = (377 - 376);
    ziSuenf8 <= VfFYDJ -(659 - 658); ziSuenf8 = ziSuenf8 + 1) {
        scanf (" %d", TjDQzKr +ziSuenf8);
    };
}

void  NfJ6hTy1lRI () {
    for (int ziSuenf8 = (754 - 753);
    ziSuenf8 <= N1 -(763 - 762); ziSuenf8 = ziSuenf8 + 1) {
        for (int oy5iMH9 = ziSuenf8 + (466 - 465);
        oy5iMH9 <= N1; oy5iMH9 = oy5iMH9 + 1) {
            if (*(h1eJ3DoVj0 + oy5iMH9 - (647 - 646)) < *(h1eJ3DoVj0 + ziSuenf8 - (796 - 795))) {
                int XScrGZxXv1b5;
                XScrGZxXv1b5 = *(h1eJ3DoVj0 + ziSuenf8 - (137 - 136));
                *(h1eJ3DoVj0 + ziSuenf8 - (578 - 577)) = *(h1eJ3DoVj0 + oy5iMH9 - (157 - 156));
                *(h1eJ3DoVj0 + oy5iMH9 - (323 - 322)) = XScrGZxXv1b5;
            };
        };
    }
    {
        int ziSuenf8;
        ziSuenf8 = (953 - 952);
        while (ziSuenf8 <= VfFYDJ -(372 - 371)) {
            for (int oy5iMH9 = ziSuenf8 + (851 - 850);
            oy5iMH9 <= VfFYDJ; oy5iMH9++) {
                if (*(TjDQzKr +ziSuenf8 - (684 - 683)) > *(TjDQzKr +oy5iMH9 - (51 - 50))) {
                    int XScrGZxXv1b5 = *(TjDQzKr +ziSuenf8 - 1);
                    *(TjDQzKr +ziSuenf8 - 1) = *(TjDQzKr +oy5iMH9 - 1);
                    *(TjDQzKr +oy5iMH9 - 1) = XScrGZxXv1b5;
                };
            }
            ziSuenf8 = ziSuenf8 + 1;
        };
    };
}

void  combine () {
    DsaQCmdL = N1 +VfFYDJ;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int ziSuenf8 = (292 - 292);
    ziSuenf8 <= N1 -1; ziSuenf8 = ziSuenf8 + 1) {
        *(WCsMceA9dwvN +ziSuenf8) = *(h1eJ3DoVj0 + ziSuenf8);
    }
    for (int ziSuenf8 = (312 - 312);
    ziSuenf8 <= VfFYDJ -1; ziSuenf8 = ziSuenf8 + 1) {
        *(WCsMceA9dwvN +N1+ziSuenf8) = *(TjDQzKr +ziSuenf8);
    };
}

void  iOH98V2d () {
    printf ("%d", *WCsMceA9dwvN);
    for (int ziSuenf8 = 1;
    ziSuenf8 <= DsaQCmdL -1; ziSuenf8++) {
        printf (" %d", *(WCsMceA9dwvN +ziSuenf8));
    };
}

void  nGSVkKo () {
    printf ("%d", *h1eJ3DoVj0);
    {
        int ziSuenf8 = 1;
        while (ziSuenf8 <= N1 -1) {
            printf (" %d", *(h1eJ3DoVj0 + ziSuenf8));
            ziSuenf8++;
        };
    }
    for (int ziSuenf8 = 0;
    ziSuenf8 <= VfFYDJ -1; ziSuenf8++) {
        printf (" %d", *(TjDQzKr +ziSuenf8));
    };
}

int main () {
    n1ljtL ();
    NfJ6hTy1lRI ();
    combine ();
    iOH98V2d ();
}

