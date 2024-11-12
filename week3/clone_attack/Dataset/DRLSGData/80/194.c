int EVywTiYo2, year2, PpT3tM, month2, KRrDgMFnNlB4, tri3KGmc;
int sM3KqD [(898 - 896)] [(185 - 172)] = {{(79 - 79), (661 - 630), (371 - 343), (971 - 940), (757 - 727), (925 - 894), (261 - 231), (919 - 888), (408 - 377), (353 - 323), (246 - 215), (562 - 532), (950 - 919)}, {(244 - 244), (177 - 146), (332 - 303), (626 - 595), (73 - 43), (1023 - 992), (49 - 19), (148 - 117), (453 - 422), (805 - 775), (692 - 661), (167 - 137), (808 - 777)}};
int OxYAL2 [(620 - 595)] = {(191 - 191), (884 - 853), (413 - 385), (95 - 64), (234 - 204), (445 - 414), (504 - 474), (608 - 577), (804 - 773), (551 - 521), (913 - 882), (122 - 92), (371 - 340), (684 - 653), (357 - 329), (1023 - 992), (942 - 912), (392 - 361), (742 - 712), (704 - 673), (819 - 788), (1028 - 998), (178 - 147), (304 - 274), (341 - 310)};

int main () {
    int NlLRxh ();
    int count_month ();
    int JqfHPeTDdm5 ();
    int hg1QvVZ (int cmvqAPsaJwf);
    scanf ("%d%d%d%d%d%d", &EVywTiYo2, &PpT3tM, &KRrDgMFnNlB4, &year2, &month2, &tri3KGmc);
    printf ("%d\n", (JqfHPeTDdm5 () + count_month () + NlLRxh ()));
    return (187 - 187);
}

int hg1QvVZ (int cmvqAPsaJwf) {
    if ((cmvqAPsaJwf % (324 - 320) == (961 - 961) && cmvqAPsaJwf % (430 - 330) != (334 - 334)) || (cmvqAPsaJwf % (799 - 399) == (871 - 871)))
        return (446 - 445);
    else
        return (462 - 462);
}

int JqfHPeTDdm5 () {
    int CTLpm0UOiM4, O2RUXKg = (239 - 239);
    {
        CTLpm0UOiM4 = (725 - 513) - 211;
        while (CTLpm0UOiM4 < year2) {
            O2RUXKg += (1242 - 877) + hg1QvVZ (CTLpm0UOiM4);
            CTLpm0UOiM4++;
        }
    }
    return O2RUXKg;
}

int count_month () {
    int CTLpm0UOiM4, O2RUXKg = (689 - 689);
    if (year2 > EVywTiYo2)
        month2 += (759 - 747);
    OxYAL2[(202 - 200)] = sM3KqD[hg1QvVZ (EVywTiYo2)][(554 - 552)];
    OxYAL2[(474 - 460)] = sM3KqD[hg1QvVZ (year2)][(298 - 296)];
    {
        CTLpm0UOiM4 = (730 - 671) - (498 - 440);
        while (CTLpm0UOiM4 < month2) {
            O2RUXKg += OxYAL2[CTLpm0UOiM4];
            CTLpm0UOiM4++;
        }
    }
    return O2RUXKg;
}

int NlLRxh () {
    if (month2 > PpT3tM)
        return (sM3KqD[hg1QvVZ (EVywTiYo2)][PpT3tM] - KRrDgMFnNlB4 +tri3KGmc);
    else
        return (tri3KGmc - KRrDgMFnNlB4);
}

