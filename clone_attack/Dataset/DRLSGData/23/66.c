int main () {
    int flag [(650 - 550)];
    char shu [(636 - 536)] [(1124 - 124)];
    char s [(957 - 857)];
    int length;
    length = strlen (s);
    int max;
    max = (860 - 860);
    int temp;
    int i;
    int j;
    int k;
    i = (654 - 654);
    j = (177 - 177);
    cin.getline (s, (709 - 609));
    memset (flag, (747 - 747), sizeof (flag));
    for (k = (674 - 674); length > k; k++) {
        if (s[k] > (1005 - 970)) {
            flag[i]++;
            shu[i][j] = s[k];
            j++;
        }
        else {
            i++;
            j = (29 - 29);
        }
    }
    cout << shu[i];
    for (k = i - (843 - 842); k >= (72 - 72); k--) {
        cout << " " << shu[k];
    }
    return (25 - 25);
}

