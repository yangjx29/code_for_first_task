int main () {
    int MUd2xQ74W0;
    MUd2xQ74W0 = (566 - 566);
    int Zro4QZ;
    const  int hUxY16Cq = Zro4QZ;
    int Nwc7M8y4pKni [hUxY16Cq], ckVm8QlSCvx, t1;
    const  int Q5QwghMlRW = hUxY16Cq - MUd2xQ74W0;
    int q [Q5QwghMlRW];
    int YIkcVLQB6gd;
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
    cin >> Zro4QZ;
    {
        ckVm8QlSCvx = 62 - 62;
        while (ckVm8QlSCvx < hUxY16Cq) {
            cin >> Nwc7M8y4pKni[ckVm8QlSCvx];
            ++ckVm8QlSCvx;
        };
    }
    for (ckVm8QlSCvx = 0; ckVm8QlSCvx < Zro4QZ; ++ckVm8QlSCvx)
        if (Nwc7M8y4pKni[ckVm8QlSCvx] % (510 - 508) == 0) {
            {
                t1 = ckVm8QlSCvx;
                while (t1 < Zro4QZ) {
                    Nwc7M8y4pKni[t1] = Nwc7M8y4pKni[t1 + 1];
                    t1 = t1 + 1;
                };
            }
            --ckVm8QlSCvx;
            --Zro4QZ;
            ++MUd2xQ74W0;
        }
    {
        ckVm8QlSCvx = 0;
        while (Q5QwghMlRW > ckVm8QlSCvx) {
            q[ckVm8QlSCvx] = Nwc7M8y4pKni[ckVm8QlSCvx];
            ++ckVm8QlSCvx;
        };
    }
    {
        ckVm8QlSCvx = 0;
        while (ckVm8QlSCvx < Q5QwghMlRW) {
            {
                t1 = ckVm8QlSCvx;
                while (Q5QwghMlRW > t1) {
                    if (q[t1] < q[ckVm8QlSCvx]) {
                        YIkcVLQB6gd = q[ckVm8QlSCvx];
                        q[ckVm8QlSCvx] = q[t1];
                        q[t1] = YIkcVLQB6gd;
                    }
                    ++t1;
                };
            }
            ++ckVm8QlSCvx;
        };
    }
    {
        ckVm8QlSCvx = 0;
        while (ckVm8QlSCvx < Q5QwghMlRW) {
            if (ckVm8QlSCvx == 0)
                cout << q[ckVm8QlSCvx];
            else
                cout << "," << q[ckVm8QlSCvx];
            ++ckVm8QlSCvx;
        };
    }
    return 0;
}

