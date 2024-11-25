int main () {
    char word [100];
    int del = 0;
    int Rm4nQlS = strlen (word);
    cin.getline (word, 100);
    for (int AlbVHLtz = 1;
    AlbVHLtz < Rm4nQlS; AlbVHLtz++)
        if (*(word + AlbVHLtz) == ' ' && *(word + AlbVHLtz -1) == ' ') {
            del++;
            for (int swPWGcjdunqg = AlbVHLtz;
            swPWGcjdunqg < Rm4nQlS -del; swPWGcjdunqg++)
                *(word + swPWGcjdunqg) = *(word + swPWGcjdunqg + 1);
            AlbVHLtz--;
        }
    for (int k = 0;
    k < Rm4nQlS -del; k++)
        cout << *(word + k);
    return 0;
}

