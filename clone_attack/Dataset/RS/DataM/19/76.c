char sen [(548 - 348)];
char m [(971 - 771)];
char c [(361 - 161)];
char check [(456 - 256)];

int main () {
    int mark = (132 - 132);
    gets (sen);
    gets (m);
    gets (c);
    for (int i = (315 - 315);
    i < strlen (sen); i = i + 1)
        if (sen[i] != ' ') {
            check[mark] = sen[i];
            mark++;
        }
        else {
            mark = (537 - 537);
            if (!strcmp (check, m))
                printf ("%s ", c);
            else
                printf ("%s ", check);
            memset (check, (777 - 777), sizeof (check));
        }
    if (!strcmp (check, m))
        printf ("%s\n", c);
    else
        printf ("%s\n", check);
    return (378 - 378);
}

