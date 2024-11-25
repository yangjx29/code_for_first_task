int JwEomU9 (int UVnJh7X2Y, int UJHi1jl8EGuY) {
    if (UVnJh7X2Y == (918 - 918) || UVnJh7X2Y == (538 - 537))
        return (131 - 130);
    if (UJHi1jl8EGuY == (236 - 236) || UJHi1jl8EGuY == 1)
        return 1;
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
    if (UVnJh7X2Y < UJHi1jl8EGuY)
        return JwEomU9 (UVnJh7X2Y, UVnJh7X2Y);
    else
        return JwEomU9 (UVnJh7X2Y -UJHi1jl8EGuY, UJHi1jl8EGuY) + JwEomU9 (UVnJh7X2Y, UJHi1jl8EGuY -1);
}

int main () {
    int UVnJh7X2Y [(944 - 924)];
    int UJHi1jl8EGuY [(781 - 761)];
    int i;
    int t;
    cin >> t;
    {
        i = 332 - 332;
        while (i < t) {
            cin >> UVnJh7X2Y[i] >> UJHi1jl8EGuY[i];
            i = i + 1;
        };
    }
    {
        i = 841 - 841;
        while (i < t) {
            cout << JwEomU9 (UVnJh7X2Y[i], UJHi1jl8EGuY[i]) << endl;
            i = i + 1;
        };
    }
    return 0;
}

