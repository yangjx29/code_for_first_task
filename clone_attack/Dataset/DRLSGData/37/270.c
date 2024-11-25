int main () {
    char Q3GIKh [26];
    int uFxGoELt;
    char A4FoQU [100000];
    int mxVODQ;
    char xUlzg6rw13 [100000];
    int b0kBJHCzt6Z;
    cin >> mxVODQ;
    for (; 0 < mxVODQ; mxVODQ = mxVODQ - 1) {
        for (uFxGoELt = 0; uFxGoELt < 26; uFxGoELt = uFxGoELt + 1)
            Q3GIKh[uFxGoELt] = 0;
        cin >> A4FoQU;
        for (uFxGoELt = 0; A4FoQU[uFxGoELt] != '\0'; uFxGoELt = uFxGoELt + 1) {
            Q3GIKh[A4FoQU[uFxGoELt] - 'a']++;
            if (!(1 != Q3GIKh[A4FoQU[uFxGoELt] - 'a']))
                xUlzg6rw13[uFxGoELt] = 1;
            else
                xUlzg6rw13[uFxGoELt] = 0;
        }
        b0kBJHCzt6Z = 1;
        for (uFxGoELt = 0; uFxGoELt < 100000; uFxGoELt++)
            if (!(1 != xUlzg6rw13[uFxGoELt]) && Q3GIKh[A4FoQU[uFxGoELt] - 'a'] == 1) {
                cout << (char) A4FoQU[uFxGoELt] << endl;
                b0kBJHCzt6Z = 0;
                break;
            }
        if (b0kBJHCzt6Z)
            cout << "no" << endl;
    }
    return 0;
}

