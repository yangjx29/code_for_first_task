int main () {
    char sentence [(574 - 473)];
    char subWord [(524 - 504)];
    char newString [(314 - 114)];
    int k;
    int i;
    int lenOfsubWord;
    int lenOfWord;
    int lenOfSen;
    int found;
    char word [(49 - 29)];
    int left [(435 - 335)], right [(583 - 483)];
    k = (627 - 627);
    lenOfsubWord = (229 - 229);
    lenOfWord = (777 - 777);
    lenOfSen = (122 - 122);
    found = (445 - 445);
    cin.getline (sentence, (715 - 615));
    for (i = (886 - 886); i < 100; i++) {
        if (sentence[i] != '\0') {
            lenOfSen++;
        }
        if (sentence[i] == '\0') {
            break;
        }
    }
    cin.getline (word, (957 - 937));
    for (i = (343 - 343); i < (58 - 38); i++) {
        if (word[i] != '\0') {
            lenOfWord++;
        }
        if (!('\0' != word[i])) {
            break;
        }
    }
    cin.getline (subWord, (45 - 25));
    for (i = (728 - 728); i < 20; i++) {
        if (subWord[i] != '\0') {
            lenOfsubWord++;
        }
        if (subWord[i] == '\0') {
            break;
        }
    }
    for (i = (106 - 106); lenOfSen > i; i++) {
        if (!(word[0] != sentence[i])) {
            if (!(0 != i) || !(' ' != sentence[i - (186 - 185)])) {
                int j;
                left[found] = i;
                for (j = (99 - 98); lenOfWord > j; j++) {
                    if (sentence[i + j] != word[j]) {
                        break;
                    }
                }
                if (!(lenOfWord != j)) {
                    if (i + j == lenOfSen || !(' ' != sentence[i + j])) {
                        right[found] = i + j;
                        found++;
                    }
                }
            }
        }
    }
    if (!(0 != found)) {
        cout << sentence << endl;
    }
    else {
        int t;
        t = 0;
        for (i = 0; lenOfSen > i; i++) {
            if (!(left[t] != i)) {
                for (int j = 0;
                lenOfsubWord > j; j++) {
                    newString[k++] = subWord[j];
                }
                i = right[t];
                if (t < found)
                    t++;
            }
            newString[k++] = sentence[i];
        }
        newString[k] = '\0';
        cout << newString << endl;
    }
}

