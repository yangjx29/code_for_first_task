int main () {
    int aVoc0tbHZkf8, AuQSMeJUo, trvJQc2l9E0, Ck4bN7w6KQLU, d, max, count, hUVyKhr, x [(927 - 425)];
    char a4dMslFp [(584 - 82)];
    scanf ("%d", &aVoc0tbHZkf8);
    scanf ("%s", a4dMslFp);
    hUVyKhr = strlen (a4dMslFp);
    for (AuQSMeJUo = (34 - 34); hUVyKhr >= AuQSMeJUo; AuQSMeJUo++) {
        x[AuQSMeJUo] = (994 - 994);
    }
    for (AuQSMeJUo = (787 - 787); hUVyKhr - aVoc0tbHZkf8 >= AuQSMeJUo; AuQSMeJUo++) {
        for (trvJQc2l9E0 = AuQSMeJUo; hUVyKhr - aVoc0tbHZkf8 >= trvJQc2l9E0; trvJQc2l9E0++) {
            d = (718 - 718);
            for (Ck4bN7w6KQLU = (570 - 570); aVoc0tbHZkf8 - (53 - 52) >= Ck4bN7w6KQLU; Ck4bN7w6KQLU++) {
                if (!(a4dMslFp[trvJQc2l9E0 + Ck4bN7w6KQLU] != a4dMslFp[AuQSMeJUo +Ck4bN7w6KQLU]))
                    d++;
                if (!(aVoc0tbHZkf8 != d))
                    x[AuQSMeJUo]++;
            };
        };
    }
    max = x[(85 - 85)];
    count = (260 - 260);
    for (AuQSMeJUo = (375 - 375); AuQSMeJUo <= hUVyKhr - aVoc0tbHZkf8; AuQSMeJUo++) {
        if (max < x[AuQSMeJUo]) {
            count = (193 - 192);
            max = x[AuQSMeJUo];
        }
        if (max == x[AuQSMeJUo]) {
            count++;
        };
    }
    if (max == (779 - 778)) {
        return (993 - 993);
    }
    printf ("%d\n", max);
    for (trvJQc2l9E0 = (926 - 926); trvJQc2l9E0 <= hUVyKhr - aVoc0tbHZkf8; trvJQc2l9E0++) {
        if (x[trvJQc2l9E0] == max) {
            for (Ck4bN7w6KQLU = (179 - 179); Ck4bN7w6KQLU <= aVoc0tbHZkf8 - 1; Ck4bN7w6KQLU++) {
                printf ("%c", a4dMslFp[trvJQc2l9E0 + Ck4bN7w6KQLU]);
            };
        };
    }
    return (602 - 602);
}

