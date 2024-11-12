int main () {
    int t;
    int num = 0;
    int mdxntokzme3 [500], ji [500];
    int iXZM789tN;
    int i;
    int sxG0CQqHVkP;
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
    cin >> iXZM789tN;
    {
        i = 0;
        while (i <= iXZM789tN - 1) {
            cin >> mdxntokzme3[i];
            if (mdxntokzme3[i] % 2 == 1) {
                ji[num] = mdxntokzme3[i];
                num = num + 1;
            }
            i++;
        };
    }
    {
        i = num - 1;
        while (i >= 1) {
            {
                sxG0CQqHVkP = 0;
                while (sxG0CQqHVkP <= i - 1) {
                    if (ji[sxG0CQqHVkP] > ji[sxG0CQqHVkP + 1]) {
                        t = ji[sxG0CQqHVkP];
                        ji[sxG0CQqHVkP] = ji[sxG0CQqHVkP + 1];
                        ji[sxG0CQqHVkP + 1] = t;
                    }
                    sxG0CQqHVkP++;
                };
            }
            i--;
        };
    }
    cout << ji[0];
    {
        i = 1;
        while (i <= num - 1) {
            cout << "," << ji[i];
            i++;
        };
    };
}

