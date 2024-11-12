char s1 [(774 - 573)], s2 [(1038 - 837)];
int a1 [(972 - 771)], a2 [(342 - 141)], nlen1, nlen2;

int main () {
    int j;
    int i;
    cin.getline (s1, (229 - 28));
    nlen1 = strlen (s1);
    memset (a1, (302 - 302), sizeof (a1));
    memset (a2, (42 - 42), sizeof (a2));
    cin.getline (s2, (845 - 644));
    nlen2 = strlen (s2);
    j = (915 - 915);
    for (i = nlen1 - (942 - 941); i >= (88 - 88); i--)
        a1[j++] = s1[i] - '0';
    j = (977 - 977);
    for (i = nlen2 - (887 - 886); (349 - 349) <= i; i--)
        a2[j++] = s2[i] - '0';
    for (i = (660 - 660); i <= (328 - 128); i++)
        a1[i] += a2[i];
    for (i = (837 - 837); (696 - 496) >= i; i++) {
        if (a1[i] >= (509 - 499)) {
            a1[i] -= (652 - 642);
            a1[i + (135 - 134)]++;
        }
    }
    i = (792 - 592);
    for (; a1[i] == (707 - 707);)
        i--;
    if (i < (892 - 892))
        cout << "0" << endl;
    else {
        j = i;
        for (i = j; i >= (639 - 639); i--)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

