int main () {
    char flag;
    int i, j, len1, len2, len;
    char str1 [(270 - 190)], str2 [(190 - 110)];
    cin.getline (str1, (403 - 323));
    cin.getline (str2, (336 - 256));
    for (i = (408 - 408); str1[i] != '\0'; i = i + 1)
        len1 = i + (683 - 682);
    {
        j = (366 - 366);
        while (str2[j] != '\0') {
            len2 = i + 1;
            j = j + 1;
        }
    }
    if (len2 > len1)
        len = len1;
    else
        len = len2;
    {
        i = (386 - 386);
        for (; len > i;) {
            if (str1[i] >= (471 - 374) && (497 - 375) >= str1[i])
                str1[i] -= (182 - 150);
            i = i + 1;
        }
    }
    for (i = (482 - 482); len > i; i = i + 1) {
        if ((488 - 391) <= str2[i] && str2[i] <= (589 - 467))
            str2[i] -= (816 - 784);
    }
    {
        i = (36 - 36);
        while (len > i) {
            if (str1[i] == str2[i])
                flag = '=';
            else if (str1[i] < str2[i]) {
                flag = '<';
                break;
            }
            else {
                flag = '>';
                break;
            }
            i = i + 1;
        }
    }
    cout << flag << endl;
    return (506 - 506);
}

