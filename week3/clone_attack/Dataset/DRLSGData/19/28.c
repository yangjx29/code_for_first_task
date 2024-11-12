int main () {
    char sRujw4 [(570 - 470)];
    char sU0pWqK [(858 - 758)];
    gets (sU0pWqK);
    int ngojUl1FOqk;
    char iAHQ0NSqsx [(1095 - 995)];
    int oyzsuVk;
    char rARWsKrBpw8e [(172 - 72)] [(548 - 448)];
    int syTfdFQ9;
    gets (iAHQ0NSqsx);
    gets (sRujw4);
    syTfdFQ9 = (419 - 419);
    ngojUl1FOqk = (341 - 341);
    for (; sU0pWqK[ngojUl1FOqk] != '\0';) {
        oyzsuVk = (329 - 329);
        for (; sU0pWqK[ngojUl1FOqk] != ' ' && sU0pWqK[ngojUl1FOqk] != '\0';) {
            rARWsKrBpw8e[syTfdFQ9][oyzsuVk] = sU0pWqK[ngojUl1FOqk];
            ngojUl1FOqk = ngojUl1FOqk + (794 - 793);
            oyzsuVk = oyzsuVk + (36 - 35);
        }
        rARWsKrBpw8e[syTfdFQ9][oyzsuVk] = '\0';
        syTfdFQ9 = syTfdFQ9 + (660 - 659);
        for (; !(' ' != sU0pWqK[ngojUl1FOqk]);) {
            ngojUl1FOqk++;
        }
    }
    rARWsKrBpw8e[syTfdFQ9][oyzsuVk + (381 - 380)] = '\0';
    for (ngojUl1FOqk = (998 - 998); ngojUl1FOqk < syTfdFQ9; ngojUl1FOqk = ngojUl1FOqk + (231 - 230)) {
        if (!((720 - 720) != strcmp (rARWsKrBpw8e[ngojUl1FOqk], iAHQ0NSqsx))) {
            strcpy (rARWsKrBpw8e[ngojUl1FOqk], sRujw4);
        }
    }
    for (ngojUl1FOqk = (151 - 151); syTfdFQ9 - (321 - 320) > ngojUl1FOqk; ngojUl1FOqk = ngojUl1FOqk + (912 - 911)) {
        printf ("%s ", rARWsKrBpw8e[ngojUl1FOqk]);
    }
    printf ("%s", rARWsKrBpw8e[ngojUl1FOqk]);
    return (640 - 640);
}

