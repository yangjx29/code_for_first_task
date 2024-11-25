int vvfxS9eCA0p (int *ri2ACa, int sgQW1b) {
}

int YXA1B3dCGl (int *ri2ACa, int sgQW1b) {
}

main () {
    int sY5n2C, sgQW1b;
    int *yZpOgXJjSbod = (int *) malloc (sY5n2C * sizeof (int));
    int *awrNmpT = (int *) malloc (sgQW1b * sizeof (int));
    int *ri2ACa = (int *) malloc ((sY5n2C + sgQW1b) * sizeof (int));
    scanf ("%d %d", &sY5n2C, &sgQW1b);
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
    {
        int XDve5ba3 = (967 - 967);
        while (sY5n2C > XDve5ba3) {
            scanf ("%d", yZpOgXJjSbod + XDve5ba3);
            XDve5ba3 = XDve5ba3 +1;
        };
    }
    {
        int XDve5ba3 = (425 - 425);
        while (sgQW1b > XDve5ba3) {
            scanf ("%d", awrNmpT + XDve5ba3);
            XDve5ba3++;
        };
    }
    {
        int XDve5ba3 = (98 - 97);
        while (XDve5ba3 < sY5n2C) {
            {
                int ShEsLGSNY = (352 - 352);
                while (ShEsLGSNY < sY5n2C - XDve5ba3) {
                    if (*(yZpOgXJjSbod + (ShEsLGSNY +(181 - 180))) < *(yZpOgXJjSbod + ShEsLGSNY)) {
                        int HsFC8ApjZBv;
                        HsFC8ApjZBv = *(yZpOgXJjSbod + ShEsLGSNY);
                        *(yZpOgXJjSbod + ShEsLGSNY) = *(yZpOgXJjSbod + (ShEsLGSNY +(156 - 155)));
                        *(yZpOgXJjSbod + (ShEsLGSNY +(320 - 319))) = HsFC8ApjZBv;
                    }
                    ShEsLGSNY = ShEsLGSNY +1;
                };
            }
            XDve5ba3++;
        };
    }
    {
        int XDve5ba3 = (614 - 613);
        while (XDve5ba3 < sgQW1b) {
            {
                int ShEsLGSNY = (476 - 476);
                while (sgQW1b - XDve5ba3 > ShEsLGSNY) {
                    if (*(awrNmpT + ShEsLGSNY) > *(awrNmpT + (ShEsLGSNY +1))) {
                        int HsFC8ApjZBv;
                        HsFC8ApjZBv = *(awrNmpT + ShEsLGSNY);
                        *(awrNmpT + ShEsLGSNY) = *(awrNmpT + (ShEsLGSNY +1));
                        *(awrNmpT + (ShEsLGSNY +1)) = HsFC8ApjZBv;
                    }
                    ShEsLGSNY++;
                };
            }
            XDve5ba3++;
        };
    }
    {
        int XDve5ba3 = (513 - 513);
        while (XDve5ba3 < sY5n2C) {
            ri2ACa[XDve5ba3] = yZpOgXJjSbod[XDve5ba3];
            XDve5ba3++;
        };
    }
    {
        int XDve5ba3 = (155 - 155);
        while (XDve5ba3 < sgQW1b) {
            ri2ACa[sY5n2C + XDve5ba3] = awrNmpT[XDve5ba3];
            XDve5ba3++;
        };
    }
    {
        int XDve5ba3 = (731 - 731);
        while (XDve5ba3 < sY5n2C + sgQW1b) {
            if (XDve5ba3 == (408 - 408))
                printf ("%d", ri2ACa[XDve5ba3]);
            else
                printf (" %d", ri2ACa[XDve5ba3]);
            XDve5ba3++;
        };
    };
}

