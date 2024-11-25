char IMT9VFzLZe [6];
int Rs1Mk8, wxbE1rd;

void  wBaky6z (int Rs1Mk8, int wxbE1rd) {
    int ggbavJEeOi;
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
    if (wxbE1rd > Rs1Mk8) {
        ggbavJEeOi = IMT9VFzLZe[Rs1Mk8];
        IMT9VFzLZe[Rs1Mk8] = IMT9VFzLZe[wxbE1rd];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        IMT9VFzLZe[wxbE1rd] = ggbavJEeOi;
        wBaky6z (Rs1Mk8 +1, wxbE1rd - 1);
    }
    else
        return;
}

void  main () {
    gets (IMT9VFzLZe);
    puts (IMT9VFzLZe);
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
    wBaky6z (0, strlen (IMT9VFzLZe) - 1);
}

