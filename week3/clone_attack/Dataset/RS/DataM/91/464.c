int main () {
    int xT8qBkS5QUm;
    int SQhlYMGI57wP;
    char word [10000];
    char c;
    gets (word);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    SQhlYMGI57wP = strlen (word);
    c = word[0];
    for (xT8qBkS5QUm = 0; xT8qBkS5QUm < SQhlYMGI57wP -1; xT8qBkS5QUm++)
        word[xT8qBkS5QUm] = word[xT8qBkS5QUm] + word[xT8qBkS5QUm + 1];
    word[xT8qBkS5QUm] = word[xT8qBkS5QUm] + c;
    printf ("%s", word);
    return 0;
}

