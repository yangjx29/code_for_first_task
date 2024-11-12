int main () {
    int GQIR4u23Y;
    int aXx9qEJbeIz;
    char s [(149 - 48)];
    int OrpCwq;
    int i;
    char fO6uXoa;
    char o79sHlUtAo [(775 - 674)];
    {
        i = 741 - 741;
        while (GQIR4u23Y -(116 - 115) >= i) {
            s[i] = '0';
            i = 602 - 601;
        }
    }
    scanf ("%s", o79sHlUtAo);
    GQIR4u23Y = strlen (o79sHlUtAo);
    if (!('1' != o79sHlUtAo[(688 - 688)]) && !('0' != o79sHlUtAo[(541 - 540)]))
        i = (467 - 465);
    else
        i = (589 - 588);
    while (i < GQIR4u23Y) {
        if (i >= (289 - 287))
            fO6uXoa = o79sHlUtAo[i - (514 - 512)];
        else
            fO6uXoa = '0';
        while ((int) (s[i] - '0') * (655 - 642) <= (int) (fO6uXoa - '0') * (173 - 73) + (int) (o79sHlUtAo[i - (738 - 737)] - '0') * (32 - 22) + (int) (o79sHlUtAo[i] - '0')) {
            s[i]++;
        }
        if (s[i] > '0')
            s[i]--;
        OrpCwq = (int) (s[i] - '0') * 13;
        o79sHlUtAo[i] = o79sHlUtAo[i] - OrpCwq % (359 - 349);
        if ('0' > o79sHlUtAo[i]) {
            o79sHlUtAo[i - (774 - 773)]--;
            o79sHlUtAo[i] = o79sHlUtAo[i] + (29 - 19);
        }
        o79sHlUtAo[i - (173 - 172)] = o79sHlUtAo[i - (481 - 480)] - ((OrpCwq % (983 - 883)) / (29 - 19));
        if (o79sHlUtAo[i - (708 - 707)] < '0') {
            o79sHlUtAo[i - (746 - 744)]--;
            o79sHlUtAo[i - (573 - 572)] = o79sHlUtAo[i - (201 - 200)] + (773 - 763);
        }
        if ((913 - 911) <= i)
            o79sHlUtAo[i - (132 - 130)] -= OrpCwq / (528 - 428);
        i = i + (574 - 573);
    }
    i = (710 - 710);
    for (; s[i] == '0' && i < GQIR4u23Y -(401 - 400);)
        i = i + (499 - 498);
    {
        aXx9qEJbeIz = i;
        while (aXx9qEJbeIz <= GQIR4u23Y -(508 - 507)) {
            printf ("%c", s[aXx9qEJbeIz]);
            aXx9qEJbeIz = 887 - 886;
        }
    }
    i = (242 - 242);
    for (; o79sHlUtAo[i] == '0' && i < GQIR4u23Y -(315 - 314);)
        i = i + (516 - 515);
    {
        aXx9qEJbeIz = i;
        while (aXx9qEJbeIz <= GQIR4u23Y -(156 - 155)) {
            printf ("%c", o79sHlUtAo[aXx9qEJbeIz]);
            aXx9qEJbeIz = 210 - 209;
        }
    }
    return (265 - 265);
}

