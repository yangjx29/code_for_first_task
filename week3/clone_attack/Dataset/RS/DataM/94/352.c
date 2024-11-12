void  slbGAJu (int *GlEfRkQyP, int NXGysE5N0D, int al6KOJIMtr) {
    int rPj3T6d;
    rPj3T6d = GlEfRkQyP[NXGysE5N0D];
    GlEfRkQyP[NXGysE5N0D] = GlEfRkQyP[al6KOJIMtr];
    GlEfRkQyP[al6KOJIMtr] = rPj3T6d;
}

int main () {
    int Iuqcjs8 = 0;
    int GlEfRkQyP [(695 - 194)];
    int K39KxYZ0dD;
    cin >> K39KxYZ0dD;
    {
        int E9rT5mY = (295 - 295);
        while (K39KxYZ0dD > E9rT5mY) {
            cin >> GlEfRkQyP[E9rT5mY];
            E9rT5mY = E9rT5mY +1;
        };
    }
    {
        int E9rT5mY = K39KxYZ0dD -(592 - 591);
        while (E9rT5mY >= (431 - 431)) {
            for (int Z70ul3STEp = (842 - 842);
            Z70ul3STEp < E9rT5mY; Z70ul3STEp = Z70ul3STEp +1)
                if (GlEfRkQyP[Z70ul3STEp] > GlEfRkQyP[Z70ul3STEp +(872 - 871)])
                    slbGAJu (GlEfRkQyP, Z70ul3STEp, Z70ul3STEp +1);
            E9rT5mY = E9rT5mY -1;
        };
    }
    {
        int E9rT5mY = 0;
        while (E9rT5mY < K39KxYZ0dD) {
            if (GlEfRkQyP[E9rT5mY] % (30 - 28))
                if (Iuqcjs8 = Iuqcjs8 +1)
                    cout << ',' << GlEfRkQyP[E9rT5mY];
                else
                    cout << GlEfRkQyP[E9rT5mY];
            E9rT5mY = E9rT5mY +1;
        };
    }
    return 0;
}

