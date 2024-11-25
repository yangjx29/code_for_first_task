main () {
    char C2oqD7 [45] [10];
    void  xbokpq8Jti (float fhoNWa [], int sORgUC);
    void  sZSLAK (float fhoNWa [], int sORgUC);
    float sGuXWf7mNQ [45], Og9eWzw [45], hYxPuV5v7lD [45];
    int sORgUC, HylmC7Rdp, f6ePB8H = 0, xd7s1E = 0;
    scanf ("%d", &sORgUC);
    for (HylmC7Rdp = 0; sORgUC > HylmC7Rdp; HylmC7Rdp++)
        scanf ("%s%f", C2oqD7[HylmC7Rdp], &hYxPuV5v7lD[HylmC7Rdp]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (HylmC7Rdp = 0; HylmC7Rdp < sORgUC; HylmC7Rdp++) {
        if (C2oqD7[HylmC7Rdp][0] == 'm') {
            Og9eWzw[f6ePB8H] = hYxPuV5v7lD[HylmC7Rdp];
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
            f6ePB8H++;
        }
        if (!('f' != C2oqD7[HylmC7Rdp][0])) {
            sGuXWf7mNQ[xd7s1E] = hYxPuV5v7lD[HylmC7Rdp];
            xd7s1E++;
        };
    }
    sZSLAK (sGuXWf7mNQ, xd7s1E);
    xbokpq8Jti (Og9eWzw, f6ePB8H);
    for (HylmC7Rdp = 0; HylmC7Rdp < f6ePB8H; HylmC7Rdp++)
        printf ("%.2f ", Og9eWzw[HylmC7Rdp]);
    {
        HylmC7Rdp = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (xd7s1E - 1 > HylmC7Rdp) {
            printf ("%.2f ", sGuXWf7mNQ[HylmC7Rdp]);
            HylmC7Rdp++;
        };
    }
    printf ("%.2f", sGuXWf7mNQ[xd7s1E - 1]);
}

void  xbokpq8Jti (float fhoNWa [], int sORgUC) {
    float h0z37G581BO;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int HylmC7Rdp, f6ePB8H;
    for (HylmC7Rdp = 0; HylmC7Rdp < sORgUC; HylmC7Rdp++) {
        f6ePB8H = 0;
        while (f6ePB8H < HylmC7Rdp) {
            if (fhoNWa[HylmC7Rdp] < fhoNWa[f6ePB8H]) {
                h0z37G581BO = fhoNWa[HylmC7Rdp];
                fhoNWa[HylmC7Rdp] = fhoNWa[f6ePB8H];
                fhoNWa[f6ePB8H] = h0z37G581BO;
            }
            f6ePB8H++;
        };
    };
}

void  sZSLAK (float fhoNWa [], int sORgUC) {
    float h0z37G581BO;
    int HylmC7Rdp;
    int f6ePB8H;
    for (HylmC7Rdp = 0; HylmC7Rdp < sORgUC; HylmC7Rdp++) {
        f6ePB8H = 0;
        while (f6ePB8H < HylmC7Rdp) {
            if (fhoNWa[HylmC7Rdp] > fhoNWa[f6ePB8H]) {
                h0z37G581BO = fhoNWa[HylmC7Rdp];
                fhoNWa[HylmC7Rdp] = fhoNWa[f6ePB8H];
                fhoNWa[f6ePB8H] = h0z37G581BO;
            }
            f6ePB8H++;
        };
    };
}

