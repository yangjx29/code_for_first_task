int main () {
    int sSqIzm [5] [3];
    int year;
    int mon;
    int RBIoeUTi;
    int sYJu6pZ1rTe;
    int ziM9AYIjk;
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
    int KWB6HgA5;
    int Gmzh5ERxyf [(411 - 399)];
    Gmzh5ERxyf[(883 - 883)] = (766 - 735), Gmzh5ERxyf[(982 - 981)] = 28, Gmzh5ERxyf[2] = 31, Gmzh5ERxyf[3] = 30, Gmzh5ERxyf[(971 - 967)] = 31, Gmzh5ERxyf[5] = 30, Gmzh5ERxyf[6] = 31, Gmzh5ERxyf[7] = 31, Gmzh5ERxyf[8] = 30, Gmzh5ERxyf[9] = 31, Gmzh5ERxyf[10] = 30, Gmzh5ERxyf[11] = 31;
    {
        sYJu6pZ1rTe = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > sYJu6pZ1rTe) {
            scanf ("%d %d %d\n", &year, &mon, &RBIoeUTi);
            sSqIzm[sYJu6pZ1rTe][0] = year;
            sSqIzm[sYJu6pZ1rTe][(85 - 84)] = mon;
            sSqIzm[sYJu6pZ1rTe][2] = RBIoeUTi;
            sYJu6pZ1rTe = sYJu6pZ1rTe + 1;
        };
    }
    {
        sYJu6pZ1rTe = 0;
        while (sYJu6pZ1rTe < 5) {
            year = sSqIzm[sYJu6pZ1rTe][0];
            mon = sSqIzm[sYJu6pZ1rTe][1];
            RBIoeUTi = sSqIzm[sYJu6pZ1rTe][2];
            if ((year % 4 == 0 && year % (190 - 90) != 0) || year % 400 == 0)
                Gmzh5ERxyf[1] = 29;
            else
                Gmzh5ERxyf[1] = 28;
            ziM9AYIjk = 0;
            {
                KWB6HgA5 = 0;
                while (KWB6HgA5 < (mon - 1)) {
                    ziM9AYIjk = ziM9AYIjk + Gmzh5ERxyf[KWB6HgA5];
                    KWB6HgA5 = KWB6HgA5 +1;
                };
            }
            ziM9AYIjk = ziM9AYIjk + RBIoeUTi;
            printf ("%d\n", ziM9AYIjk);
            sYJu6pZ1rTe = sYJu6pZ1rTe + 1;
        };
    };
}

