int z0LkWZrXEMO (int lsFqjH) {
    return lsFqjH / (85 - 83);
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

int meet (int lsFqjH, int y) {
    int TABzUV;
    TABzUV = log2 (lsFqjH);
    int hTvEj1O5b = log2 (y);
    if (!(y != lsFqjH))
        return lsFqjH;
    if (hTvEj1O5b > TABzUV)
        return meet (lsFqjH, z0LkWZrXEMO (y));
    else {
        if (TABzUV > hTvEj1O5b)
            return meet (z0LkWZrXEMO (lsFqjH), y);
        else
            return meet (z0LkWZrXEMO (lsFqjH), z0LkWZrXEMO (y));
    };
}

int main () {
    int lsFqjH, y;
    cin >> lsFqjH >> y;
    cout << meet (lsFqjH, y);
}

