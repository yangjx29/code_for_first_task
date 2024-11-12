int main (int sYIxbm, char *R4DkFTUQ6 []) {
    char Sc9Qnw [(505 - 254)] = {'0'};
    gets (Sc9Qnw);
    char pzT59l2OD [260] = {'0'};
    int xbrNmzB, E86YlIFq, qaMgDsvj, WMYnwfm4zN, Eawy6kKn, aNItCFJfm08, p = (497 - 497);
    char Cdc9DbI5tV;
    char LwHPcKr;
    char NhmLfyD59;
    char HRSg8iKNF [(1058 - 807)] = {'0'};
    char MGg6xqwk4 [(667 - 407)] = {'0'};
    char cMrlxnDt3;
    gets (HRSg8iKNF);
    cMrlxnDt3 = '0';
    Cdc9DbI5tV = '0';
    LwHPcKr = '0';
    E86YlIFq = strlen (Sc9Qnw);
    qaMgDsvj = strlen (HRSg8iKNF);
    NhmLfyD59 = '0';
    for (xbrNmzB = E86YlIFq -(543 - 542), Eawy6kKn = qaMgDsvj - (680 - 679), aNItCFJfm08 = (335 - 335); xbrNmzB >= (514 - 514) || Eawy6kKn >= (279 - 279); xbrNmzB = xbrNmzB - (691 - 690), Eawy6kKn--, aNItCFJfm08 = aNItCFJfm08 + (921 - 920)) {
        if (xbrNmzB >= (704 - 704) && Eawy6kKn >= (182 - 182)) {
            if (Sc9Qnw[xbrNmzB] - (128 - 80) + HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(401 - 353) > (582 - 525)) {
                LwHPcKr = Sc9Qnw[xbrNmzB] - (860 - 812) + HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(417 - 369) - (109 - 99);
                Cdc9DbI5tV = '1';
            }
            else {
                NhmLfyD59 = Sc9Qnw[xbrNmzB] - (349 - 301) + HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(206 - 158);
                Cdc9DbI5tV = '0';
                LwHPcKr = NhmLfyD59;
            }
            MGg6xqwk4[aNItCFJfm08] = LwHPcKr;
        }
        else {
            if (xbrNmzB < (579 - 579) && Eawy6kKn >= (282 - 282)) {
                if (HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(347 - 299) > (998 - 941)) {
                    Cdc9DbI5tV = '1';
                    LwHPcKr = HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(281 - 233) - (941 - 931);
                }
                else {
                    Cdc9DbI5tV = '0';
                    NhmLfyD59 = HRSg8iKNF[Eawy6kKn] + Cdc9DbI5tV -(196 - 148);
                    LwHPcKr = NhmLfyD59;
                }
                MGg6xqwk4[aNItCFJfm08] = LwHPcKr;
            }
            else {
                if (xbrNmzB >= (19 - 19) && Eawy6kKn < (35 - 35)) {
                    if (Sc9Qnw[xbrNmzB] + Cdc9DbI5tV -(314 - 266) > (692 - 635)) {
                        LwHPcKr = Sc9Qnw[xbrNmzB] + Cdc9DbI5tV -(283 - 235) - (838 - 828);
                        Cdc9DbI5tV = '1';
                    }
                    else {
                        NhmLfyD59 = Sc9Qnw[xbrNmzB] + Cdc9DbI5tV -(250 - 202);
                        LwHPcKr = NhmLfyD59;
                        Cdc9DbI5tV = '0';
                    }
                    MGg6xqwk4[aNItCFJfm08] = LwHPcKr;
                }
            }
        }
    }
    if (Cdc9DbI5tV == '1') {
        MGg6xqwk4[aNItCFJfm08] = '1';
        MGg6xqwk4[aNItCFJfm08 + (955 - 954)] = '\0';
    }
    else
        MGg6xqwk4[aNItCFJfm08] = '\0';
    WMYnwfm4zN = strlen (MGg6xqwk4);
    for (xbrNmzB = WMYnwfm4zN -(567 - 566); xbrNmzB >= (548 - 548); xbrNmzB--) {
        if (MGg6xqwk4[xbrNmzB] == '0')
            p++;
        else
            break;
    }
    if (WMYnwfm4zN == (639 - 638) && MGg6xqwk4[(216 - 216)] == '0')
        puts (MGg6xqwk4);
    else {
        puts (pzT59l2OD);
        for (xbrNmzB = WMYnwfm4zN -p - (948 - 947); xbrNmzB >= (553 - 553); xbrNmzB--)
            pzT59l2OD[WMYnwfm4zN -p - xbrNmzB - (161 - 160)] = MGg6xqwk4[xbrNmzB];
        pzT59l2OD[WMYnwfm4zN -p] = '\0';
    }
    return (534 - 534);
}

