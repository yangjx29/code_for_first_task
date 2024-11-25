int rCuqX8tF, OH6cUj4JovWI;

int p8GMuWeyC (char YjG5gp8US [200] [200]) {
    char b [200] [200];
    int q = 0, SLy5hgq, myiaXPMNpx;
    for (SLy5hgq = 0; OH6cUj4JovWI +2 > SLy5hgq; SLy5hgq = SLy5hgq +1)
        for (myiaXPMNpx = 0; myiaXPMNpx < OH6cUj4JovWI +2; myiaXPMNpx = myiaXPMNpx + 1)
            b[SLy5hgq][myiaXPMNpx] = YjG5gp8US[SLy5hgq][myiaXPMNpx];
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
    for (SLy5hgq = 1; OH6cUj4JovWI >= SLy5hgq; SLy5hgq++) {
        myiaXPMNpx = 1;
        while (myiaXPMNpx <= OH6cUj4JovWI) {
            if ((!('@' != YjG5gp8US[SLy5hgq][myiaXPMNpx])) || (!('.' != YjG5gp8US[SLy5hgq][myiaXPMNpx]) && (!('@' != YjG5gp8US[SLy5hgq][myiaXPMNpx + 1]) || YjG5gp8US[SLy5hgq][myiaXPMNpx - 1] == '@' || !('@' != YjG5gp8US[SLy5hgq +1][myiaXPMNpx]) || !('@' != YjG5gp8US[SLy5hgq -1][myiaXPMNpx])))) {
                b[SLy5hgq][myiaXPMNpx] = '@';
                q = q + 1;
            }
            myiaXPMNpx = myiaXPMNpx + 1;
        };
    }
    for (SLy5hgq = 0; SLy5hgq < OH6cUj4JovWI +2; SLy5hgq++)
        for (myiaXPMNpx = 0; myiaXPMNpx < OH6cUj4JovWI +2; myiaXPMNpx++)
            YjG5gp8US[SLy5hgq][myiaXPMNpx] = b[SLy5hgq][myiaXPMNpx];
    return q;
}

int main () {
    int SLy5hgq;
    int jZR4CP [200] = {0};
    int myiaXPMNpx;
    char YjG5gp8US [200] [200];
    char b;
    scanf ("%d", &OH6cUj4JovWI);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (SLy5hgq = 1; SLy5hgq <= OH6cUj4JovWI; SLy5hgq++) {
        b = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        {
            myiaXPMNpx = 1;
            while (myiaXPMNpx <= OH6cUj4JovWI) {
                YjG5gp8US[SLy5hgq][myiaXPMNpx] = getchar ();
                if (YjG5gp8US[SLy5hgq][myiaXPMNpx] == '@')
                    jZR4CP[1]++;
                myiaXPMNpx++;
            };
        };
    }
    b = getchar ();
    scanf ("%d", &rCuqX8tF);
    for (SLy5hgq = 0; SLy5hgq < OH6cUj4JovWI +2; SLy5hgq++)
        YjG5gp8US[0][SLy5hgq] = YjG5gp8US[OH6cUj4JovWI +1][SLy5hgq] = '#';
    {
        SLy5hgq = 0;
        while (SLy5hgq < OH6cUj4JovWI +2) {
            YjG5gp8US[SLy5hgq][0] = YjG5gp8US[SLy5hgq][OH6cUj4JovWI +1] = '#';
            SLy5hgq = SLy5hgq +1;
        };
    }
    {
        SLy5hgq = 2;
        while (SLy5hgq <= rCuqX8tF) {
            jZR4CP[SLy5hgq] = p8GMuWeyC (YjG5gp8US);
            SLy5hgq++;
        };
    }
    printf ("%d", jZR4CP[rCuqX8tF]);
}

