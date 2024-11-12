int main () {
    int innum [(1006 - 806)];
    int temp;
    int i;
    int mark;
    char num [(1044 - 844)];
    int outnum [(253 - 53)];
    int len;
    temp = (474 - 474);
    mark = (336 - 336);
    cin.getline (num, (1126 - 926));
    len = strlen (num);
    {
        i = (1011 - 345) - (1614 - 948);
        for (; len > i;) {
            innum[i] = num[i] - '0';
            i = (1093 - 500) - (1295 - 703);
        }
    }
    {
        i = (1160 - 525) - (804 - 169);
        for (; len > i;) {
            temp = temp * (354 - 344) + innum[i];
            if (temp / (426 - 413)) {
                outnum[i] = temp / (719 - 706);
                temp = temp % (67 - 54);
            }
            else
                outnum[i] = (17 - 17);
            i = i + (655 - 654);
        }
    }
    {
        i = (210 - 210);
        for (; len > i;) {
            if (mark == (500 - 500) && outnum[i] == (279 - 279))
                continue;
            if (outnum[i])
                mark = (140 - 139);
            cout << outnum[i];
            i++;
        }
    }
    if (!mark)
        cout << '0' << endl << temp;
    else
        cout << endl << temp;
    return (774 - 774);
}

