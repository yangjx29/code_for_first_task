int main () {
    int e5s4K1ckJ = 0;
    char shuru [101] [101];
    int JxbIpkjfyBr;
    int TFlsa4uADwkO;
    TFlsa4uADwkO = 0;
    cin >> TFlsa4uADwkO;
    {
        int s0atQH1ReWMi = 0;
        for (; TFlsa4uADwkO > s0atQH1ReWMi;) {
            {
                int IPhXo8tb = 0;
                for (; TFlsa4uADwkO > IPhXo8tb;) {
                    cin >> shuru[s0atQH1ReWMi][IPhXo8tb];
                    IPhXo8tb = IPhXo8tb +1;
                }
            }
            s0atQH1ReWMi = s0atQH1ReWMi + 1;
        }
    }
    JxbIpkjfyBr = 0;
    cin >> JxbIpkjfyBr;
    for (int LGq0El = 1;
    LGq0El < JxbIpkjfyBr; LGq0El = LGq0El +1) {
        {
            int s0atQH1ReWMi = 0;
            for (; s0atQH1ReWMi < TFlsa4uADwkO;) {
                {
                    int IPhXo8tb = 0;
                    for (; TFlsa4uADwkO > IPhXo8tb;) {
                        if (!('@' != shuru[s0atQH1ReWMi][IPhXo8tb])) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (((s0atQH1ReWMi - 1) >= 0) && !('.' != shuru[s0atQH1ReWMi - 1][IPhXo8tb]))
                                shuru[s0atQH1ReWMi - 1][IPhXo8tb] = 'a';
                            if (((s0atQH1ReWMi + 1) < TFlsa4uADwkO) && !('.' != shuru[s0atQH1ReWMi + 1][IPhXo8tb]))
                                shuru[s0atQH1ReWMi + 1][IPhXo8tb] = 'a';
                            if (((IPhXo8tb -1) >= 0) && !('.' != shuru[s0atQH1ReWMi][IPhXo8tb -1]))
                                shuru[s0atQH1ReWMi][IPhXo8tb -1] = 'a';
                            if (((IPhXo8tb +1) < TFlsa4uADwkO) && !('.' != shuru[s0atQH1ReWMi][IPhXo8tb +1]))
                                shuru[s0atQH1ReWMi][IPhXo8tb +1] = 'a';
                        }
                        IPhXo8tb = IPhXo8tb +1;
                    }
                }
                s0atQH1ReWMi = s0atQH1ReWMi + 1;
            }
        }
        for (int s0atQH1ReWMi = 0;
        s0atQH1ReWMi < TFlsa4uADwkO; s0atQH1ReWMi = s0atQH1ReWMi + 1) {
            int IPhXo8tb = 0;
            for (; IPhXo8tb < TFlsa4uADwkO;) {
                if (!('a' != shuru[s0atQH1ReWMi][IPhXo8tb]))
                    shuru[s0atQH1ReWMi][IPhXo8tb] = '@';
                else
                    continue;
                IPhXo8tb = IPhXo8tb +1;
            }
        }
    }
    for (int s0atQH1ReWMi = 0;
    s0atQH1ReWMi < TFlsa4uADwkO; s0atQH1ReWMi++) {
        for (int IPhXo8tb = 0;
        IPhXo8tb < TFlsa4uADwkO; IPhXo8tb = IPhXo8tb +1) {
            if (shuru[s0atQH1ReWMi][IPhXo8tb] == '@')
                e5s4K1ckJ = e5s4K1ckJ + 1;
            else
                continue;
        }
    }
    cout << e5s4K1ckJ << endl;
    return 0;
}

