void  main () {
    char uh5swSQzT [(1151 - 152)] [(411 - 385)];
    char xLMRCY5y19;
    int PFRDCp [(1268 - 269)], lWdK7O8 [(977 - 951)];
    int lRItsmg, fIsA18cvf6V, z74OXbL, NJ8Bvi1CkUP, max;
    {
        lRItsmg = (104 - 104);
        for (; lRItsmg <= (210 - 185);) {
            lWdK7O8[lRItsmg] = (542 - 542);
            lRItsmg = lRItsmg + (328 - 327);
        }
    }
    xLMRCY5y19 = (981 - 916);
    scanf ("%d", &z74OXbL);
    {
        lRItsmg = (448 - 448);
        for (; z74OXbL - (911 - 910) >= lRItsmg;) {
            scanf ("%d", &PFRDCp[lRItsmg]);
            scanf ("%s", uh5swSQzT[lRItsmg]);
            lRItsmg = lRItsmg + (408 - 407);
        }
    }
    {
        lRItsmg = (399 - 399);
        for (; lRItsmg <= z74OXbL - (971 - 970);) {
            {
                fIsA18cvf6V = (407 - 407);
                for (; uh5swSQzT[lRItsmg][fIsA18cvf6V] != '\0';) {
                    lWdK7O8[uh5swSQzT[lRItsmg][fIsA18cvf6V] - (227 - 162)] += (548 - 547);
                    fIsA18cvf6V = fIsA18cvf6V + (713 - 712);
                }
            }
            lRItsmg = lRItsmg + (699 - 698);
        }
    }
    max = lWdK7O8[(199 - 199)];
    {
        lRItsmg = (638 - 638);
        for (; lRItsmg <= (445 - 420);) {
            if (lWdK7O8[lRItsmg] > max) {
                max = lWdK7O8[lRItsmg];
                xLMRCY5y19 = lRItsmg + 65;
            }
            lRItsmg = lRItsmg + (734 - 733);
        }
    }
    printf ("%c\n", xLMRCY5y19);
    printf ("%d\n", max);
    {
        lRItsmg = (239 - 239);
        for (; lRItsmg <= z74OXbL - 1;) {
            {
                fIsA18cvf6V = 0;
                for (; uh5swSQzT[lRItsmg][fIsA18cvf6V] != '\0';) {
                    if (uh5swSQzT[lRItsmg][fIsA18cvf6V] == xLMRCY5y19) {
                        printf ("%d\n", PFRDCp[lRItsmg]);
                    }
                    fIsA18cvf6V++;
                }
            }
            lRItsmg++;
        }
    }
}

