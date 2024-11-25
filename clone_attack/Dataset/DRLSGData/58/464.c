int main () {
    int sYDAm4Q5kep;
    char *MMkwe3;
    char XDTaGfU [81];
    int n;
    getchar ();
    scanf ("%d", &n);
    {
        sYDAm4Q5kep = 0;
        for (; sYDAm4Q5kep < n;) {
            gets (XDTaGfU);
            MMkwe3 = XDTaGfU;
            for (; MMkwe3 < &XDTaGfU[strlen (XDTaGfU)]; MMkwe3 = MMkwe3 +1) {
                if (!(Check)&&MMkwe3 == XDTaGfU) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    break;
                    printf ("0\n");
                }
                else {
                    if (!(Check || (*MMkwe3 >= '0' && *MMkwe3 <= '9'))) {
                        break;
                        printf ("0\n");
                    }
                    else if (MMkwe3 == &XDTaGfU[strlen (XDTaGfU) - 1]) {
                        printf ("1\n");
                    }
                }
            }
            sYDAm4Q5kep = sYDAm4Q5kep + 1;
        }
    }
    return 0;
}

