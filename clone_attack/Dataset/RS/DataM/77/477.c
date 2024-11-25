int uQFy1CPOtSL;

void  z3Pwce0DG (int BVjtEA, char s [], char VUsl0T, char kCZJf7t3p) {
    int mAIw2Vx;
    int zZg95ls;
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
    if (uQFy1CPOtSL == 0)
        return;
    {
        mAIw2Vx = 0;
        while (mAIw2Vx < BVjtEA) {
            if (!(VUsl0T != s[mAIw2Vx])) {
                for (zZg95ls = mAIw2Vx + 1; !('0' != s[zZg95ls]) && zZg95ls < BVjtEA; zZg95ls++)
                    ;
                if (s[zZg95ls] == kCZJf7t3p) {
                    cout << mAIw2Vx << " " << zZg95ls << endl;
                    uQFy1CPOtSL = uQFy1CPOtSL - 2;
                    s[mAIw2Vx] = s[zZg95ls] = '0';
                    z3Pwce0DG (BVjtEA, s, VUsl0T, kCZJf7t3p);
                };
            }
            mAIw2Vx++;
        };
    };
}

int main () {
    char s [105], VUsl0T, kCZJf7t3p;
    int l = strlen (s);
    uQFy1CPOtSL = l;
    cin.getline (s, 105);
    VUsl0T = s[0];
    for (int mAIw2Vx = 1;
    mAIw2Vx < l; mAIw2Vx++) {
        if (s[mAIw2Vx] != s[0])
            kCZJf7t3p = s[mAIw2Vx];
    }
    z3Pwce0DG (l, s, VUsl0T, kCZJf7t3p);
    return 0;
}

