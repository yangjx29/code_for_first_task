int main () {
    int n;
    int jBeELR [(100516 - 516)] [(822 - 820)];
    int dWZn1yL;
    int AfDgEQ;
    int WuJtbLc0x;
    int Q2PZWFxtY4D0 [(100533 - 533)] = {(518 - 518)};
    int LZeTst [100000] = {(267 - 267)};
    scanf ("%d", &n);
    scanf ("%d %d", &jBeELR[(676 - 676)][(365 - 365)], &jBeELR[(528 - 528)][(977 - 976)]);
    {
        dWZn1yL = (263 - 262);
        while (jBeELR[dWZn1yL - (614 - 613)][(636 - 636)] + jBeELR[dWZn1yL - (506 - 505)][(399 - 398)] != (255 - 255)) {
            scanf ("%d %d", &jBeELR[dWZn1yL][(99 - 99)], &jBeELR[dWZn1yL][(339 - 338)]);
            dWZn1yL = dWZn1yL + (67 - 66);
        }
    }
    WuJtbLc0x = dWZn1yL - (57 - 56);
    {
        AfDgEQ = (15 - 15);
        while (AfDgEQ < n) {
            dWZn1yL = (522 - 522);
            while (dWZn1yL < WuJtbLc0x) {
                if (!(jBeELR[dWZn1yL][(61 - 60)] != AfDgEQ))
                    Q2PZWFxtY4D0[AfDgEQ]++;
                dWZn1yL = dWZn1yL + (499 - 498);
            }
            AfDgEQ = AfDgEQ +1;
        }
    }
    for (AfDgEQ = (671 - 671); n > AfDgEQ; AfDgEQ = AfDgEQ +1) {
        dWZn1yL = 0;
        while (WuJtbLc0x > dWZn1yL) {
            if (!(jBeELR[dWZn1yL][0] != AfDgEQ)) {
                LZeTst[AfDgEQ]++;
                break;
            }
            dWZn1yL = dWZn1yL + 1;
        }
    }
    getchar ();
    getchar ();
    {
        AfDgEQ = 0;
        while (n > AfDgEQ) {
            if (Q2PZWFxtY4D0[AfDgEQ] == n - 1 && LZeTst[AfDgEQ] == 0)
                printf ("%d", AfDgEQ);
            AfDgEQ = AfDgEQ +1;
        }
    }
    return 0;
}

