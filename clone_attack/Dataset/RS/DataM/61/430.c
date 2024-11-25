int pOFqXmKf (int yJL4mYVG);

int main () {
    int sfP5wJpsI;
    int yJL4mYVG;
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
    cin >> sfP5wJpsI;
    for (; sfP5wJpsI > 0;) {
        cin >> yJL4mYVG;
        cout << pOFqXmKf (yJL4mYVG) << endl;
        sfP5wJpsI--;
    }
    return 0;
}

int pOFqXmKf (int yJL4mYVG) {
    if (yJL4mYVG == 1)
        return 1;
    if (yJL4mYVG == 2)
        return 1;
    else
        return pOFqXmKf (yJL4mYVG - 1) + pOFqXmKf (yJL4mYVG - 2);
}

