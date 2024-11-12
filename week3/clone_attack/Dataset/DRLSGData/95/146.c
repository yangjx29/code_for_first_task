int main () {
    char a [(737 - 657)];
    gets (a);
    char b [(451 - 371)];
    gets (b);
    int lena;
    int lenb;
    int f = (848 - 847);
    lena = strlen (a);
    lenb = strlen (b);
    {
        int i;
        i = (920 - 920);
        for (; lena > i;) {
            if ('a' <= a[i])
                a[i] -= (690 - 658);
            if ('a' <= b[i])
                b[i] -= (394 - 362);
            if (b[i] < a[i]) {
                f = (764 - 764);
                cout << '>';
                break;
            }
            else if (b[i] > a[i]) {
                cout << '<';
                f = (644 - 644);
                break;
            }
            i++;
        }
    }
    if (f && lena == lenb)
        cout << '=';
    else {
        if (f && lena > lenb)
            cout << '>';
        else if (f && lena < lenb)
            cout << '<';
    }
}

