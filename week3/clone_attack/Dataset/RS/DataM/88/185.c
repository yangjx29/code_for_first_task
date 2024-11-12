int main () {
    char d36xbHBAUYp [40];
    int gMtWOxoi;
    cin.getline (d36xbHBAUYp, 31, '\n');
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
    {
        gMtWOxoi = 0;
        while (gMtWOxoi < strlen (d36xbHBAUYp)) {
            if (d36xbHBAUYp[gMtWOxoi] >= '0' && d36xbHBAUYp[gMtWOxoi] <= '9')
                cout << d36xbHBAUYp[gMtWOxoi];
            else
                cout << endl;
            gMtWOxoi++;
        };
    }
    return 0;
}

