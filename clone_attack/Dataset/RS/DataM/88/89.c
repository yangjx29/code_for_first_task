int main () {
    char *p;
    gets (p);
    int i;
    p = (char *) malloc (1000 * sizeof (char));
    {
        i = 0;
        while (*(p + i) != '\0') {
            if (isdigit (*(p + i)))
                printf ("%c", *(p + i));
            if (isdigit (*(p + i)) && isdigit (*(p + i + 1)) == 0)
                ;
            i++;
        };
    }
    return 0;
}

