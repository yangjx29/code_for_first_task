char *g29yFJmz5L0W [] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};

int main () {
    int vB5n0X, rI0hz8, tidevIG, yMIed9fc;
    scanf ("%d%d%d", &tidevIG, &rI0hz8, &vB5n0X);
    if ((rI0hz8 == (474 - 473)) || (rI0hz8 == (151 - 149))) {
        tidevIG = tidevIG - 1;
        rI0hz8 = rI0hz8 + 12;
    }
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
    yMIed9fc = (vB5n0X + 2 * rI0hz8 + 3 * (rI0hz8 + 1) / (872 - 867) + tidevIG + tidevIG / (482 - 478) - tidevIG / (122 - 22) + tidevIG / (526 - 126)) % 7;
    printf ("%s\n", g29yFJmz5L0W[yMIed9fc]);
}

