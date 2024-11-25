char Y3Jrtb1 [101], uW1VGO, UKXGQyrAJC6;
int f (int c1tRWIuJ);

int main () {
    int fEslJZA;
    cin.getline (Y3Jrtb1, 101);
    uW1VGO = Y3Jrtb1[0];
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
        fEslJZA = 0;
        while (!('\0' == Y3Jrtb1[fEslJZA])) {
            UKXGQyrAJC6 = Y3Jrtb1[fEslJZA];
            fEslJZA = fEslJZA + 1;
        };
    }
    f (0);
    return 0;
}

int f (int c1tRWIuJ) {
    int fEslJZA;
    {
        fEslJZA = c1tRWIuJ;
        while (!('\0' == Y3Jrtb1[fEslJZA])) {
            if (Y3Jrtb1[fEslJZA] == uW1VGO) {
                Y3Jrtb1[fEslJZA] = '0';
                cout << fEslJZA << " " << f (fEslJZA + 1) << endl;
            }
            else {
                if (Y3Jrtb1[fEslJZA] == UKXGQyrAJC6) {
                    Y3Jrtb1[fEslJZA] = '1';
                    return fEslJZA;
                };
            }
            fEslJZA++;
        };
    };
}

