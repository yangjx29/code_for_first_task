int yuqiwuguan (int O40LuUxj) {
    if (!(0 != O40LuUxj % 7)) {
        return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        int Rxa9YV6nm = O40LuUxj;
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
        while (0 < Rxa9YV6nm) {
            if (Rxa9YV6nm % 10 == 7) {
                return 0;
            }
            Rxa9YV6nm = Rxa9YV6nm / 10;
        };
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
    return (671 - 670);
}

int main () {
    int i, fHITBhNE38, KAxpqmOtJ;
    scanf ("%d", &KAxpqmOtJ);
    fHITBhNE38 = 0;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= KAxpqmOtJ) {
            if (yuqiwuguan (i)) {
                fHITBhNE38 = fHITBhNE38 + i * i;
            }
            i = i + 1;
        };
    }
    printf ("%d", fHITBhNE38);
    return 0;
}

