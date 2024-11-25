int main () {
    int gYW9Uk8vbGC;
    int IiST0hfQok8R;
    int NG6UFCDmH;
    int DaeKk6FlN2;
    int Oo3jSEQzkp5 [gYW9Uk8vbGC];
    int V4nuJlfMY [100];
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
    getchar ();
    getchar ();
    DaeKk6FlN2 = 1;
    V4nuJlfMY[0] = (809 - 808);
    scanf ("%d", &gYW9Uk8vbGC);
    for (IiST0hfQok8R = 0; IiST0hfQok8R < gYW9Uk8vbGC; IiST0hfQok8R = IiST0hfQok8R +1)
        scanf ("%d", &Oo3jSEQzkp5[IiST0hfQok8R]);
    for (IiST0hfQok8R = 1; IiST0hfQok8R < gYW9Uk8vbGC; IiST0hfQok8R = IiST0hfQok8R +1) {
        V4nuJlfMY[IiST0hfQok8R] = 1;
        {
            NG6UFCDmH = 0;
            while (NG6UFCDmH < IiST0hfQok8R) {
                if (Oo3jSEQzkp5[NG6UFCDmH] >= Oo3jSEQzkp5[IiST0hfQok8R])
                    if (V4nuJlfMY[NG6UFCDmH] + 1 > V4nuJlfMY[IiST0hfQok8R])
                        V4nuJlfMY[IiST0hfQok8R] = V4nuJlfMY[NG6UFCDmH] + 1;
                NG6UFCDmH = NG6UFCDmH +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (V4nuJlfMY[IiST0hfQok8R] > DaeKk6FlN2)
            DaeKk6FlN2 = V4nuJlfMY[IiST0hfQok8R];
    }
    printf ("%d", DaeKk6FlN2);
}

