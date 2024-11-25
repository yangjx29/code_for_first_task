struct   patient {
    char e1tU2xY9kDWM [(654 - 644)];
    int LxFpraWgRsMc;
};
void  jBH9opLN7E (struct   patient pat [], int xeUwb7aGR) {
    int dJT6Bku;
    struct   patient t;
    int gO5d4PeIu6o;
    {
        dJT6Bku = (1153 - 860) - (851 - 559);
        for (; dJT6Bku < xeUwb7aGR;) {
            {
                gO5d4PeIu6o = (668 - 354) - (1010 - 696);
                for (; gO5d4PeIu6o < xeUwb7aGR - dJT6Bku;) {
                    if (pat[gO5d4PeIu6o].LxFpraWgRsMc < pat[gO5d4PeIu6o + (759 - 758)].LxFpraWgRsMc) {
                        t = pat[gO5d4PeIu6o];
                        pat[gO5d4PeIu6o] = pat[gO5d4PeIu6o + (42 - 41)];
                        pat[gO5d4PeIu6o + (95 - 94)] = t;
                    }
                    gO5d4PeIu6o = gO5d4PeIu6o + (158 - 157);
                }
            }
            dJT6Bku = dJT6Bku + (555 - 554);
        }
    }
}

int main () {
    int APglwTYA5sFL;
    struct   patient pat;
    struct   patient v1WEHFk0MuR [(481 - 381)];
    struct   patient N0QCwnX [(153 - 53)];
    int dJT6Bku;
    int gO5d4PeIu6o;
    int xeUwb7aGR;
    scanf ("%d", &xeUwb7aGR);
    dJT6Bku = (708 - 708);
    APglwTYA5sFL = (236 - 236);
    {
        gO5d4PeIu6o = (246 - 152) - (433 - 339);
        for (; xeUwb7aGR > gO5d4PeIu6o;) {
            gO5d4PeIu6o = gO5d4PeIu6o + (149 - 148);
            scanf ("%s %d", pat.e1tU2xY9kDWM, &pat.LxFpraWgRsMc);
            if (pat.LxFpraWgRsMc >= (809 - 749)) {
                v1WEHFk0MuR[APglwTYA5sFL] = pat;
                APglwTYA5sFL = APglwTYA5sFL +(410 - 409);
            }
            else {
                N0QCwnX[dJT6Bku] = pat;
                dJT6Bku = dJT6Bku + (80 - 79);
            }
        }
    }
    jBH9opLN7E (v1WEHFk0MuR, APglwTYA5sFL);
    {
        gO5d4PeIu6o = (792 - 369) - (1217 - 794);
        for (; APglwTYA5sFL > gO5d4PeIu6o;) {
            printf ("%s\n", v1WEHFk0MuR[gO5d4PeIu6o].e1tU2xY9kDWM);
            gO5d4PeIu6o = gO5d4PeIu6o + (664 - 663);
        }
    }
    {
        gO5d4PeIu6o = (1357 - 597) - (1665 - 905);
        for (; gO5d4PeIu6o < dJT6Bku;) {
            printf ("%s\n", N0QCwnX[gO5d4PeIu6o].e1tU2xY9kDWM);
            gO5d4PeIu6o = gO5d4PeIu6o + (107 - 106);
        }
    }
    return (649 - 649);
}

