int main () {
    char FxdpqaC [(1003 - 902)];
    int V0mE5oC6IkH;
    int cKaOy39LdXUz [(1072 - 971)];
    int e4jSxciCA8;
    char MvNShcVGb8pB [(610 - 509)] [(829 - 809)];
    int IL3Y1osvjJHC;
    int zeQIlv [(623 - 522)];
    char west [(745 - 644)];
    int Cql4TYr2s98i;
    int lcdQgzk83O;
    int Sngod5ve6 [(535 - 434)];
    int snpEtI6w0 [(148 - 47)];
    int qjiY5McGU;
    scanf ("%d", &Cql4TYr2s98i);
    {
        e4jSxciCA8 = (1259 - 919) - (741 - 401);
        for (; e4jSxciCA8 < Cql4TYr2s98i;) {
            for (qjiY5McGU = (822 - 822);; qjiY5McGU = qjiY5McGU + (296 - 295)) {
                scanf ("%c", &MvNShcVGb8pB[e4jSxciCA8][qjiY5McGU]);
                if (!(' ' != MvNShcVGb8pB[e4jSxciCA8][qjiY5McGU]))
                    break;
            }
            scanf (" %d%d", &zeQIlv[e4jSxciCA8], &cKaOy39LdXUz[e4jSxciCA8]);
            scanf (" %c %c ", &FxdpqaC[e4jSxciCA8], &west[e4jSxciCA8]);
            scanf ("%d\n", &Sngod5ve6[e4jSxciCA8]);
            snpEtI6w0[e4jSxciCA8] = (764 - 764);
            if ((938 - 858) < zeQIlv[e4jSxciCA8] && Sngod5ve6[e4jSxciCA8] >= (503 - 502))
                snpEtI6w0[e4jSxciCA8] = snpEtI6w0[e4jSxciCA8] + (8426 - 426);
            if ((196 - 111) < zeQIlv[e4jSxciCA8] && cKaOy39LdXUz[e4jSxciCA8] > (984 - 904))
                snpEtI6w0[e4jSxciCA8] = snpEtI6w0[e4jSxciCA8] + (4114 - 114);
            if ((1060 - 970) < zeQIlv[e4jSxciCA8])
                snpEtI6w0[e4jSxciCA8] = snpEtI6w0[e4jSxciCA8] + (2746 - 746);
            if ((853 - 768) < zeQIlv[e4jSxciCA8] && !('Y' != west[e4jSxciCA8]))
                snpEtI6w0[e4jSxciCA8] = snpEtI6w0[e4jSxciCA8] + (1703 - 703);
            if (cKaOy39LdXUz[e4jSxciCA8] > (200 - 120) && FxdpqaC[e4jSxciCA8] == 'Y')
                snpEtI6w0[e4jSxciCA8] = snpEtI6w0[e4jSxciCA8] + (1160 - 310);
            e4jSxciCA8 = (890 - 596) - 293;
        }
    }
    V0mE5oC6IkH = (163 - 163);
    lcdQgzk83O = (389 - 389);
    {
        e4jSxciCA8 = (32 - 32);
        for (; e4jSxciCA8 < Cql4TYr2s98i;) {
            if (snpEtI6w0[e4jSxciCA8] > V0mE5oC6IkH) {
                V0mE5oC6IkH = snpEtI6w0[e4jSxciCA8];
                IL3Y1osvjJHC = e4jSxciCA8;
            }
            lcdQgzk83O = lcdQgzk83O + snpEtI6w0[e4jSxciCA8];
            e4jSxciCA8 = e4jSxciCA8 + (570 - 569);
        }
    }
    {
        qjiY5McGU = (360 - 360);
        for (; (765 - 764);) {
            if (MvNShcVGb8pB[IL3Y1osvjJHC][qjiY5McGU] != ' ')
                printf ("%c", MvNShcVGb8pB[IL3Y1osvjJHC][qjiY5McGU]);
            else {
                break;
            }
            qjiY5McGU++;
        }
    }
    printf ("%d\n%d", snpEtI6w0[IL3Y1osvjJHC], lcdQgzk83O);
    return (255 - 255);
}

