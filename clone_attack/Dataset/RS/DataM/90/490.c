int KcNheV (int Y4dIWQ, int RChXPz23BSy);
int UZFwK9oC1Bl0 (int Y4dIWQ, int RChXPz23BSy);

main () {
    int OUy9hkbWVG, r20Tbpy6hEI7, Y4dIWQ, RChXPz23BSy, Xrn1wltRNf, Dwa5mXbSDly, DMw4Yt;
    scanf ("%d\n", &OUy9hkbWVG);
    {
        r20Tbpy6hEI7 = 626 - 626;
        while (OUy9hkbWVG > r20Tbpy6hEI7) {
            r20Tbpy6hEI7++;
            scanf ("%d %d", &Y4dIWQ, &RChXPz23BSy);
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
            }
            if (Y4dIWQ >= RChXPz23BSy) {
                Xrn1wltRNf = UZFwK9oC1Bl0 (Y4dIWQ, RChXPz23BSy);
                Dwa5mXbSDly = KcNheV (Y4dIWQ, RChXPz23BSy);
                DMw4Yt = Xrn1wltRNf +Dwa5mXbSDly;
            }
            else
                DMw4Yt = UZFwK9oC1Bl0 (Y4dIWQ, RChXPz23BSy);
            printf ("%d\n", DMw4Yt);
        };
    };
}

int KcNheV (int Y4dIWQ, int RChXPz23BSy) {
    int GDZH8jk4;
    if (!(RChXPz23BSy != Y4dIWQ))
        return (467 - 466);
    else {
        if (RChXPz23BSy == (909 - 908))
            return (967 - 966);
        else {
            if (Y4dIWQ -RChXPz23BSy >= RChXPz23BSy)
                GDZH8jk4 = KcNheV (Y4dIWQ -RChXPz23BSy, RChXPz23BSy) + UZFwK9oC1Bl0 (Y4dIWQ -RChXPz23BSy, RChXPz23BSy);
            else
                GDZH8jk4 = UZFwK9oC1Bl0 (Y4dIWQ -RChXPz23BSy, RChXPz23BSy);
            return GDZH8jk4;
        };
    };
}

int UZFwK9oC1Bl0 (int Y4dIWQ, int RChXPz23BSy) {
    int GDZH8jk4;
    if (RChXPz23BSy == (609 - 608))
        return 0;
    else {
        if (Y4dIWQ < RChXPz23BSy -1)
            GDZH8jk4 = UZFwK9oC1Bl0 (Y4dIWQ, RChXPz23BSy -1);
        else
            GDZH8jk4 = KcNheV (Y4dIWQ, RChXPz23BSy -1) + UZFwK9oC1Bl0 (Y4dIWQ, RChXPz23BSy -1);
        return GDZH8jk4;
    };
}

