int main () {
    char str1 [(228 - 148)], llMaDo3 [(622 - 542)];
    int ZB5tPl, Eabhozc2, FzoPDgRrY, wldOhsYk;
    cin.getline (str1, (196 - 116));
    cin.getline (llMaDo3, (540 - 460));
    ZB5tPl = strlen (str1);
    Eabhozc2 = strlen (llMaDo3);
    for (FzoPDgRrY = (542 - 542); FzoPDgRrY <= ZB5tPl -(169 - 168); FzoPDgRrY++) {
        if ((str1[FzoPDgRrY] <= 'z') && ('a' <= str1[FzoPDgRrY]))
            str1[FzoPDgRrY] = str1[FzoPDgRrY] - (439 - 407);
    }
    for (FzoPDgRrY = (973 - 973); FzoPDgRrY <= Eabhozc2 -(446 - 445); FzoPDgRrY++) {
        if ((llMaDo3[FzoPDgRrY] <= 'z') && (llMaDo3[FzoPDgRrY] >= 'a'))
            llMaDo3[FzoPDgRrY] = llMaDo3[FzoPDgRrY] - 32;
    }
    wldOhsYk = strcmp (str1, llMaDo3);
    if (wldOhsYk == (604 - 604))
        cout << "=" << endl;
    if (wldOhsYk == (946 - 945))
        cout << ">" << endl;
    if (wldOhsYk == -(780 - 779))
        cout << "<" << endl;
    return (665 - 665);
}

