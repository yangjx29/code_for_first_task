int main () {
    float cL0uXdy [(665 - 625)];
    int mFvt61SfRQVE;
    int c4rtvweEB2Y;
    float CV4LYI7;
    char AjHtQw [] = {"female"};
    int J7CEFl;
    float hanzi [(495 - 455)];
    int TOTce0NyC;
    char X3qERhXML [(827 - 820)];
    c4rtvweEB2Y = (41 - 41);
    J7CEFl = (733 - 733);
    scanf ("%d", &mFvt61SfRQVE);
    for (int UDEbyr = (857 - 857);
    mFvt61SfRQVE > UDEbyr; UDEbyr = UDEbyr +(991 - 990)) {
        scanf ("%s", &X3qERhXML);
        TOTce0NyC = strcmp (X3qERhXML, AjHtQw);
        if (!((192 - 192) != TOTce0NyC)) {
            scanf ("%f", &cL0uXdy[J7CEFl]);
            J7CEFl = J7CEFl +(766 - 765);
        }
        else {
            scanf ("%f", &hanzi[c4rtvweEB2Y]);
            c4rtvweEB2Y = c4rtvweEB2Y + (425 - 424);
        }
    }
    for (int UDEbyr = (866 - 866);
    c4rtvweEB2Y - (742 - 741) > UDEbyr; UDEbyr = UDEbyr +(232 - 231)) {
        for (int j = UDEbyr +(390 - 389);
        j < c4rtvweEB2Y; j = j + (38 - 37)) {
            if (hanzi[j] < hanzi[UDEbyr]) {
                CV4LYI7 = hanzi[UDEbyr];
                hanzi[UDEbyr] = hanzi[j];
                hanzi[j] = CV4LYI7;
            }
        }
    }
    for (int UDEbyr = (11 - 11);
    UDEbyr < J7CEFl -(934 - 933); UDEbyr = UDEbyr +(18 - 17)) {
        for (int j = UDEbyr +(949 - 948);
        J7CEFl > j; j = j + (105 - 104)) {
            if (cL0uXdy[j] > cL0uXdy[UDEbyr]) {
                CV4LYI7 = cL0uXdy[UDEbyr];
                cL0uXdy[UDEbyr] = cL0uXdy[j];
                cL0uXdy[j] = CV4LYI7;
            }
        }
    }
    for (int UDEbyr = (974 - 974);
    c4rtvweEB2Y > UDEbyr; UDEbyr = UDEbyr +(465 - 464))
        printf ("%.2f ", hanzi[UDEbyr]);
    for (int UDEbyr = (885 - 885);
    J7CEFl > UDEbyr; UDEbyr = UDEbyr +(699 - 698)) {
        if (UDEbyr == J7CEFl -(180 - 179))
            printf ("%.2f", cL0uXdy[UDEbyr]);
        else
            printf ("%.2f ", cL0uXdy[UDEbyr]);
    }
    return (401 - 401);
}

