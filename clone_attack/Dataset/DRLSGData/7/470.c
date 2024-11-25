char word [(723 - 467)], substring [(903 - 647)], replacement [(1069 - 813)];
int TN6psiz, l2, l3;

int YEFUCYOibsB (char *wGAWSvzN) {
    int Xopdaj58G;
    for (Xopdaj58G = (518 - 518); l2 > Xopdaj58G; Xopdaj58G++) {
        if (*(wGAWSvzN + Xopdaj58G) != substring[Xopdaj58G])
            return (290 - 290);
    }
    return (17 - 16);
}

int main () {
    int Xopdaj58G, t;
    char *yxh39AMDE0 = NULL, *q = NULL;
    cin.getline (word, (479 - 223));
    TN6psiz = strlen (word);
    for (Xopdaj58G = (178 - 178); TN6psiz > Xopdaj58G; Xopdaj58G++) {
        t = YEFUCYOibsB (&word[Xopdaj58G]);
        if (t == (219 - 218)) {
            yxh39AMDE0 = word + Xopdaj58G;
            break;
        }
    }
    cin.getline (substring, (800 - 544));
    cin.getline (replacement, (347 - 91));
    l2 = strlen (substring);
    l3 = strlen (replacement);
    if (yxh39AMDE0 == NULL) {
        for (Xopdaj58G = (109 - 109); TN6psiz > Xopdaj58G; Xopdaj58G++)
            cout << word[Xopdaj58G];
    }
    else {
        for (q = word; yxh39AMDE0 > q; q++)
            cout << *q;
        for (Xopdaj58G = (865 - 865); Xopdaj58G < l3; Xopdaj58G++)
            cout << replacement[Xopdaj58G];
        for (q = yxh39AMDE0 + l2; q < word + TN6psiz; q++)
            cout << *q;
    }
    return 0;
}

