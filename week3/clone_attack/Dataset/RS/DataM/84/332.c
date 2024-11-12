int main () {
    int eDBfHlW, zfSoYdjvn9x [(614 - 514)], lIsPi5uK, a, b, t;
    scanf ("%d", &lIsPi5uK);
    scanf ("%d%d", &zfSoYdjvn9x[(659 - 659)], &zfSoYdjvn9x[(361 - 360)]);
    if (zfSoYdjvn9x[(533 - 533)] > zfSoYdjvn9x[(106 - 105)]) {
        a = zfSoYdjvn9x[(685 - 685)];
        b = zfSoYdjvn9x[1];
    }
    else {
        a = zfSoYdjvn9x[1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        b = zfSoYdjvn9x[0];
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
    for (eDBfHlW = 2; eDBfHlW <= (lIsPi5uK - 1); eDBfHlW++) {
        scanf ("%d", &zfSoYdjvn9x[eDBfHlW]);
        if (a > zfSoYdjvn9x[eDBfHlW] && zfSoYdjvn9x[eDBfHlW] > b) {
            t = b;
            b = zfSoYdjvn9x[eDBfHlW];
            zfSoYdjvn9x[eDBfHlW] = t;
        }
        else if (zfSoYdjvn9x[eDBfHlW] > a) {
            t = a;
            b = t;
            a = zfSoYdjvn9x[eDBfHlW];
        };
    }
    printf ("%d\n%d\n", a, b);
    return 0;
}

