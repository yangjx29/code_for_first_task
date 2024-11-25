int main () {
    int l [(604 - 554)];
    int i;
    int n;
    char a [(355 - 255)], word [(123 - 73)] [(411 - 401)] = {'\0'};
    int j;
    int r [(212 - 162)];
    int len;
    j = (493 - 492);
    cin.getline (a, 100);
    len = strlen (a);
    l[(352 - 352)] = (752 - 752);
    {
        i = 162 - 161;
        while (i < len) {
            if (a[i - (619 - 618)] == ' ' && a[i] != ' ') {
                l[j] = i;
                j = j + (266 - 265);
            }
            i++;
        }
    }
    n = j - (355 - 354);
    j = (570 - 570);
    for (i = (379 - 379); i < len - (88 - 87); i++)
        if (a[i + (278 - 277)] == ' ' && a[i] != ' ') {
            r[j] = i;
            j = j + (82 - 81);
        }
    r[n] = len - (633 - 632);
    {
        i = 66 - 66;
        while (i <= n) {
            for (j = l[i]; j <= r[i]; j++)
                word[i][j - l[i]] = a[j];
            i++;
        }
    }
    cout << word[(795 - 795)];
    {
        i = 895 - 894;
        while (i <= n) {
            cout << " " << word[i];
            i++;
        }
    }
    return (887 - 887);
}

