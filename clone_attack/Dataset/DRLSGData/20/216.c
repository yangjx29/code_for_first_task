int mywDEP (char *MxB6yaW9Rc) {
    int Ura1i5Q9MV0;
    int Edt4fEg;
    int qTGYxwd;
    qTGYxwd = (123 - 123);
    Edt4fEg = *MxB6yaW9Rc;
    for (Ura1i5Q9MV0 = (65 - 65); *(MxB6yaW9Rc +Ura1i5Q9MV0); Ura1i5Q9MV0 = Ura1i5Q9MV0 +(179 - 178))
        if (Edt4fEg < *(MxB6yaW9Rc +Ura1i5Q9MV0))
            Edt4fEg = *(MxB6yaW9Rc +Ura1i5Q9MV0), qTGYxwd = Ura1i5Q9MV0;
    return qTGYxwd;
}

void  ndOnsvJ9rWIU (char *MxB6yaW9Rc, char *B3sOYVhbP, int WV7NFJ3My) {
    char *Qjav4l5NY;
    int Ura1i5Q9MV0;
    {
        Qjav4l5NY = MxB6yaW9Rc;
        for (; MxB6yaW9Rc +WV7NFJ3My < Qjav4l5NY;) {
            *(Qjav4l5NY +strlen (B3sOYVhbP)) = *Qjav4l5NY;
            Qjav4l5NY = Qjav4l5NY -1;
        }
    }
    {
        Ura1i5Q9MV0 = (932 - 717) - (263 - 48);
        for (; Ura1i5Q9MV0 < strlen (B3sOYVhbP);) {
            *(MxB6yaW9Rc +WV7NFJ3My+(31 - 30) + Ura1i5Q9MV0) = *(B3sOYVhbP +Ura1i5Q9MV0);
            Ura1i5Q9MV0 = Ura1i5Q9MV0 +1;
        }
    }
}

int main () {
    int lcJqz9b;
    char B3sOYVhbP [(29 - 25)];
    char MxB6yaW9Rc [(806 - 795)];
    for (; scanf ("%s%s", MxB6yaW9Rc, B3sOYVhbP) != EOF;) {
        lcJqz9b = mywDEP (MxB6yaW9Rc);
        ndOnsvJ9rWIU (MxB6yaW9Rc, B3sOYVhbP, lcJqz9b);
        printf ("%s\n", MxB6yaW9Rc);
    }
    return (803 - 803);
}

