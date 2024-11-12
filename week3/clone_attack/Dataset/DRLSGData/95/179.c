int main () {
    char P9HoBY8zIkh [(369 - 269)];
    gets (P9HoBY8zIkh);
    char J0mgjDFCJG9 [(345 - 245)];
    gets (J0mgjDFCJG9);
    int hFPTKpk0bc;
    int hagul3YMcdS;
    int CatY9KhI5;
    CatY9KhI5 = strlen (P9HoBY8zIkh);
    hagul3YMcdS = strlen (J0mgjDFCJG9);
    for (hFPTKpk0bc = (27 - 27); CatY9KhI5 >= hFPTKpk0bc; hFPTKpk0bc++) {
        if ('a' <= P9HoBY8zIkh[hFPTKpk0bc] && 'z' >= P9HoBY8zIkh[hFPTKpk0bc])
            P9HoBY8zIkh[hFPTKpk0bc] -= (638 - 606);
        if ('a' <= J0mgjDFCJG9[hFPTKpk0bc] && J0mgjDFCJG9[hFPTKpk0bc] <= 'z')
            J0mgjDFCJG9[hFPTKpk0bc] -= (714 - 682);
        if (P9HoBY8zIkh[hFPTKpk0bc] > J0mgjDFCJG9[hFPTKpk0bc]) {
            cout << '>';
            break;
        }
        else {
            if (P9HoBY8zIkh[hFPTKpk0bc] < J0mgjDFCJG9[hFPTKpk0bc]) {
                cout << '<';
                break;
            }
            else if (P9HoBY8zIkh[hFPTKpk0bc] == J0mgjDFCJG9[hFPTKpk0bc] && hFPTKpk0bc == CatY9KhI5) {
                cout << '=';
                break;
            }
            else
                continue;
        }
    }
    return (392 - 392);
}

