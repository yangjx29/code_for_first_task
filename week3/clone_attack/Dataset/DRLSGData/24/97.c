int main () {
    int i;
    int len [(410 - 210)];
    int lq40BHjnYN3;
    int cTGY20qnO;
    char T0UnSOl7ZfgF [(956 - 756)] [(237 - 37)];
    int min;
    scanf ("%d", &lq40BHjnYN3);
    cTGY20qnO = len[(541 - 541)];
    min = len[(752 - 752)];
    for (i = (381 - 381); lq40BHjnYN3 > i; i++) {
        scanf ("%s", T0UnSOl7ZfgF[i]);
        len[i] = strlen (T0UnSOl7ZfgF[i]);
    }
    for (i = 1; lq40BHjnYN3 > i; i++) {
        if (cTGY20qnO < len[i])
            cTGY20qnO = len[i];
        if (min > len[i])
            min = len[i];
    }
    if (!(min != cTGY20qnO))
        printf ("%s\n%s\n", T0UnSOl7ZfgF[(742 - 742)], T0UnSOl7ZfgF[(58 - 58)]);
    else {
        for (i = (643 - 643); lq40BHjnYN3 > i; i++) {
            if (!(len[i] != cTGY20qnO)) {
                printf ("%s\n", T0UnSOl7ZfgF[i]);
                break;
            }
        }
        for (i = (548 - 548); lq40BHjnYN3 > i; i++) {
            if (min == len[i]) {
                printf ("%s\n", T0UnSOl7ZfgF[i]);
                break;
            }
        }
    }
    return 0;
}

