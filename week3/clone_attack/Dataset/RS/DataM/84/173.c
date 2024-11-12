int main (int argc, char *vuecGlQ []) {
    int AKUkXp34IVh;
    int HkJLadj;
    int PLYfFpe41MA, b;
    int pCsnlZ9Y;
    cin >> HkJLadj;
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
    PLYfFpe41MA = b = 0;
    {
        AKUkXp34IVh = 1;
        while (AKUkXp34IVh <= HkJLadj) {
            AKUkXp34IVh = AKUkXp34IVh +1;
            cin >> pCsnlZ9Y;
            if (pCsnlZ9Y >= PLYfFpe41MA) {
                b = PLYfFpe41MA;
                PLYfFpe41MA = pCsnlZ9Y;
            }
            else {
                if (pCsnlZ9Y > b) {
                    b = pCsnlZ9Y;
                };
            };
        };
    }
    cout << PLYfFpe41MA << endl;
    cout << b;
    return EXIT_SUCCESS;
}

