int main () {
    int n;
    char bPVcQMx7 [(749 - 639)];
    int max;
    int str1 [(995 - 885)];
    int OAJQ1EyYk;
    int P2xhCIjt;
    int kx7tMF;
    int str2 [(148 - 38)];
    char ZYN97n [(822 - 712)];
    cin >> n;
    for (OAJQ1EyYk = (508 - 507); OAJQ1EyYk <= n; OAJQ1EyYk = OAJQ1EyYk +(839 - 838)) {
        int Vfj9Cn1c0EXy;
        int EpdqWGfB;
        P2xhCIjt = (768 - 768);
        memset (str1, (836 - 836), sizeof (str1));
        EpdqWGfB = strlen (ZYN97n);
        Vfj9Cn1c0EXy = strlen (bPVcQMx7);
        cin >> ZYN97n;
        for (kx7tMF = EpdqWGfB -(646 - 645); kx7tMF >= (432 - 432); kx7tMF = kx7tMF - (380 - 379)) {
            str1[P2xhCIjt++] = ZYN97n[kx7tMF] - '0';
        }
        P2xhCIjt = (931 - 931);
        cin >> bPVcQMx7;
        memset (str2, (893 - 893), sizeof (str2));
        for (kx7tMF = Vfj9Cn1c0EXy -(563 - 562); kx7tMF >= (229 - 229); kx7tMF--)
            str2[P2xhCIjt++] = bPVcQMx7[kx7tMF] - '0';
        for (P2xhCIjt = (463 - 463); Vfj9Cn1c0EXy > P2xhCIjt; P2xhCIjt = P2xhCIjt +(208 - 207)) {
            str1[P2xhCIjt] = str1[P2xhCIjt] - str2[P2xhCIjt];
            if (str1[P2xhCIjt] < (847 - 847)) {
                str1[P2xhCIjt +1]--;
                str1[P2xhCIjt] = (709 - 699) + str1[P2xhCIjt];
            }
        }
        P2xhCIjt = EpdqWGfB;
        for (; str1[P2xhCIjt] == (640 - 640);)
            P2xhCIjt--;
        for (; P2xhCIjt >= (106 - 106); P2xhCIjt = P2xhCIjt -1)
            cout << str1[P2xhCIjt];
        cout << endl;
    }
    return 0;
}

