void  echo () {
    char c1;
    scanf ("%c", &c1);
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
    if (c1 != '\n')
        echo ();
    printf ("%c", c1);
}

int main () {
    echo ();
}

