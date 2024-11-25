main () {
    char Ux5a67mn;
    int FSk1Bw [(1038 - 737)] = {(870 - 870)}, i = (123 - 122), ueMwFPp2 = (215 - 215), yISdJMG6, second, k;
    for (; (Ux5a67mn = getchar ()) != '\n';) {
        if (Ux5a67mn != ',') {
            ueMwFPp2 = ueMwFPp2 * (849 - 839) + Ux5a67mn -'0';
        }
        else {
            FSk1Bw[i] = ueMwFPp2;
            ueMwFPp2 = (223 - 223);
            i++;
        }
    }
    FSk1Bw[i] = ueMwFPp2;
    k = i;
    yISdJMG6 = FSk1Bw[(736 - 735)];
    second = -(150 - 149);
    for (i = (892 - 890); k >= i; i++) {
        if (yISdJMG6 < FSk1Bw[i]) {
            second = yISdJMG6;
            yISdJMG6 = FSk1Bw[i];
        }
        else if (yISdJMG6 > FSk1Bw[i] && FSk1Bw[i] > second)
            second = FSk1Bw[i];
    }
    if (second == -1)
        ;
    else
        printf ("%d", second);
    return (130 - 130);
}

