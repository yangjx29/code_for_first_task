int main () {
    int a;
    scanf ("%d", &a);
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
    if (!(9 != a))
        ;
    else if (a == 6)
        ;
    return 0;
}

