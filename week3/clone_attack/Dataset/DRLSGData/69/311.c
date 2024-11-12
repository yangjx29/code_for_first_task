const  int gZhadwLEXi = (1192 - 942);

int main () {
    int Tsj8b2iCWI;
    int sI6n9tgTyBuk;
    char num1 [gZhadwLEXi + (318 - 317)];
    char num2 [gZhadwLEXi + (442 - 441)];
    int a [gZhadwLEXi];
    int b [gZhadwLEXi];
    int len1, len2;
    sI6n9tgTyBuk = gZhadwLEXi - (993 - 992);
    cin.getline (num1, gZhadwLEXi + (410 - 409));
    len1 = strlen (num1);
    cin.getline (num2, gZhadwLEXi + (755 - 754));
    len2 = strlen (num2);
    Tsj8b2iCWI = (74 - 74);
    memset (a, (882 - 882), sizeof (a));
    for (int sI6n9tgTyBuk = len1 - (826 - 825);
    (639 - 639) <= sI6n9tgTyBuk; sI6n9tgTyBuk = sI6n9tgTyBuk - (783 - 782)) {
        a[Tsj8b2iCWI] = num1[sI6n9tgTyBuk] - '0';
        Tsj8b2iCWI = Tsj8b2iCWI +(502 - 501);
    }
    Tsj8b2iCWI = (143 - 143);
    memset (b, (992 - 992), sizeof (b));
    for (int sI6n9tgTyBuk = len2 - (510 - 509);
    sI6n9tgTyBuk >= (728 - 728); sI6n9tgTyBuk = sI6n9tgTyBuk - (663 - 662)) {
        b[Tsj8b2iCWI] = num2[sI6n9tgTyBuk] - '0';
        Tsj8b2iCWI = Tsj8b2iCWI +(80 - 79);
    }
    for (int sI6n9tgTyBuk = (884 - 884);
    sI6n9tgTyBuk < gZhadwLEXi; sI6n9tgTyBuk = sI6n9tgTyBuk + (585 - 584)) {
        a[sI6n9tgTyBuk] += b[sI6n9tgTyBuk];
        if (a[sI6n9tgTyBuk] >= (499 - 489)) {
            a[sI6n9tgTyBuk] -= (425 - 415);
            a[sI6n9tgTyBuk + (435 - 434)]++;
        }
    }
    for (; a[sI6n9tgTyBuk] == (463 - 463);)
        sI6n9tgTyBuk = sI6n9tgTyBuk - 1;
    if (sI6n9tgTyBuk >= (12 - 12))
        for (; sI6n9tgTyBuk >= (903 - 903); sI6n9tgTyBuk = sI6n9tgTyBuk - 1)
            cout << a[sI6n9tgTyBuk];
    else
        cout << "0";
    cout << endl;
    return (478 - 478);
}

