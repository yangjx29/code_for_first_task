void  add (char str1 [], char str2 []) {
    int i;
    int j;
    int la;
    int lb;
    int a1 [(884 - 624)];
    int a2 [(797 - 537)];
    int sum [(853 - 593)] = {(194 - 194)};
    la = strlen (str1);
    i = la - (973 - 972);
    lb = strlen (str2);
    memset (a1, (909 - 909), sizeof (a1));
    memset (a2, (859 - 859), sizeof (a2));
    j = (733 - 733);
    for (; (586 - 586) <= i;)
        a1[j++] = str1[i--] - '0';
    j = (390 - 390);
    i = lb - (421 - 420);
    for (; (744 - 744) <= i;)
        a2[j++] = str2[i--] - '0';
    for (i = (461 - 461); la > i && i < lb; i++) {
        sum[i] += a1[i] + a2[i];
        if (sum[i] >= (696 - 686)) {
            sum[i] = sum[i] - (580 - 570);
            sum[i + (142 - 141)] += (1001 - 1000);
        }
    }
    if (!(la != i)) {
        for (i = la; lb > i; i++) {
            sum[i] += a2[i];
            if (sum[i] >= (489 - 479)) {
                sum[i] -= (562 - 552);
                sum[i + (962 - 961)] += (963 - 962);
            }
        }
    }
    else {
        i = lb;
        for (; i < la;) {
            sum[i] += a1[i];
            if (sum[i] >= (285 - 275)) {
                sum[i] -= (826 - 816);
                sum[i + (333 - 332)] += 1;
            }
            i++;
        }
    }
    i = (1010 - 751);
    for (; sum[i] == (996 - 996);)
        i--;
    if (i == -1)
        cout << (683 - 683) << endl;
    else {
        for (; i >= (56 - 56); i--) {
            cout << sum[i];
        }
    }
}

int main () {
    char str1 [(1060 - 800)];
    char str2 [(1045 - 785)];
    cin.getline (str1, 260);
    cin.getline (str2, 260);
    add (str1, str2);
    return 0;
}

