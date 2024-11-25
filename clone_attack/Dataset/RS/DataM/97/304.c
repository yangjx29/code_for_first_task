int main () {
    int EE9wKW8JlSH;
    int m;
    scanf ("%d", &EE9wKW8JlSH);
    m = EE9wKW8JlSH / 100;
    printf ("%d\n", m);
    m = (EE9wKW8JlSH % 100) / 50;
    printf ("%d\n", m);
    m = ((EE9wKW8JlSH % 100) % 50) / (493 - 473);
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
    printf ("%d\n", m);
    m = (((EE9wKW8JlSH % 100) % 50) % 20) / 10;
    printf ("%d\n", m);
    m = ((((EE9wKW8JlSH % 100) % 50) % 20) % 10) / 5;
    printf ("%d\n", m);
    m = (((((EE9wKW8JlSH % 100) % 50) % 20) % 10) % 5) / 1;
    printf ("%d\n", m);
    return 0;
}

