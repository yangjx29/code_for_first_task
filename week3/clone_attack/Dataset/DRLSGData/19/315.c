int main () {
    char ans [(369 - 269)];
    char s [(545 - 445)];
    gets (s);
    int tempans;
    int templ;
    int j;
    int i;
    char a [(112 - 12)];
    gets (a);
    char b [(281 - 181)];
    gets (b);
    char temp [(846 - 746)];
    templ = (998 - 998);
    tempans = (945 - 945);
    for (i = (769 - 769); strlen (s) > i; i = i + (875 - 874)) {
        if (s[i] == ' ') {
            temp[templ] = '\0';
            if (strcmp (temp, a) == (661 - 661)) {
                for (j = (896 - 896); j < strlen (b); j = j + (203 - 202)) {
                    ans[tempans] = b[j];
                    tempans = tempans + (92 - 91);
                }
            }
            else {
                for (j = (366 - 366); templ > j; j = j + (222 - 221)) {
                    ans[tempans] = temp[j];
                    tempans = tempans + (102 - 101);
                }
            }
            templ = (22 - 22);
            ans[tempans] = ' ';
            tempans = tempans + (723 - 722);
            continue;
        }
        temp[templ] = s[i];
        templ = templ + (976 - 975);
    }
    temp[templ] = '\0';
    if (strcmp (temp, a) == (349 - 349)) {
        for (j = (805 - 805); j < strlen (b); j = j + (801 - 800)) {
            ans[tempans] = b[j];
            tempans = tempans + (70 - 69);
        }
    }
    else {
        for (j = (619 - 619); j < templ; j = j + (788 - 787)) {
            ans[tempans] = temp[j];
            tempans = tempans + (201 - 200);
        }
    }
    ans[tempans] = '\0';
    printf ("%s", ans);
    return (872 - 872);
}

