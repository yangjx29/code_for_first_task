int main () {
    int hxyQuOvM9aF, smubMLgD, pcPWfQq, dTY4Z1O0, XCIAHEi, l5PhZjcTt3SD;
    char rdqyvDCF [100] [100];
    char N5HocqOZ4 [100] [100];
    char s [100];
    gets (s);
    l5PhZjcTt3SD = 0;
    hxyQuOvM9aF = strlen (s);
    dTY4Z1O0 = 0;
    pcPWfQq = 0;
    XCIAHEi = 0;
    {
        smubMLgD = 0;
        while (smubMLgD < hxyQuOvM9aF) {
            if (s[smubMLgD] != ' ')
                N5HocqOZ4[l5PhZjcTt3SD][pcPWfQq++] = s[smubMLgD];
            else {
                N5HocqOZ4[l5PhZjcTt3SD][pcPWfQq] = '\0';
                pcPWfQq = 0;
                while (s[smubMLgD] == ' ') {
                    rdqyvDCF[XCIAHEi][dTY4Z1O0++] = s[smubMLgD];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    smubMLgD++;
                }
                rdqyvDCF[XCIAHEi][dTY4Z1O0++] = '\0';
                XCIAHEi = XCIAHEi +1;
                dTY4Z1O0 = 0;
                l5PhZjcTt3SD++;
                smubMLgD = smubMLgD - 1;
            }
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
            smubMLgD++;
        };
    }
    {
        smubMLgD = l5PhZjcTt3SD;
        while (smubMLgD >= 0) {
            printf ("%s", N5HocqOZ4[smubMLgD]);
            if (smubMLgD != 0)
                printf ("%s", rdqyvDCF[smubMLgD - 1]);
            smubMLgD--;
        };
    }
    return 0;
}

