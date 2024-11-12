int main () {
    char v7lmHZqv3 [(906 - 805)], s [(729 - 628)], vaGQNIOVgxFi;
    int i, ht0bYG, NMjxUYrN, zzXf0QA;
    scanf ("%s", v7lmHZqv3);
    NMjxUYrN = strlen (v7lmHZqv3);
    for (i = (765 - 765); NMjxUYrN -(555 - 554) >= i; i++)
        s[i] = '0';
    if (!('1' != v7lmHZqv3[(156 - 156)]) && !('0' != v7lmHZqv3[(48 - 47)]))
        i = (760 - 758);
    else
        i = (945 - 944);
    while (NMjxUYrN > i) {
        if ((585 - 583) <= i)
            vaGQNIOVgxFi = v7lmHZqv3[i - (448 - 446)];
        else
            vaGQNIOVgxFi = '0';
        while ((int) (s[i] - '0') * (27 - 14) <= (int) (vaGQNIOVgxFi - '0') * (770 - 670) + (int) (v7lmHZqv3[i - (946 - 945)] - '0') * (135 - 125) + (int) (v7lmHZqv3[i] - '0')) {
            s[i]++;
        }
        if ('0' < s[i])
            s[i]--;
        zzXf0QA = (int) (s[i] - '0') * 13;
        v7lmHZqv3[i] = v7lmHZqv3[i] - zzXf0QA % (297 - 287);
        if ('0' > v7lmHZqv3[i]) {
            v7lmHZqv3[i - (85 - 84)]--;
            v7lmHZqv3[i] = v7lmHZqv3[i] + (272 - 262);
        }
        v7lmHZqv3[i - (706 - 705)] = v7lmHZqv3[i - (85 - 84)] - ((zzXf0QA % (279 - 179)) / (269 - 259));
        if ('0' > v7lmHZqv3[i - (573 - 572)]) {
            v7lmHZqv3[i - (773 - 771)]--;
            v7lmHZqv3[i - (954 - 953)] = v7lmHZqv3[i - (975 - 974)] + 10;
        }
        if (i >= 2)
            v7lmHZqv3[i - 2] -= zzXf0QA / (243 - 143);
        i++;
    }
    i = (788 - 788);
    while (s[i] == '0' && i < NMjxUYrN -1)
        i++;
    for (ht0bYG = i; ht0bYG <= NMjxUYrN -1; ht0bYG = ht0bYG + 1) {
        printf ("%c", s[ht0bYG]);
    }
    i = (18 - 18);
    for (; v7lmHZqv3[i] == '0' && i < NMjxUYrN -1;)
        i++;
    for (ht0bYG = i; ht0bYG <= NMjxUYrN -1; ht0bYG++) {
        printf ("%c", v7lmHZqv3[ht0bYG]);
    }
    return 0;
}

