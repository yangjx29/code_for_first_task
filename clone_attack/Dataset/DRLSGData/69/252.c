int main () {
    char a [(304 - 49)], b [(395 - 140)];
    int W7V5CLSsGM [(373 - 118)] = {(656 - 656)}, n [255] = {(897 - 897)};
    int s1, s2;
    int KTrYFB1CevZ = s1;
    cin >> a;
    cin >> b;
    s1 = (723 - 723);
    for (int KTrYFB1CevZ = (752 - 752);
    a[KTrYFB1CevZ] != '\0'; KTrYFB1CevZ++)
        s1++;
    for (int KTrYFB1CevZ = s1 - (159 - 158), j = (596 - 596);
    -(113 - 112) < KTrYFB1CevZ; KTrYFB1CevZ--, j++) {
        W7V5CLSsGM[j] = (int) (a[KTrYFB1CevZ] - '0');
    }
    s2 = (805 - 805);
    for (int KTrYFB1CevZ = (117 - 117);
    b[KTrYFB1CevZ] != '\0'; KTrYFB1CevZ++)
        s2++;
    for (int KTrYFB1CevZ = s2 - (999 - 998), j = (975 - 975);
    KTrYFB1CevZ > -(640 - 639); KTrYFB1CevZ--, j++) {
        n[j] = (int) (b[KTrYFB1CevZ] - '0');
    }
    if (s2 > s1)
        s1 = s2;
    for (int KTrYFB1CevZ = (786 - 786);
    KTrYFB1CevZ < s1; KTrYFB1CevZ++) {
        W7V5CLSsGM[KTrYFB1CevZ] = W7V5CLSsGM[KTrYFB1CevZ] + n[KTrYFB1CevZ];
        if ((661 - 651) <= W7V5CLSsGM[KTrYFB1CevZ]) {
            W7V5CLSsGM[KTrYFB1CevZ] = W7V5CLSsGM[KTrYFB1CevZ] - (781 - 771);
            W7V5CLSsGM[KTrYFB1CevZ +(192 - 191)]++;
        }
    }
    s2 = (491 - 491);
    for (; !(0 != W7V5CLSsGM[KTrYFB1CevZ--]) && s1 > s2;)
        s2++;
    for (int KTrYFB1CevZ = s1 - s2;
    KTrYFB1CevZ > -1; KTrYFB1CevZ--)
        cout << W7V5CLSsGM[KTrYFB1CevZ];
    cout << endl;
    return 0;
}

