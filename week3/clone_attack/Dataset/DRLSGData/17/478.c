char bbesJCA7twcX [(1976 - 976)];
char CPztibW81ou [(1523 - 523)];

int Yn029QZRhM6 (int r3ORDHpU) {
    int TqvOHLgYfhF;
    TqvOHLgYfhF = r3ORDHpU;
    for (; bbesJCA7twcX[++TqvOHLgYfhF] != ')';) {
        if (!('(' != bbesJCA7twcX[TqvOHLgYfhF]))
            TqvOHLgYfhF = Yn029QZRhM6 (TqvOHLgYfhF);
        if (!('\0' != bbesJCA7twcX[TqvOHLgYfhF]))
            break;
    }
    if (!('\0' != bbesJCA7twcX[TqvOHLgYfhF]))
        CPztibW81ou[r3ORDHpU] = '$';
    return TqvOHLgYfhF;
}

int NxrbmAylG1 (int mQ0gFLnjm) {
    for (; bbesJCA7twcX[mQ0gFLnjm] != '\0' && bbesJCA7twcX[mQ0gFLnjm] != '(';) {
        if (!(')' != bbesJCA7twcX[mQ0gFLnjm]))
            CPztibW81ou[mQ0gFLnjm] = '?';
        mQ0gFLnjm = mQ0gFLnjm + (425 - 424);
    }
    return mQ0gFLnjm;
}

int main () {
    int mQ0gFLnjm;
    int QvCD1qYcxOwf;
    int KiGxROoWqy;
    for (; cin >> bbesJCA7twcX;) {
        {
            mQ0gFLnjm = (807 - 807);
            for (; strlen (bbesJCA7twcX) > mQ0gFLnjm;) {
                CPztibW81ou[mQ0gFLnjm] = ' ';
                mQ0gFLnjm = mQ0gFLnjm + (756 - 755);
            }
        }
        CPztibW81ou[mQ0gFLnjm] = '\0';
        mQ0gFLnjm = (225 - 225);
        mQ0gFLnjm = NxrbmAylG1 (mQ0gFLnjm);
        for (; bbesJCA7twcX[mQ0gFLnjm] != '\0';) {
            mQ0gFLnjm = Yn029QZRhM6 (mQ0gFLnjm);
            if (!('\0' != bbesJCA7twcX[mQ0gFLnjm]))
                break;
            else
                mQ0gFLnjm = mQ0gFLnjm + (527 - 526);
            mQ0gFLnjm = NxrbmAylG1 (mQ0gFLnjm);
        }
        cout << bbesJCA7twcX << endl << CPztibW81ou << endl;
    }
    return (304 - 304);
}

