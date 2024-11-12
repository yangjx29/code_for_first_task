int main () {
    char dijstPlywa;
    int a6LA2GclIek = 0, veZs8mJaGnC = 0, uiUVwSTP7ONQ = 0, z12WRQu = 0, jVZfYrP = 0;
    int x [(534 - 508)], jNh2YKvQ [(608 - 582)];
    for (veZs8mJaGnC = 0; (853 - 828) >= veZs8mJaGnC; veZs8mJaGnC = veZs8mJaGnC + 1) {
        x[veZs8mJaGnC] = jNh2YKvQ[veZs8mJaGnC] = 0;
    }
    getchar ();
    cin >> jVZfYrP;
    for (z12WRQu = 1; jVZfYrP >= z12WRQu; z12WRQu = z12WRQu + 1) {
        for (veZs8mJaGnC = 0; veZs8mJaGnC <= 25; veZs8mJaGnC = veZs8mJaGnC + 1) {
            x[veZs8mJaGnC] = jNh2YKvQ[veZs8mJaGnC] = 0;
        }
        for (veZs8mJaGnC = 1;; veZs8mJaGnC = veZs8mJaGnC + 1) {
            dijstPlywa = getchar ();
            if (dijstPlywa == '\n')
                break;
            a6LA2GclIek = dijstPlywa - 97;
            if (a6LA2GclIek + 97 < x[a6LA2GclIek])
                continue;
            if (x[a6LA2GclIek] == 0)
                jNh2YKvQ[a6LA2GclIek] = veZs8mJaGnC;
            x[a6LA2GclIek] = x[a6LA2GclIek] + dijstPlywa;
        }
        a6LA2GclIek = 0;
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
        for (uiUVwSTP7ONQ = 0; uiUVwSTP7ONQ <= 25; uiUVwSTP7ONQ = uiUVwSTP7ONQ + 1) {
            if (jNh2YKvQ[uiUVwSTP7ONQ] == 0)
                a6LA2GclIek = a6LA2GclIek + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        for (uiUVwSTP7ONQ = 0; uiUVwSTP7ONQ <= 25; uiUVwSTP7ONQ = uiUVwSTP7ONQ + 1) {
            if (x[uiUVwSTP7ONQ] > uiUVwSTP7ONQ + 97)
                a6LA2GclIek = a6LA2GclIek + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (a6LA2GclIek == 26)
            cout << "no" << endl;
        else {
            for (uiUVwSTP7ONQ = 1; uiUVwSTP7ONQ <= 100; uiUVwSTP7ONQ = uiUVwSTP7ONQ + 1) {
                for (veZs8mJaGnC = 0; veZs8mJaGnC <= 25; veZs8mJaGnC = veZs8mJaGnC + 1) {
                    if (x[veZs8mJaGnC] != veZs8mJaGnC + 97)
                        continue;
                    if (jNh2YKvQ[veZs8mJaGnC] == uiUVwSTP7ONQ) {
                        dijstPlywa = veZs8mJaGnC + 97;
                        break;
                    };
                }
                if (jNh2YKvQ[veZs8mJaGnC] == uiUVwSTP7ONQ) {
                    cout << dijstPlywa << endl;
                    break;
                };
            };
        };
    }
    return 0;
}

