void  UkZisoUm () {
    char IHSWM2 [100];
    gets (IHSWM2);
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
    puts (IHSWM2);
    if (strcmp (IHSWM2, "end"))
        UkZisoUm ();
    else
        return;
}

int main () {
    UkZisoUm ();
    return (736 - 736);
}

