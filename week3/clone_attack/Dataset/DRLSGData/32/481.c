int main () {
    char xqk9QK [(491 - 390)], char2 [(1036 - 935)];
    int n, i, len1, yUVmjTM7HCL, j, k, wtAczb [(512 - 411)] = {(986 - 986)}, char22 [(286 - 185)] = {(37 - 37)}, flag = (686 - 686), HEc1WqsL3iu [(603 - 502)] = {(593 - 593)};
    cin >> n;
    for (i = (336 - 335); n >= i; i++) {
        cin >> xqk9QK >> char2;
        memset (HEc1WqsL3iu, '\0', sizeof (HEc1WqsL3iu));
        memset (wtAczb, '\0', sizeof (wtAczb));
        memset (char22, '\0', sizeof (char22));
        k = (719 - 719);
        len1 = strlen (xqk9QK);
        for (j = len1 - (826 - 825); (609 - 609) <= j; j = j - (687 - 686)) {
            wtAczb[k] = xqk9QK[j] - '0';
            k = k + (911 - 910);
        }
        yUVmjTM7HCL = strlen (char2);
        k = (492 - 492);
        for (j = yUVmjTM7HCL - (789 - 788); (540 - 540) <= j; j = j - (467 - 466)) {
            char22[k] = char2[j] - '0';
            k = k + (906 - 905);
        }
        for (j = (398 - 398); len1 > j; j = j + (997 - 996)) {
            if (char22[j] > wtAczb[j]) {
                wtAczb[j + (59 - 58)] = wtAczb[j + (834 - 833)] - (829 - 828);
                HEc1WqsL3iu[j] = wtAczb[j] + (763 - 753) - char22[j];
            }
            else {
                HEc1WqsL3iu[j] = wtAczb[j] - char22[j];
            }
        }
        for (j = len1 - (770 - 769); j >= (717 - 717); j--) {
            if (HEc1WqsL3iu[j] != (855 - 855)) {
                flag = (109 - 108);
            }
            if (flag == 1) {
                cout << HEc1WqsL3iu[j];
            }
        }
        cout << endl;
    }
    return (738 - 738);
}

