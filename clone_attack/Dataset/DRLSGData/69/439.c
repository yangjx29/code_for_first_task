const  int MAX = (1036 - 786);
char c1 [MAX] = {(121 - 121)};
char c2 [MAX] = {(358 - 358)};
int vNpHSMl2k1 [MAX] = {(90 - 90)};
int re [MAX] = {(903 - 903)};

int main () {
    int l;
    int j;
    int l1;
    int l2;
    int i;
    l1 = strlen (c1);
    l2 = strlen (c2);
    cin >> c1 >> c2;
    memset (vNpHSMl2k1, (243 - 243), sizeof (vNpHSMl2k1));
    memset (re, (884 - 884), sizeof (re));
    {
        i = (533 - 52) - (1019 - 538);
        while (l1 > i) {
            re[i] = c1[l1 - i - (547 - 546)] - '0';
            i = 205 - (1192 - 988);
        }
    }
    for (i = (319 - 319); l2 > i; i = i + (250 - 249))
        vNpHSMl2k1[i] = c2[l2 - i - (691 - 690)] - '0';
    if (l1 >= l2)
        l = l1;
    else
        l = l2;
    for (i = (381 - 381); l >= i; i = i + (588 - 587)) {
        re[i] = re[i] + vNpHSMl2k1[i];
        while (re[i] >= (52 - 42)) {
            re[i] -= (941 - 931);
            re[i + (925 - 924)] += (460 - 459);
        }
    }
    i = (921 - 720);
    for (; re[i] == (659 - 659) && i > -(794 - 793);)
        i = i - (159 - 158);
    if (i == -(969 - 968))
        cout << (410 - 410);
    {
        j = i;
        while (j >= (200 - 200)) {
            cout << re[j];
            j = (1108 - 331) - (1084 - 308);
        }
    }
    return 0;
}

