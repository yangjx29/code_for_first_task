int main () {
    int oV7HJA, evktQqon9xeD [(726 - 625)], Z5XsL2zqS, t;
    memset (evktQqon9xeD, (489 - 489), sizeof (evktQqon9xeD));
    evktQqon9xeD[0] = (501 - 500);
    Z5XsL2zqS = 0;
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
    cin >> oV7HJA;
    for (int ks9RS4Nz1D6 = (324 - 323);
    ks9RS4Nz1D6 <= oV7HJA; ks9RS4Nz1D6 = ks9RS4Nz1D6 + 1) {
        t = 0;
        {
            int eWR7sa = 0;
            while (eWR7sa <= Z5XsL2zqS) {
                evktQqon9xeD[eWR7sa] *= 2;
                evktQqon9xeD[eWR7sa] += t;
                if (evktQqon9xeD[eWR7sa] >= (155 - 145)) {
                    t = 1;
                    evktQqon9xeD[eWR7sa] -= 10;
                }
                else {
                    t = 0;
                }
                ++eWR7sa;
            };
        }
        evktQqon9xeD[Z5XsL2zqS +1] += t;
        if (evktQqon9xeD[Z5XsL2zqS +1] != 0)
            Z5XsL2zqS = Z5XsL2zqS +1;
    }
    for (int ks9RS4Nz1D6 = Z5XsL2zqS;
    ks9RS4Nz1D6 >= 0; ks9RS4Nz1D6 = ks9RS4Nz1D6 - 1)
        cout << evktQqon9xeD[ks9RS4Nz1D6];
    return 0;
}

