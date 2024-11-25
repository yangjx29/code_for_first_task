void  PxzUIVZJsT (int *tWjkbC2TA, int *x95m6KqlWUgz) {
    int JEgRDNFo3e59;
    JEgRDNFo3e59 = *tWjkbC2TA;
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
    *tWjkbC2TA = *x95m6KqlWUgz;
    *x95m6KqlWUgz = JEgRDNFo3e59;
}

int main () {
    int Bz6fZw;
    int num [Bz6fZw +10];
    cin >> Bz6fZw;
    for (int RdiPqn6M = (679 - 679);
    RdiPqn6M < Bz6fZw; RdiPqn6M = RdiPqn6M +1) {
        cin >> *(num + RdiPqn6M);
    }
    for (int RdiPqn6M = (445 - 445), pM0cnKwhjtd = Bz6fZw -1;
    pM0cnKwhjtd > RdiPqn6M; RdiPqn6M = RdiPqn6M +1, pM0cnKwhjtd = pM0cnKwhjtd - 1) {
        PxzUIVZJsT (num + RdiPqn6M, num + pM0cnKwhjtd);
    }
    {
        int RdiPqn6M = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (RdiPqn6M < Bz6fZw -1) {
            cout << *(num + RdiPqn6M) << ' ';
            RdiPqn6M++;
        };
    }
    cout << *(num + Bz6fZw -1) << endl;
    return 0;
}

