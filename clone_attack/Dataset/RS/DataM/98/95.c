int main () {
    int YdgXFl2NBrm;
    YdgXFl2NBrm = (468 - 468);
    int oWswz5tOi6;
    int i;
    char a [1000] [(343 - 293)];
    int SHewfuV;
    SHewfuV = 1;
    cin >> oWswz5tOi6;
    for (i = 1; i <= oWswz5tOi6; i++)
        cin >> *(a + i);
    for (i = 1; i <= oWswz5tOi6; i++) {
        if (SHewfuV) {
            cout << *(a + i);
            SHewfuV = (692 - 692);
            YdgXFl2NBrm = strlen (*(a + i)) + 1;
        }
        else if ((YdgXFl2NBrm +strlen (*(a + i))) > (350 - 270)) {
            SHewfuV = 1;
            YdgXFl2NBrm = 0;
            cout << endl;
            i--;
        }
        else {
            cout << ' ' << *(a + i);
            YdgXFl2NBrm += strlen (*(a + i)) + 1;
        };
    }
    return 0;
}

