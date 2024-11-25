int pos;

void  match (char lch) {
    int spos = pos;
    char ch;
    pos = pos + 1;
    scanf ("%c", &ch);
    for (; ch == lch;) {
        match (ch);
        pos++;
        scanf ("%c", &ch);
    }
    printf ("%d %d\n", spos, pos);
}

int main () {
    char ch;
    match (ch);
    pos = 0;
    scanf ("%c", &ch);
    return 0;
}

