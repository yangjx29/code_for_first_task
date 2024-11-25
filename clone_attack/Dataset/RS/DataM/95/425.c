int main () {
    int wZ9DjJv;
    int J7VOPjklKWC;
    int yEqbVe6sXFj;
    int OSfqvY2td;
    int FaYVPHNhZX;
    int fi42aNhqv9;
    wZ9DjJv = 1;
    char T3eZYj [(829 - 749)], T9N4caYyT [(363 - 283)];
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
    cin.get (T3eZYj, (194 - 114));
    cin.get ();
    cin.get (T9N4caYyT, 80);
    FaYVPHNhZX = strlen (T3eZYj);
    fi42aNhqv9 = strlen (T9N4caYyT);
    {
        J7VOPjklKWC = 175 - 175;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (J7VOPjklKWC < FaYVPHNhZX || fi42aNhqv9 > J7VOPjklKWC) {
            yEqbVe6sXFj = T3eZYj[J7VOPjklKWC];
            OSfqvY2td = T9N4caYyT[J7VOPjklKWC];
            if (yEqbVe6sXFj == OSfqvY2td || yEqbVe6sXFj == (OSfqvY2td +32) || !((yEqbVe6sXFj + 32) != OSfqvY2td))
                wZ9DjJv = 1;
            else {
                wZ9DjJv = 0;
                break;
            }
            J7VOPjklKWC = J7VOPjklKWC +1;
        };
    }
    if (wZ9DjJv == 1)
        cout << "=" << endl;
    else {
        if (OSfqvY2td < 'a')
            OSfqvY2td = OSfqvY2td +32;
        if (yEqbVe6sXFj < 'a')
            yEqbVe6sXFj = yEqbVe6sXFj + 32;
        if (yEqbVe6sXFj < OSfqvY2td)
            cout << "<" << endl;
        else
            cout << ">" << endl;
    }
    return 0;
}

