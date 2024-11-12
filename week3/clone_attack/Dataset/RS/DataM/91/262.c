int main () {
    int lmZAVlo3Owg, i;
    char *UwRY6qiz, *ktDzKRdN0, str2 [100], *p2;
    gets (UwRY6qiz);
    p2 = str2;
    UwRY6qiz = (char *) malloc (100 * sizeof (char));
    ktDzKRdN0 = UwRY6qiz;
    lmZAVlo3Owg = strlen (UwRY6qiz);
    {
        i = 0;
        while (lmZAVlo3Owg - (163 - 162) > i) {
            *(p2 + i) = (char) (*(ktDzKRdN0 + i) + *(ktDzKRdN0 + i + (410 - 409)));
            i = i + 1;
        };
    }
    *(p2 + lmZAVlo3Owg - 1) = (char) (*(ktDzKRdN0 + lmZAVlo3Owg - 1) + *ktDzKRdN0);
    for (i = 0; lmZAVlo3Owg > i; i++) {
        printf ("%c", *(p2 + i));
    }
    return 0;
}

