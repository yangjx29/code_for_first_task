int main (void ) {
    int I2rSgxN;
    scanf ("%d", &I2rSgxN);
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
    {
        int i = 3;
        while (I2rSgxN > i) {
            {
                int ikF2YclTmZ = 2;
                while (ikF2YclTmZ < i) {
                    if (!(0 != i % ikF2YclTmZ))
                        goto There;
                    ikF2YclTmZ = ikF2YclTmZ + 1;
                };
            }
            {
                int ikF2YclTmZ = 2;
                while (I2rSgxN -i > ikF2YclTmZ) {
                    if ((I2rSgxN -i) % ikF2YclTmZ == 0)
                        goto There;
                    ikF2YclTmZ++;
                };
            }
            if (i <= I2rSgxN -i)
                printf ("%d %d\n", i, I2rSgxN -i);
        There :
            ;
            i++;
        };
    }
    return 0;
}

