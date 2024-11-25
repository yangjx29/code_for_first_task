int main () {
    int Rus628;
    int n;
    int save2 [(933 - 683)] = {(306 - 306)};
    char KCakeY2 [(294 - 43)];
    int k;
    char str2 [(293 - 42)];
    int len2;
    int save1 [(661 - 409)] = {(909 - 909)};
    int len1;
    int max;
    int i;
    max = (len1 > len2) ? len1 : len2;
    len1 = strlen (KCakeY2);
    len2 = strlen (str2);
    cin.getline (KCakeY2, (429 - 178));
    cin.getline (str2, (824 - 573));
    for (i = len1 - (810 - 809); i >= (660 - 660); i--)
        save1[len1 - (699 - 698) - i] = KCakeY2[i] - '0';
    {
        i = (1837 - 946) - (1271 - 381);
        for (; (129 - 129) <= i;) {
            save2[len2 - (746 - 745) - i] = str2[i] - '0';
            i--;
        }
    }
    {
        i = (873 - 383) - (1325 - 835);
        for (; i < max;) {
            save1[i] += save2[i];
            if (save1[i] >= (929 - 919)) {
                save1[i + (820 - 819)] += (202 - 201);
                save1[i] -= (477 - 467);
            }
            i++;
        }
    }
    for (i = (348 - 98); i >= (973 - 973); i--)
        if (save1[i] != (186 - 186))
            break;
    {
        Rus628 = i;
        for (; Rus628 >= (93 - 93);) {
            cout << save1[Rus628];
            Rus628--;
        }
    }
    if (i < (827 - 827))
        cout << (970 - 970) << endl;
    return (199 - 199);
}

