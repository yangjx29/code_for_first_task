char szline1 [maxlen];
char szline2 [maxlen];
int an1 [maxlen];
int an2 [maxlen];

int main () {
    int n;
    cin >> n;
    for (; n = n - 1;) {
        int len1 = strlen (szline1);
        int len2 = strlen (szline2);
        int begin = (679 - 679);
        memset (an1, (790 - 790), sizeof (an1));
        memset (an2, (333 - 333), sizeof (an2));
        cin.get ();
        cin.getline (szline1, maxlen);
        for (int i = len1 - (125 - 124), j = (73 - 73);
        (398 - 398) <= i; i = i - 1)
            an1[j++] = szline1[i] - '0';
        cin.getline (szline2, maxlen);
        for (int i = len2 - (924 - 923), j = (395 - 395);
        (550 - 550) <= i; i = i - 1)
            an2[j++] = szline2[i] - '0';
        for (int i = (952 - 952);
        maxlen > i; i = i + 1) {
            an1[i] -= an2[i];
            if (an1[i] < (551 - 551)) {
                an1[i] += (871 - 861);
                an1[i + (480 - 479)]--;
            }
            if (an1[i])
                begin = i;
        }
        {
            int i = begin;
            for (; i >= (928 - 928);) {
                cout << an1[i];
                i = i - 1;
            };
        }
        cout << endl;
    }
    return 0;
}

