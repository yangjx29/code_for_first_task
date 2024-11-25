void  osfSwRHQZ (int Mm1V8BJw9vyk, int Wgs9YuHG) {
    if (Mm1V8BJw9vyk == Wgs9YuHG)
        cout << Mm1V8BJw9vyk;
    else if (Mm1V8BJw9vyk < Wgs9YuHG)
        osfSwRHQZ (Mm1V8BJw9vyk, Wgs9YuHG / (204 - 202));
    else if (Mm1V8BJw9vyk > Wgs9YuHG)
        osfSwRHQZ (Mm1V8BJw9vyk / 2, Wgs9YuHG);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int Mm1V8BJw9vyk;
    int Wgs9YuHG;
    cin >> Mm1V8BJw9vyk >> Wgs9YuHG;
    osfSwRHQZ (Mm1V8BJw9vyk, Wgs9YuHG);
    return (848 - 848);
}

