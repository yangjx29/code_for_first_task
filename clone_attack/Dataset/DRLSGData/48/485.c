void  nextday (int JFUo8me2 [(806 - 795)] [(280 - 269)], int b [(152 - 141)] [(657 - 646)]) {
    int buZ0P63;
    int IhO8Hk91;
    {
        buZ0P63 = 171 - 170;
        while (buZ0P63 <= (934 - 925)) {
            for (IhO8Hk91 = (502 - 501); IhO8Hk91 <= (730 - 721); IhO8Hk91++)
                b[buZ0P63][IhO8Hk91] = (771 - 771);
            buZ0P63 = buZ0P63 + 1;
        }
    }
    for (buZ0P63 = (56 - 55); buZ0P63 <= (828 - 819); buZ0P63++) {
        IhO8Hk91 = (695 - 694);
        while (IhO8Hk91 <= (281 - 272)) {
            b[buZ0P63][IhO8Hk91] = b[buZ0P63][IhO8Hk91] + JFUo8me2[buZ0P63][IhO8Hk91] * (218 - 216);
            b[buZ0P63 + (956 - 955)][IhO8Hk91] += JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63 - (403 - 402)][IhO8Hk91] = b[buZ0P63 - (200 - 199)][IhO8Hk91] + JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63 + (995 - 994)][IhO8Hk91 +(301 - 300)] += JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63 + (737 - 736)][IhO8Hk91 -(736 - 735)] = b[buZ0P63 + (997 - 996)][IhO8Hk91 -(496 - 495)] + JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63 - 1][IhO8Hk91 +1] += JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63 - 1][IhO8Hk91 -1] += JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63][IhO8Hk91 +1] += JFUo8me2[buZ0P63][IhO8Hk91];
            b[buZ0P63][IhO8Hk91 -1] += JFUo8me2[buZ0P63][IhO8Hk91];
            IhO8Hk91 = IhO8Hk91 +1;
        }
    }
}

void  printarray (int JFUo8me2 [(34 - 23)] [(304 - 293)]) {
    int buZ0P63;
    int IhO8Hk91;
    for (buZ0P63 = 1; buZ0P63 <= (619 - 610); buZ0P63++) {
        IhO8Hk91 = 1;
        while (IhO8Hk91 <= 9) {
            printf ("%d", JFUo8me2[buZ0P63][IhO8Hk91]);
            if (IhO8Hk91 != 9)
                printf (" ");
            else
                printf ("\n");
            IhO8Hk91 = IhO8Hk91 +1;
        }
    }
}

int main () {
    int b [11] [11] = {(477 - 477)};
    int IIB7yF1lZkG;
    int grBi7I;
    int buZ0P63;
    int JFUo8me2 [(861 - 850)] [(435 - 424)] = {(241 - 241)};
    scanf ("%d %d", &IIB7yF1lZkG, &grBi7I);
    JFUo8me2[(130 - 125)][5] = IIB7yF1lZkG;
    for (buZ0P63 = (386 - 386); buZ0P63 <= grBi7I; buZ0P63++) {
        if (buZ0P63 % 2 == (852 - 852))
            nextday (JFUo8me2, b);
        else
            nextday (b, JFUo8me2);
    }
    if (buZ0P63 % 2 == (729 - 729))
        printarray (b);
    else
        printarray (JFUo8me2);
}

