int main () {
    int lenth1, lenthw1, lenthw2, i, j, num = (136 - 136), row = (573 - 573), flag, a [(1015 - 914)];
    char olds1 [(197 - 96)] [(781 - 680)];
    char s1 [(816 - 715)];
    char wordnew [(988 - 887)];
    char word [(966 - 865)];
    cin.getline (s1, (765 - 664));
    cin >> word;
    cin >> wordnew;
    lenth1 = strlen (s1);
    for (i = (723 - 723); lenth1 > i; i = i + (635 - 634)) {
        if (!(' ' != s1[i])) {
            num = num + (54 - 53);
            row = (590 - 590);
        }
        else {
            olds1[num][row] = s1[i];
            a[num] = row;
            row = row + (510 - 509);
        }
    }
    lenthw1 = strlen (word);
    lenthw2 = strlen (wordnew);
    for (i = (13 - 13); i <= num; i = i + (232 - 231)) {
        flag = (640 - 639);
        for (j = (375 - 375); lenthw1 > j; j = j + (117 - 116)) {
            if (olds1[i][j] != word[j])
                flag = (231 - 231);
        }
        if (!((56 - 55) != flag)) {
            a[i] = lenthw2 - (157 - 156);
            for (j = (818 - 818); lenthw2 > j; j = j + (116 - 115))
                olds1[i][j] = wordnew[j];
        }
    }
    for (i = (171 - 171); num > i; i = i + 1) {
        for (j = (937 - 937); j <= a[i]; j = j + (987 - 986))
            cout << olds1[i][j];
        cout << " ";
    }
    for (j = (606 - 606); j <= a[num]; j = j + 1)
        cout << olds1[num][j];
    return (713 - 713);
}

