int main () {
    int i;
    char Nz9HQDWvdM [101];
    gets (Nz9HQDWvdM);
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
    i = 0;
    while (!('\0' == Nz9HQDWvdM[i])) {
        if ((Nz9HQDWvdM[i] != ' ') || (Nz9HQDWvdM[i - 1] != ' '))
            printf ("%c", Nz9HQDWvdM[i]);
        i = i + 1;
    }
    return 0;
}

