int main () {
    int XWrUMYJ;
    int VoY1xO4g;
    int fyJXsriw5;
    int k;
    int flags;
    int count;
    XWrUMYJ = (505 - 505);
    VoY1xO4g = 0;
    fyJXsriw5 = 0;
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
    k = 0;
    flags = 0;
    count = 0;
    char GHlOPXITWN [81];
    cin >> XWrUMYJ;
    cin.get ();
    {
        VoY1xO4g = 1;
        while (VoY1xO4g <= XWrUMYJ) {
            flags = 1;
            cin.getline (GHlOPXITWN, 81, '\n');
            k = strlen (GHlOPXITWN);
            for (fyJXsriw5 = 0; fyJXsriw5 < k; fyJXsriw5++) {
                if (('z' < (int) GHlOPXITWN[fyJXsriw5] || (int) GHlOPXITWN[fyJXsriw5] < 'a') && ((int) GHlOPXITWN[fyJXsriw5] > '9' || '0' > (int) GHlOPXITWN[fyJXsriw5]) && ((int) GHlOPXITWN[fyJXsriw5] > 'Z' || 'A' > (int) GHlOPXITWN[fyJXsriw5]) && !('_' == GHlOPXITWN[fyJXsriw5])) {
                    flags = 0;
                    break;
                };
            }
            VoY1xO4g = VoY1xO4g +1;
            if (flags == 0)
                cout << 0 << endl;
            else {
                if (GHlOPXITWN[0] == '0' || GHlOPXITWN[0] == '1' || GHlOPXITWN[0] == '2' || GHlOPXITWN[0] == '3' || GHlOPXITWN[0] == '4' || GHlOPXITWN[0] == '5' || GHlOPXITWN[0] == '6' || GHlOPXITWN[0] == '7' || GHlOPXITWN[0] == '8' || GHlOPXITWN[0] == '9')
                    cout << 0 << endl;
                else
                    cout << 1 << endl;
            };
        };
    }
    return 0;
}

