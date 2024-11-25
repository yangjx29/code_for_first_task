int main () {
    int i;
    char NypduwUQ [MAX];
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
    gets (NypduwUQ);
    {
        i = 0;
        while (NypduwUQ[i]) {
            if (NypduwUQ[i] != ' ') {
                printf ("%c", NypduwUQ[i]);
            }
            if (NypduwUQ[i] == ' ' && NypduwUQ[i + (674 - 673)] != ' ') {
                printf ("%c", NypduwUQ[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

