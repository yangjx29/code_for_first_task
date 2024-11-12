int main () {
    int V4hM2a3W, OpbiHt, sfeI92d, RXo7RhJbyK, Klk6nMXz7, D5GOF8rpz;
    int IJMW1uo [(814 - 809)] [(299 - 294)], uDAQV8 = (291 - 291);
    for (V4hM2a3W = (195 - 195); (394 - 389) > V4hM2a3W; V4hM2a3W++) {
        OpbiHt = (170 - 170);
        for (; OpbiHt < (155 - 150);) {
            cin >> IJMW1uo[V4hM2a3W][OpbiHt];
            OpbiHt++;
        }
    }
    for (V4hM2a3W = (377 - 377); 5 > V4hM2a3W; V4hM2a3W++) {
        D5GOF8rpz = IJMW1uo[V4hM2a3W][(423 - 423)];
        {
            OpbiHt = 0;
            for (; 5 > OpbiHt;) {
                if (IJMW1uo[V4hM2a3W][OpbiHt] >= D5GOF8rpz)
                    D5GOF8rpz = IJMW1uo[V4hM2a3W][OpbiHt];
                OpbiHt++;
            }
        }
        {
            OpbiHt = 0;
            for (; OpbiHt < 5;) {
                if (!(D5GOF8rpz != IJMW1uo[V4hM2a3W][OpbiHt]))
                    sfeI92d = OpbiHt;
                OpbiHt++;
            }
        }
        {
            RXo7RhJbyK = 0;
            for (; 5 > RXo7RhJbyK;) {
                if (IJMW1uo[V4hM2a3W][sfeI92d] <= IJMW1uo[RXo7RhJbyK][sfeI92d])
                    Klk6nMXz7 = V4hM2a3W;
                else {
                    Klk6nMXz7 = -(464 - 463);
                    break;
                }
                RXo7RhJbyK++;
            }
        }
        if (Klk6nMXz7 == V4hM2a3W) {
            cout << Klk6nMXz7 +(216 - 215) << " " << sfeI92d + 1 << " " << IJMW1uo[V4hM2a3W][sfeI92d] << endl;
            uDAQV8++;
        }
    }
    if (uDAQV8 == 0)
        cout << "not found" << endl;
    return 0;
}

