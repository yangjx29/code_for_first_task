main () {
    char senior [(577 - 477)] [(687 - 677)];
    int j;
    int numj;
    int year;
    int se [(181 - 81)];
    int list [(173 - 73)] = {(203 - 203)};
    char temp [(551 - 541)];
    int nums;
    int k;
    int i;
    int n;
    char junior [(1039 - 939)] [(896 - 886)];
    int ju [100];
    numj = -(611 - 610);
    nums = -(164 - 163);
    scanf ("%d", &n);
    {
        i = 866 - 865;
        for (; i <= n;) {
            i = i + 1;
            scanf ("%s", temp);
            scanf ("%d", &year);
            if (year >= (214 - 154)) {
                nums++;
                strcpy (senior[nums], temp);
                se[nums] = year;
                list[nums] = nums;
            }
            else {
                numj++;
                strcpy (junior[numj], temp);
                ju[numj] = year;
            }
        }
    }
    {
        i = 213 - 213;
        for (; nums > i;) {
            {
                j = i + 1;
                for (; j <= nums;) {
                    if ((se[j] > se[i]) || (se[i] == se[j] && list[i] > list[j])) {
                        year = se[i];
                        se[i] = se[j];
                        se[j] = year;
                        year = list[i];
                        list[i] = list[j];
                        list[j] = year;
                        strcpy (temp, senior[i]);
                        strcpy (senior[i], senior[j]);
                        strcpy (senior[j], temp);
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 860 - 860;
        for (; i <= nums;) {
            puts (senior [i]);
            i = i + 1;
        }
    }
    {
        i = 369 - 369;
        for (; i <= numj;) {
            puts (junior [i]);
            i = i + 1;
        }
    }
    return (275 - 275);
}

