int main () {
    int vhIozvwW7kHJ [20000], UVjK0osI, EUB1RtHXy4, mGQCXbip2y9w, r = 0, MNCRVBfhqJ6 = 0;
    cin >> mGQCXbip2y9w;
    {
        UVjK0osI = 0;
        while (mGQCXbip2y9w > UVjK0osI) {
            cin >> vhIozvwW7kHJ[UVjK0osI];
            UVjK0osI++;
        };
    }
    {
        UVjK0osI = mGQCXbip2y9w - 1;
        while (0 < UVjK0osI) {
            {
                EUB1RtHXy4 = UVjK0osI -1;
                while (0 <= EUB1RtHXy4) {
                    if (!(vhIozvwW7kHJ[EUB1RtHXy4] != vhIozvwW7kHJ[UVjK0osI])) {
                        vhIozvwW7kHJ[UVjK0osI] = -1;
                        r++;
                    }
                    EUB1RtHXy4 = EUB1RtHXy4 -1;
                };
            }
            UVjK0osI = UVjK0osI -1;
        };
    }
    {
        UVjK0osI = 0;
        while (UVjK0osI < mGQCXbip2y9w) {
            if (vhIozvwW7kHJ[UVjK0osI] != -1) {
                if (MNCRVBfhqJ6 != mGQCXbip2y9w - r - 1) {
                    cout << vhIozvwW7kHJ[UVjK0osI] << " ";
                    MNCRVBfhqJ6++;
                }
                else
                    cout << vhIozvwW7kHJ[UVjK0osI] << endl;
            }
            UVjK0osI++;
        };
    }
    return 0;
}

