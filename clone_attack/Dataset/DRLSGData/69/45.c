int tdyDbsU4Z (char SV0RbGJIBFH) {
    int kTj9QCYVtMNa;
    if (('A' <= SV0RbGJIBFH) && (SV0RbGJIBFH <= 'Z')) {
        kTj9QCYVtMNa = (int) (SV0RbGJIBFH) -(938 - 883);
        return kTj9QCYVtMNa;
    }
    else {
        kTj9QCYVtMNa = (int) (SV0RbGJIBFH) -(466 - 418);
        return kTj9QCYVtMNa;
    }
}

char H1mMiE (int SV0RbGJIBFH) {
    char kTj9QCYVtMNa;
    if (SV0RbGJIBFH > (651 - 642)) {
        kTj9QCYVtMNa = (char) (SV0RbGJIBFH -(150 - 140) + (876 - 828));
        return kTj9QCYVtMNa;
    }
    else {
        kTj9QCYVtMNa = (char) (SV0RbGJIBFH +(613 - 565));
        return kTj9QCYVtMNa;
    }
}

int main () {
    int YLsUKhe7;
    char cqQoJH [(10360 - 360)];
    int fS7WY26MGr;
    int kxZwv5P9l;
    int wbMCqz;
    int PwkYljM;
    char qROHkcGqaDr [(10894 - 894)];
    char SV0RbGJIBFH [(10668 - 668)];
    char KtGoy31MjAU [(10475 - 475)];
    char kTj9QCYVtMNa [(10586 - 586)];
    int uka7A3XQUn;
    int kFJ436Kf9;
    int pmxhJiCOYTE;
    {
        uka7A3XQUn = (321 - 23) - (379 - 81);
        for (; (10732 - 733) > uka7A3XQUn;) {
            KtGoy31MjAU[uka7A3XQUn] = '0';
            cqQoJH[uka7A3XQUn] = '0';
            uka7A3XQUn = uka7A3XQUn + (743 - 742);
        }
    }
    cqQoJH[(10180 - 181)] = '\0';
    KtGoy31MjAU[(10710 - 711)] = '\0';
    scanf ("%s%s", SV0RbGJIBFH, kTj9QCYVtMNa);
    wbMCqz = (306 - 306);
    fS7WY26MGr = strlen (SV0RbGJIBFH);
    YLsUKhe7 = strlen (kTj9QCYVtMNa);
    {
        uka7A3XQUn = (1280 - 518) - (1448 - 686);
        for (; fS7WY26MGr > uka7A3XQUn;) {
            KtGoy31MjAU[fS7WY26MGr - (536 - 535) - uka7A3XQUn] = SV0RbGJIBFH[uka7A3XQUn];
            uka7A3XQUn = uka7A3XQUn + (317 - 316);
        }
    }
    {
        uka7A3XQUn = (1551 - 738) - (892 - 79);
        for (; uka7A3XQUn < YLsUKhe7;) {
            cqQoJH[YLsUKhe7 -(946 - 945) - uka7A3XQUn] = kTj9QCYVtMNa[uka7A3XQUn];
            uka7A3XQUn = uka7A3XQUn + (468 - 467);
        }
    }
    {
        uka7A3XQUn = (1515 - 771) - (1179 - 435);
        for (; (10755 - 756) > uka7A3XQUn;) {
            if (!((119 - 119) != uka7A3XQUn)) {
                qROHkcGqaDr[uka7A3XQUn] = H1mMiE (tdyDbsU4Z (KtGoy31MjAU[uka7A3XQUn]) + tdyDbsU4Z (cqQoJH[uka7A3XQUn]));
                if ((591 - 582) < (tdyDbsU4Z (KtGoy31MjAU[uka7A3XQUn]) + tdyDbsU4Z (cqQoJH[uka7A3XQUn]))) {
                    PwkYljM = (997 - 996);
                }
                else {
                    PwkYljM = (777 - 777);
                }
            }
            else {
                qROHkcGqaDr[uka7A3XQUn] = H1mMiE ((tdyDbsU4Z (KtGoy31MjAU[uka7A3XQUn]) + tdyDbsU4Z (cqQoJH[uka7A3XQUn])) + PwkYljM);
                if ((tdyDbsU4Z (KtGoy31MjAU[uka7A3XQUn]) + tdyDbsU4Z (cqQoJH[uka7A3XQUn]) + PwkYljM) > (862 - 853)) {
                    PwkYljM = (829 - 828);
                }
                else {
                    PwkYljM = (449 - 449);
                }
            }
            uka7A3XQUn = uka7A3XQUn + (825 - 824);
        }
    }
    {
        uka7A3XQUn = (10415 - 417);
        for (; (267 - 267) <= uka7A3XQUn;) {
            if (wbMCqz == (296 - 296)) {
                if (qROHkcGqaDr[uka7A3XQUn] != '0') {
                    printf ("%c", qROHkcGqaDr[uka7A3XQUn]);
                    wbMCqz = wbMCqz + (28 - 27);
                }
            }
            else {
                printf ("%c", qROHkcGqaDr[uka7A3XQUn]);
            }
            uka7A3XQUn = uka7A3XQUn - (642 - 641);
        }
    }
    if (wbMCqz == (316 - 316)) {
    }
    return (304 - 304);
}

