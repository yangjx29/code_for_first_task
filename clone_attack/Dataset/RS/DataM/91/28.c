int main () {
    int QVBmjK;
    char Xx7MD40ofYg [101] = {'\0'}, i6iIGvnm [101] = {'\0'};
    gets (Xx7MD40ofYg);
    {
        QVBmjK = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Xx7MD40ofYg[QVBmjK] != '\0') {
            if (Xx7MD40ofYg[QVBmjK +1] != '\0')
                i6iIGvnm[QVBmjK] = Xx7MD40ofYg[QVBmjK] + Xx7MD40ofYg[QVBmjK +1];
            else
                i6iIGvnm[QVBmjK] = Xx7MD40ofYg[0] + Xx7MD40ofYg[QVBmjK];
            QVBmjK = QVBmjK +1;
        };
    }
    {
        QVBmjK = 0;
        while (i6iIGvnm[QVBmjK] != '\0') {
            printf ("%c", i6iIGvnm[QVBmjK]);
            QVBmjK = QVBmjK +1;
        };
    }
    printf ("\n");
    return 0;
}

