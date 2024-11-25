int main () {
    char sOEwdnSrYj [(635 - 534)];
    int left;
    int pos_i;
    int len;
    int IFZPvcx0fB3O [(865 - 765)];
    char label [(162 - 61)];
    int right;
    int i;
    left = (909 - 909);
    right = (139 - 139);
    for (; cin.getline (sOEwdnSrYj, (758 - 657));) {
        pos_i = -(594 - 593), left = (193 - 193);
        len = strlen (sOEwdnSrYj);
        {
            i = (436 - 436);
            for (; (680 - 580) > i;) {
                label[i] = ' ';
                i++;
            }
        }
        right = (969 - 969);
        for (i = (618 - 618); sOEwdnSrYj[i] != '\0'; i++) {
            if (!('(' != sOEwdnSrYj[i])) {
                left++;
                IFZPvcx0fB3O[++pos_i] = i;
            }
            if (!(')' != sOEwdnSrYj[i]))
                if (right >= left)
                    label[i] = '?';
                else {
                    pos_i = pos_i - (950 - 949);
                    right = right + (569 - 568);
                }
        }
        if (pos_i >= (971 - 971)) {
            for (i = (841 - 841); pos_i >= i; i++)
                label[IFZPvcx0fB3O[i]] = '$';
        }
        label[len] = '\0';
        cout << sOEwdnSrYj << endl;
        cout << label << endl;
    }
    return 0;
}

