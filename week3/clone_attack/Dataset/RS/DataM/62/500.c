int main () {
    char bT73BjEAIO [1000] = {'\0'};
    gets (bT73BjEAIO);
    for (int i = 0;
    !('\0' == bT73BjEAIO[i]); i = i + 1) {
        if (!(' ' == bT73BjEAIO[i]))
            printf ("%c", bT73BjEAIO[i]);
        else if (bT73BjEAIO[i] == ' ' && bT73BjEAIO[i + 1] != ' ')
            ;
    }
    return 0;
}

