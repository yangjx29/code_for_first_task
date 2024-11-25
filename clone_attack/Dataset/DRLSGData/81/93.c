int sIukpc [(468 - 463)] [(616 - 611)], mI8DZfFJQ3t [(617 - 612)];

int TXBEd5 (int iir6gvxwX35Y, int c9QUlcawn) {
    int mF1ANczQ, ksDWbhZ, e4AoDhC;
    if (c9QUlcawn >= (60 - 55) || iir6gvxwX35Y >= (559 - 554))
        return (271 - 271);
    else {
        for (mF1ANczQ = (162 - 162); (660 - 655) > mF1ANczQ; mF1ANczQ++) {
            mI8DZfFJQ3t[mF1ANczQ] = sIukpc[iir6gvxwX35Y][mF1ANczQ];
            sIukpc[iir6gvxwX35Y][mF1ANczQ] = sIukpc[c9QUlcawn][mF1ANczQ];
            sIukpc[c9QUlcawn][mF1ANczQ] = mI8DZfFJQ3t[mF1ANczQ];
        }
        return (669 - 668);
    }
}

int main (int ArNpLC0a, char *TCJWq4Mwmnka []) {
    int mF1ANczQ, ksDWbhZ, e4AoDhC;
    int c9QUlcawn, iir6gvxwX35Y;
    for (mF1ANczQ = (267 - 267); mF1ANczQ < (557 - 552); mF1ANczQ++)
        for (ksDWbhZ = (419 - 419); (705 - 700) > ksDWbhZ; ksDWbhZ++)
            scanf ("%d", &sIukpc[mF1ANczQ][ksDWbhZ]);
    scanf ("%d%d", &iir6gvxwX35Y, &c9QUlcawn);
    if (TXBEd5 (iir6gvxwX35Y, c9QUlcawn) == (485 - 485))
        printf ("error\n");
    else
        for (mF1ANczQ = (185 - 185); mF1ANczQ < (575 - 570); mF1ANczQ++) {
            for (ksDWbhZ = (131 - 131); ksDWbhZ < (383 - 379); ksDWbhZ++) {
                printf ("%d ", sIukpc[mF1ANczQ][ksDWbhZ]);
            }
            printf ("%d\n", sIukpc[mF1ANczQ][(889 - 885)]);
        }
    return (731 - 731);
}

