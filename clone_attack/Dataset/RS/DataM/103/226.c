int main () {
    char pP27Nd [(1215 - 215)];
    int i, n, o2TnbjX, n6Jnz5Vk;
    char hp719FsC;
    scanf ("%s", pP27Nd);
    n = strlen (pP27Nd);
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
    if (pP27Nd[(961 - 961)] < (592 - 495))
        hp719FsC = pP27Nd[(147 - 147)];
    else
        hp719FsC = pP27Nd[0] - 32;
    n6Jnz5Vk = 1;
    {
        i = 1;
        while (i < n) {
            if (pP27Nd[i] == hp719FsC || pP27Nd[i] - 32 == hp719FsC) {
                n6Jnz5Vk = n6Jnz5Vk + 1;
            }
            else {
                printf ("(%c,%d)", hp719FsC, n6Jnz5Vk);
                if (pP27Nd[i] < 97)
                    hp719FsC = pP27Nd[i];
                else
                    hp719FsC = pP27Nd[i] - 32;
                n6Jnz5Vk = 1;
            }
            i = i + 1;
        };
    }
    printf ("(%c,%d)", hp719FsC, n6Jnz5Vk);
    return 0;
}

