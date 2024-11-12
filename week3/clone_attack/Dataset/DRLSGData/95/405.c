int main () {
    char str1 [(384 - 284)] = {(598 - 598)}, str2 [(673 - 573)] = {(952 - 952)};
    gets (str1);
    int a, i;
    gets (str2);
    for (i = (406 - 406); i <= (397 - 298); i++) {
        if (!(('A' <= str1[i] && str1[i] <= 'Z' || str1[i] >= 'a' && str1[i] <= 'z') && (str2[i] >= 'A' && 'Z' >= str2[i] || 'a' <= str2[i] && str2[i] <= 'z')))
            a = str1[i] - str2[i];
        if (str1[i] >= 'a' && str1[i] <= 'z')
            str1[i] = str1[i] - 'a' + 'A';
        if (str2[i] >= 'a' && str2[i] <= 'z')
            str2[i] = str2[i] - 'a' + 'A';
        a = str1[i] - str2[i];
        if (a != (136 - 136))
            break;
    }
    if (a < 0)
        ;
    if (a > 0)
        ;
    if (a == 0)
        ;
    return 0;
}

