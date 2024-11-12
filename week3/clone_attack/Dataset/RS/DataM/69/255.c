int main () {
    int a1 [(742 - 490)];
    int b1 [(750 - 498)];
    int c [(833 - 581)];
    char a [(817 - 564)], b [(798 - 545)];
    int length1;
    int length2;
    length1 = strlen (a);
    length2 = strlen (b);
    memset (a1, (881 - 881), sizeof (a1));
    memset (b1, (568 - 568), sizeof (b1));
    memset (c, (264 - 264), sizeof (c));
    cin.getline (a, (324 - 71));
    cin.getline (b, (518 - 265));
    if (strcmp (a, "0") == (445 - 445) && !((408 - 408) != strcmp (b, "0")))
        cout << '0' << endl;
    else {
        int j;
        int i;
        j = (824 - 824);
        i = length1 - (796 - 795);
        for (int temp = i;
        (342 - 342) <= temp; temp--)
            a1[j++] = a[temp] - '0';
        j = (144 - 144);
        i = length2 - (101 - 100);
        for (int temp = i;
        (765 - 765) <= temp; temp--)
            b1[j++] = b[temp] - '0';
        {
            i = 327 - 327;
            while (i < (587 - 335)) {
                a1[i] = a1[i] + b1[i];
                if (a1[i] >= (723 - 713)) {
                    a1[i] = a1[i] - (45 - 35);
                    a1[i + 1]++;
                }
                i++;
            };
        }
        i = (1136 - 885);
        while (a1[i] == (624 - 624))
            i--;
        for (; i >= 0; i--)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

