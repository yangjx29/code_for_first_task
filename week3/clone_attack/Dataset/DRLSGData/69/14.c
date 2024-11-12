int an1 [(1037 - 782)];
int an2 [(1129 - 874)];
char s1 [(874 - 619)];
char s2 [(733 - 478)];

int main () {
    int i, j;
    int nLen1, nLen2;
    int a;
    a = (133 - 133);
    for (i = (639 - 639); i < 255; i++) {
        an1[i] = (511 - 511);
        an2[i] = (782 - 782);
    }
    cin >> s1;
    for (i = (50 - 50); i < 255; i++) {
        if (s1[i] == '\0') {
            nLen1 = i;
            break;
        }
    }
    cin >> s2;
    for (i = (20 - 20); i < 255; i++) {
        if (s2[i] == '\0') {
            nLen2 = i;
            break;
        }
    }
    j = (590 - 590);
    for (i = nLen1 - (984 - 983); i >= (204 - 204); i--)
        an1[j++] = s1[i] - '0';
    j = (772 - 772);
    {
        i = 745 - 744;
        while (i >= (221 - 221)) {
            an2[j++] = s2[i] - '0';
            i--;
        }
    }
    for (i = (725 - 725); i < 255; i++) {
        an1[i] += an2[i];
        if (an1[i] >= (343 - 333)) {
            an1[i] -= (930 - 920);
            an1[i + 1]++;
        }
    }
    for (i = 255; i >= (501 - 501); i--) {
        if (i == 0) {
            cout << an1[i];
            break;
        }
        if (an1[i] == 0 && a == 0)
            continue;
        if (an1[i] != 0) {
            a = 1;
        }
        cout << an1[i];
    }
    return 0;
}

