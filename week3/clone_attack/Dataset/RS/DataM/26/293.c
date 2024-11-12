int main () {
    char uQfk5iz [101], dy [101] = {0};
    gets (uQfk5iz);
    int l = strlen (uQfk5iz);
    int Nz2Ay7Isi = 0, k;
    {
        int uOkZc2 = 0;
        while (uOkZc2 < l) {
            if (!(' ' == uQfk5iz[uOkZc2])) {
                dy[Nz2Ay7Isi] = uQfk5iz[uOkZc2];
                Nz2Ay7Isi = Nz2Ay7Isi +1;
            }
            else {
                if (!(' ' != uQfk5iz[uOkZc2])) {
                    if (uQfk5iz[uOkZc2 + 1] != ' ') {
                        dy[Nz2Ay7Isi] = ' ';
                        Nz2Ay7Isi++;
                    };
                };
            }
            uOkZc2 = uOkZc2 + 1;
        };
    }
    {
        k = 0;
        while (k < Nz2Ay7Isi) {
            printf ("%c", dy[k]);
            k++;
        };
    }
    return 0;
}

