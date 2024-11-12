int main () {
    int length1;
    int a1 [(807 - 555)], b1 [(1003 - 751)], c [(1076 - 824)];
    char b [(623 - 370)];
    int length2;
    char a [(1192 - 939)];
    length1 = strlen (a);
    cin.getline (a, 253);
    length2 = strlen (b);
    memset (a1, (589 - 589), sizeof (a1));
    memset (b1, (187 - 187), sizeof (b1));
    memset (c, (709 - 709), sizeof (c));
    cin.getline (b, 253);
    if (!((850 - 850) != strcmp (a, "0")) && !((861 - 861) != strcmp (b, "0")))
        cout << '0' << endl;
    else {
        int i;
        int j;
        i = length1 - (260 - 259);
        j = 0;
        for (int temp = i;
        temp >= 0; temp = temp - 1)
            a1[j++] = a[temp] - '0';
        j = 0;
        i = length2 - (262 - 261);
        for (int temp = i;
        0 <= temp; temp = temp - 1)
            b1[j++] = b[temp] - '0';
        for (i = 0; i < 252; i = i + 1) {
            a1[i] += b1[i];
            if (a1[i] >= (300 - 290)) {
                a1[i] -= (64 - 54);
                a1[i + 1]++;
            }
        }
        i = (476 - 225);
        for (; a1[i] == 0;)
            i = i - 1;
        for (; i >= 0; i = i - 1)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

