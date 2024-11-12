int main () {
    int zAGjrKPhY, rfJWdmE4wbZ7, y1, bgdNIRs85w, kvsx5tBVeAZ, FXGFJnk06Zyo, NiwgIQG = (472 - 472);
    int Rt7SM3RB [(171 - 71)] [100], xzCHYOG3LbPp [100] [100], r35CfQ [100] [100];
    cin >> zAGjrKPhY >> y1;
    for (kvsx5tBVeAZ = 0; kvsx5tBVeAZ < zAGjrKPhY; kvsx5tBVeAZ = kvsx5tBVeAZ + 1)
        for (FXGFJnk06Zyo = 0; FXGFJnk06Zyo < y1; FXGFJnk06Zyo = FXGFJnk06Zyo +1)
            cin >> Rt7SM3RB[kvsx5tBVeAZ][FXGFJnk06Zyo];
    cin >> rfJWdmE4wbZ7 >> bgdNIRs85w;
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
    for (kvsx5tBVeAZ = 0; kvsx5tBVeAZ < rfJWdmE4wbZ7; kvsx5tBVeAZ = kvsx5tBVeAZ + 1)
        for (FXGFJnk06Zyo = 0; FXGFJnk06Zyo < bgdNIRs85w; FXGFJnk06Zyo = FXGFJnk06Zyo +1)
            cin >> xzCHYOG3LbPp[kvsx5tBVeAZ][FXGFJnk06Zyo];
    {
        kvsx5tBVeAZ = 0;
        while (kvsx5tBVeAZ < zAGjrKPhY) {
            for (FXGFJnk06Zyo = 0; FXGFJnk06Zyo < bgdNIRs85w; FXGFJnk06Zyo = FXGFJnk06Zyo +1) {
                r35CfQ[kvsx5tBVeAZ][FXGFJnk06Zyo] = 0;
                {
                    NiwgIQG = 0;
                    while (NiwgIQG < rfJWdmE4wbZ7) {
                        r35CfQ[kvsx5tBVeAZ][FXGFJnk06Zyo] = r35CfQ[kvsx5tBVeAZ][FXGFJnk06Zyo] + Rt7SM3RB[kvsx5tBVeAZ][NiwgIQG] * xzCHYOG3LbPp[NiwgIQG][FXGFJnk06Zyo];
                        NiwgIQG++;
                    };
                };
            }
            kvsx5tBVeAZ++;
        };
    }
    for (kvsx5tBVeAZ = 0; kvsx5tBVeAZ < zAGjrKPhY; kvsx5tBVeAZ = kvsx5tBVeAZ + 1) {
        if (bgdNIRs85w == 1)
            cout << r35CfQ[kvsx5tBVeAZ][0] << endl;
        if (bgdNIRs85w == (934 - 932))
            cout << r35CfQ[kvsx5tBVeAZ][0] << ' ' << r35CfQ[kvsx5tBVeAZ][1] << endl;
        else if (bgdNIRs85w > 2) {
            cout << r35CfQ[kvsx5tBVeAZ][0];
            for (FXGFJnk06Zyo = 1; FXGFJnk06Zyo < bgdNIRs85w - 1; FXGFJnk06Zyo++)
                cout << ' ' << r35CfQ[kvsx5tBVeAZ][FXGFJnk06Zyo];
            cout << ' ' << r35CfQ[kvsx5tBVeAZ][bgdNIRs85w - 1] << endl;
        };
    }
    return 0;
}

