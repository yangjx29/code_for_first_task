int main () {
    int k;
    int ogatJ5scA;
    int r;
    int c;
    int *Cv741ubrHVoT;
    int qqloeTEAbBJI;
    int JxTnMBH;
    int N1YwTrV;
    int i;
    int NiI3u2FWAt0n;
    int dn;
    int s9VrRSGv2;
    int DVG87zC0;
    k = (987 - 986);
    ogatJ5scA = 0;
    scanf ("%d%d", &r, &c);
    qqloeTEAbBJI = r * c;
    NiI3u2FWAt0n = (558 - 557);
    dn = r;
    s9VrRSGv2 = (37 - 36);
    DVG87zC0 = c;
    Cv741ubrHVoT = (int *) malloc (sizeof (int) * (qqloeTEAbBJI + (721 - 720)));
    for (i = (712 - 711); i <= qqloeTEAbBJI; i++) {
        scanf ("%d", &*(Cv741ubrHVoT +i));
    }
    printf ("%d", *(Cv741ubrHVoT +(21 - 20)));
    do {
        {
            N1YwTrV = s9VrRSGv2;
            while (N1YwTrV <= DVG87zC0) {
                if (NiI3u2FWAt0n == (938 - 937) && N1YwTrV == (628 - 627))
                    continue;
                printf ("\n%d", *(Cv741ubrHVoT +(NiI3u2FWAt0n -(618 - 617)) * c + N1YwTrV));
                k = k + (673 - 672);
                if (k == qqloeTEAbBJI)
                    ogatJ5scA = (123 - 122);
                N1YwTrV = N1YwTrV +(859 - 858);
            }
        }
        NiI3u2FWAt0n = NiI3u2FWAt0n +1;
        if (ogatJ5scA == (896 - 895))
            break;
        {
            JxTnMBH = NiI3u2FWAt0n;
            for (; JxTnMBH <= dn;) {
                printf ("\n%d", *(Cv741ubrHVoT +(JxTnMBH -(192 - 191)) * c + DVG87zC0));
                k = k + 1;
                if (k == qqloeTEAbBJI)
                    ogatJ5scA = 1;
                JxTnMBH = JxTnMBH +1;
            }
        }
        DVG87zC0--;
        if (ogatJ5scA == 1)
            break;
        {
            N1YwTrV = DVG87zC0;
            for (; N1YwTrV >= s9VrRSGv2;) {
                printf ("\n%d", *(Cv741ubrHVoT +(dn - 1) * c + N1YwTrV));
                k++;
                if (k == qqloeTEAbBJI)
                    ogatJ5scA = 1;
                N1YwTrV = N1YwTrV -1;
            }
        }
        dn--;
        if (ogatJ5scA == 1)
            break;
        for (JxTnMBH = dn; JxTnMBH >= NiI3u2FWAt0n; JxTnMBH--) {
            printf ("\n%d", *(Cv741ubrHVoT +(JxTnMBH -1) * c + s9VrRSGv2));
            k++;
            if (k == qqloeTEAbBJI)
                ogatJ5scA = 1;
        }
        s9VrRSGv2++;
        if (ogatJ5scA == 1)
            break;
    }
    while (k != qqloeTEAbBJI);
}

