int main () {
    char jWHcdNjRq13 [4];
    int dqG3Ef0e1;
    int MRBwj6eJxarq;
    int AsL7J2u;
    int kXxYUb [4];
    {
        dqG3Ef0e1 = 1;
        while (dqG3Ef0e1 <= (511 - 508)) {
            {
                MRBwj6eJxarq = 1;
                while (MRBwj6eJxarq <= 3) {
                    if (dqG3Ef0e1 != MRBwj6eJxarq) {
                        for (AsL7J2u = 1; AsL7J2u <= 3; AsL7J2u++) {
                            if (AsL7J2u != dqG3Ef0e1 && AsL7J2u != MRBwj6eJxarq) {
                                jWHcdNjRq13[dqG3Ef0e1] = 'A';
                                jWHcdNjRq13[MRBwj6eJxarq] = 'B';
                                jWHcdNjRq13[AsL7J2u] = 'C';
                                kXxYUb[dqG3Ef0e1] = (MRBwj6eJxarq > dqG3Ef0e1) + (AsL7J2u == MRBwj6eJxarq);
                                kXxYUb[MRBwj6eJxarq] = (dqG3Ef0e1 > MRBwj6eJxarq) + (dqG3Ef0e1 > AsL7J2u);
                                kXxYUb[AsL7J2u] = (AsL7J2u > MRBwj6eJxarq) + (MRBwj6eJxarq > dqG3Ef0e1);
                                if (kXxYUb[1] > kXxYUb[2] > kXxYUb[3]) {
                                    cout << jWHcdNjRq13[1] << jWHcdNjRq13[2] << jWHcdNjRq13[3];
                                };
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MRBwj6eJxarq++;
                };
            }
            dqG3Ef0e1++;
        };
    }
    return (372 - 372);
}

