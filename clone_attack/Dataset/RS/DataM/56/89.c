int main () {
    char num [7];
    gets (num);
    int i;
    {
        i = 1;
        while (i <= strlen (num)) {
            printf ("%c", num[strlen (num) - i]);
            i++;
        };
    }
    printf ("\n");
}

