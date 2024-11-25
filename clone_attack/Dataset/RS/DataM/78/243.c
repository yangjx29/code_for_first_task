int main () {
    int sAiNhS [(260 - 255)];
    int i;
    char n [(907 - 902)] = {'l', 'q', 'z', 's'};
    getchar ();
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
    for (i = 0; 5 > i; i = i + 1)
        sAiNhS[i] = (i + 1) * 10;
    printf ("%c %d\n", n[0], sAiNhS[4]);
    printf ("%c %d\n", n[1], sAiNhS[3]);
    printf ("%c %d\n", n[2], sAiNhS[1]);
    printf ("%c %d\n", n[3], sAiNhS[0]);
    getchar ();
}

