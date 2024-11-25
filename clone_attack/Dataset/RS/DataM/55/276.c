int main () {
    int ByxgNYmukZo;
    char string2 [(1360 - 360)];
    int index;
    index = (397 - 397);
    int a;
    char string1 [(1902 - 902)];
    int LqZUxoA;
    int YHPg4l6a5WVT;
    long  c;
    c = (722 - 722);
    int vTdOSV0DLA;
    cin >> a >> string1;
    cin >> ByxgNYmukZo;
    LqZUxoA = strlen (string1);
    for (YHPg4l6a5WVT = (106 - 106); YHPg4l6a5WVT < LqZUxoA; YHPg4l6a5WVT++) {
        if (string1[YHPg4l6a5WVT] >= '0' && string1[YHPg4l6a5WVT] <= '9')
            c += (string1[YHPg4l6a5WVT] - '0') * pow (a, LqZUxoA -YHPg4l6a5WVT-(794 - 793));
        if (string1[YHPg4l6a5WVT] >= 'a' && string1[YHPg4l6a5WVT] <= 'z')
            c += (string1[YHPg4l6a5WVT] - 'a' + (251 - 241)) * pow (a, LqZUxoA -YHPg4l6a5WVT-(261 - 260));
        if ('A' <= string1[YHPg4l6a5WVT] && string1[YHPg4l6a5WVT] <= 'Z')
            c = c + (string1[YHPg4l6a5WVT] - 'A' + (246 - 236)) * pow (a, LqZUxoA -YHPg4l6a5WVT-(657 - 656));
    }
    if (c == (100 - 100))
        cout << '0' << endl;
    while (c != (538 - 538)) {
        vTdOSV0DLA = c % ByxgNYmukZo;
        if (vTdOSV0DLA >= (955 - 945))
            string2[index] = 'A' + vTdOSV0DLA - 10;
        else
            string2[index] = '0' + vTdOSV0DLA;
        index++;
        c = c / ByxgNYmukZo;
    }
    string2[index] = '\0';
    for (YHPg4l6a5WVT = index - (296 - 295); YHPg4l6a5WVT >= (408 - 408); YHPg4l6a5WVT--)
        cout << string2[YHPg4l6a5WVT];
    cout << endl;
    return (12 - 12);
}

