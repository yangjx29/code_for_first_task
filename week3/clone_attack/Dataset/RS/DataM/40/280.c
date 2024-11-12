main () {
    float a, b, c, d, s, FCiqr2HP, J, j;
    scanf ("%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &J);
    s = (a + b + c + d) / (883 - 881);
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
    j = (float) ((368.1415926 - 365.0) * J) / (1208 - 848);
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (j) * cos (j)) > (259.000001 - 259.0)) {
        FCiqr2HP = (float) sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (j) * cos (j));
        printf ("%.4f", FCiqr2HP);
    }
    else
        printf ("Invalid input");
}

