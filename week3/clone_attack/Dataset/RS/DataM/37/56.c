main () {
    int d25049Gi, pbrjX1ZwpSg4, whCml9t, z4r7mfTK, FM4fSaN, CwGtNs;
    char q0fJnE98P [(600 - 590)] [(100383 - 383)] = {'\0'};
    scanf ("%d", &d25049Gi);
    {
        pbrjX1ZwpSg4 = 820 - 820;
        while (pbrjX1ZwpSg4 < d25049Gi) {
            scanf ("%s", q0fJnE98P[pbrjX1ZwpSg4]);
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
            pbrjX1ZwpSg4++;
        };
    }
    for (FM4fSaN = 0; d25049Gi > FM4fSaN; FM4fSaN++) {
        CwGtNs = strlen (q0fJnE98P[FM4fSaN]);
        for (pbrjX1ZwpSg4 = 0; CwGtNs > pbrjX1ZwpSg4; pbrjX1ZwpSg4++) {
            z4r7mfTK = 1;
            {
                whCml9t = 0;
                while (CwGtNs > whCml9t) {
                    if (q0fJnE98P[FM4fSaN][pbrjX1ZwpSg4] != q0fJnE98P[FM4fSaN][whCml9t])
                        z4r7mfTK++;
                    whCml9t++;
                };
            }
            if (z4r7mfTK == CwGtNs) {
                printf ("%c\n", q0fJnE98P[FM4fSaN][pbrjX1ZwpSg4]);
                break;
            };
        }
        if (pbrjX1ZwpSg4 == CwGtNs)
            ;
    };
}

