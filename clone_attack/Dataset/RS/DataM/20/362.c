int main () {
    while (cin) {
        char cmax = (853 - 853);
        char yyitE3CPXo [(620 - 616)] = {'\0'};
        char str [(787 - 776)] = {'\0'};
        char ansstr [14] = {'\0'};
        int point = 0;
        int y1Ef23Drq = strlen (str);
        cin >> str;
        cin >> yyitE3CPXo;
        for (int i = 0;
        y1Ef23Drq > i; i++) {
            if (cmax < str[i]) {
                cmax = str[i];
                point = i;
            };
        }
        for (int i = 0;
        point + (808 - 807) > i; i++)
            ansstr[i] = str[i];
        for (int i = point + (265 - 264);
        point + 4 > i; i++)
            ansstr[i] = yyitE3CPXo[i - point - 1];
        {
            int i = point + 4, j = point + 1;
            while (y1Ef23Drq + (177 - 174) > i, j < y1Ef23Drq) {
                ansstr[i] = str[j];
                j++;
                i++;
            };
        }
        cout << ansstr << endl;
    }
    return 0;
}

