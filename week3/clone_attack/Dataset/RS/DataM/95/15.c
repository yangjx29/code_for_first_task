int main () {
    int Z7Oeg9UIK45;
    char p5tw1f9brsa [80], fwkriYMeGS [80];
    cin.getline (p5tw1f9brsa, 80);
    cin.getline (fwkriYMeGS, 80);
    for (Z7Oeg9UIK45 = 0; strlen (p5tw1f9brsa) > Z7Oeg9UIK45; Z7Oeg9UIK45++) {
        if (!(fwkriYMeGS[Z7Oeg9UIK45] != p5tw1f9brsa[Z7Oeg9UIK45]) || p5tw1f9brsa[Z7Oeg9UIK45] >= 'A' && p5tw1f9brsa[Z7Oeg9UIK45] <= 'Z' && !(p5tw1f9brsa[Z7Oeg9UIK45] + (712 - 680) != fwkriYMeGS[Z7Oeg9UIK45]) || 'a' <= p5tw1f9brsa[Z7Oeg9UIK45] && 'z' >= p5tw1f9brsa[Z7Oeg9UIK45] && !(p5tw1f9brsa[Z7Oeg9UIK45] - 32 != fwkriYMeGS[Z7Oeg9UIK45]))
            continue;
        else {
            if (('A' > p5tw1f9brsa[Z7Oeg9UIK45] || p5tw1f9brsa[Z7Oeg9UIK45] > 'z') && fwkriYMeGS[Z7Oeg9UIK45] < p5tw1f9brsa[Z7Oeg9UIK45] || p5tw1f9brsa[Z7Oeg9UIK45] >= 'A' && p5tw1f9brsa[Z7Oeg9UIK45] <= 'Z' && p5tw1f9brsa[Z7Oeg9UIK45] < fwkriYMeGS[Z7Oeg9UIK45] && p5tw1f9brsa[Z7Oeg9UIK45] > fwkriYMeGS[Z7Oeg9UIK45] - 32 || p5tw1f9brsa[Z7Oeg9UIK45] >= 'a' && p5tw1f9brsa[Z7Oeg9UIK45] <= 'z' && p5tw1f9brsa[Z7Oeg9UIK45] > fwkriYMeGS[Z7Oeg9UIK45] && p5tw1f9brsa[Z7Oeg9UIK45] < fwkriYMeGS[Z7Oeg9UIK45] + 32)
                cout << '>';
            else
                cout << '<';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            break;
        };
    }
    if (Z7Oeg9UIK45 == strlen (p5tw1f9brsa))
        if (Z7Oeg9UIK45 < strlen (fwkriYMeGS))
            cout << '<';
        else
            cout << '=';
    return 0;
}

