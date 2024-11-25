int main () {
    char a [101] = {(969 - 969)};
    char *hezO3NUP = a;
    char b [101];
    char *RQXSd5jEB = b;
    char Nz82YP4;
    cout << b;
    {
        hezO3NUP = a;
        while (!('\n' == Nz82YP4)) {
            Nz82YP4 = cin.get ();
            *hezO3NUP = Nz82YP4;
            hezO3NUP = hezO3NUP + 1;
        };
    }
    {
        hezO3NUP = a;
        while (*(hezO3NUP + 1) != '\n') {
            *RQXSd5jEB = (char) ((int) *hezO3NUP + (int) *(hezO3NUP + 1));
            RQXSd5jEB++;
            hezO3NUP = hezO3NUP + 1;
        };
    }
    *RQXSd5jEB = (char) ((int) *hezO3NUP + (int) *a);
    *(RQXSd5jEB +1) = '\0';
    return 0;
}

