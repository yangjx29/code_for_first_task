int main () {
    int JSeHi2M9Yx [(870 - 619)];
    int GeEy1b [251];
    char eJOhpemtZk7 [251];
    char pXEBZMvljT3F [251];
    int ZB7rqK1bwU;
    ZB7rqK1bwU = 0;
    cin.getline (eJOhpemtZk7, 251);
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
    cin.getline (pXEBZMvljT3F, 251);
    memset (JSeHi2M9Yx, 0, sizeof (JSeHi2M9Yx));
    memset (GeEy1b, 0, sizeof (GeEy1b));
    {
        int rnIo3r = 0;
        while (rnIo3r <= strlen (eJOhpemtZk7) - 1) {
            JSeHi2M9Yx[rnIo3r] = eJOhpemtZk7[strlen (eJOhpemtZk7) - 1 - rnIo3r] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            rnIo3r = rnIo3r + 1;
        };
    }
    {
        int rnIo3r = 0;
        while (rnIo3r <= strlen (pXEBZMvljT3F) - 1) {
            GeEy1b[rnIo3r] = pXEBZMvljT3F[strlen (pXEBZMvljT3F) - 1 - rnIo3r] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rnIo3r++;
        };
    }
    {
        int rnIo3r = 0;
        while (rnIo3r <= 249) {
            JSeHi2M9Yx[rnIo3r + 1] += (JSeHi2M9Yx[rnIo3r] + GeEy1b[rnIo3r]) / 10;
            JSeHi2M9Yx[rnIo3r] = (JSeHi2M9Yx[rnIo3r] + GeEy1b[rnIo3r]) % 10;
            rnIo3r++;
        };
    }
    {
        int rnIo3r = 249;
        while (rnIo3r >= 0) {
            if (JSeHi2M9Yx[rnIo3r] != 0) {
                ZB7rqK1bwU = rnIo3r;
                break;
            }
            rnIo3r--;
        };
    }
    {
        int rnIo3r = ZB7rqK1bwU;
        while (rnIo3r >= 0) {
            cout << JSeHi2M9Yx[rnIo3r];
            rnIo3r--;
        };
    }
    cout << endl;
    return 0;
}

