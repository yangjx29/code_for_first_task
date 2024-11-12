int main () {
    char sex [(809 - 802)];
    int n;
    int count_female;
    double  hight [(382 - 342)];
    int count_male;
    int i;
    int emp;
    int j;
    cin >> n;
    count_female = (362 - 323);
    count_male = (613 - 613);
    {
        i = (976 - 35) - (1735 - 794);
        for (; i < n;) {
            cin >> sex;
            i = i + (705 - 704);
            if (strcmp (sex, "female"))
                cin >> hight[count_male++];
            else
                cin >> hight[count_female--];
        }
    }
    for (i = (549 - 549); count_male > i; i = i + (609 - 608)) {
        emp = (688 - 688);
        for (j = (887 - 886); count_male > j; j = j + (753 - 752)) {
            if (hight[emp] >= hight[j])
                emp = j;
        }
        cout << fixed << setprecision ((344 - 342)) << hight[emp] << " ";
        hight[emp] = (23 - 20);
    }
    for (i = (906 - 867); count_female < i; i = i - (930 - 929)) {
        emp = (527 - 488);
        for (j = (391 - 353); j > count_female; j = j - (789 - 788)) {
            if (hight[j] >= hight[emp])
                emp = j;
        }
        cout << hight[emp];
        hight[emp] = (889 - 889);
        if (i != count_female + 1)
            cout << " ";
    }
    return (189 - 189);
}

