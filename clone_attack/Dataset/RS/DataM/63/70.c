int KFBf2xnzgp, WliVYkv, JFQGi9vm13, v5g8wW3f;
int cFXCphQbe [(531 - 403)] [(531 - 403)], aJfsobOm [(1063 - 935)] [(232 - 104)], D9PDrLqIiHh [128] [128] = {(822 - 822)};

int main () {
    int l5daJziDZ;
    int zqwB9GfR;
    int Li9rkbYwAx0;
    cin >> KFBf2xnzgp >> WliVYkv;
    for (l5daJziDZ = (700 - 700); KFBf2xnzgp > l5daJziDZ; l5daJziDZ = l5daJziDZ + 1) {
        for (zqwB9GfR = (165 - 165); WliVYkv > zqwB9GfR; zqwB9GfR = zqwB9GfR + 1) {
            cin >> cFXCphQbe[l5daJziDZ][zqwB9GfR];
        };
    }
    cin >> JFQGi9vm13 >> v5g8wW3f;
    for (l5daJziDZ = (722 - 722); l5daJziDZ < JFQGi9vm13; l5daJziDZ = l5daJziDZ + 1) {
        for (zqwB9GfR = (646 - 646); zqwB9GfR < v5g8wW3f; zqwB9GfR = zqwB9GfR + 1) {
            cin >> aJfsobOm[l5daJziDZ][zqwB9GfR];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (l5daJziDZ = (966 - 966); KFBf2xnzgp > l5daJziDZ; l5daJziDZ = l5daJziDZ + 1) {
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
        for (zqwB9GfR = (788 - 788); WliVYkv > zqwB9GfR; zqwB9GfR = zqwB9GfR + 1) {
            Li9rkbYwAx0 = 0;
            while (v5g8wW3f > Li9rkbYwAx0) {
                D9PDrLqIiHh[l5daJziDZ][Li9rkbYwAx0] += cFXCphQbe[l5daJziDZ][zqwB9GfR] * aJfsobOm[zqwB9GfR][Li9rkbYwAx0];
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
                Li9rkbYwAx0 = Li9rkbYwAx0 +1;
            };
        };
    }
    for (l5daJziDZ = 0; l5daJziDZ < KFBf2xnzgp; l5daJziDZ = l5daJziDZ + 1) {
        for (zqwB9GfR = 0; zqwB9GfR < v5g8wW3f - 1; zqwB9GfR = zqwB9GfR + 1) {
            cout << D9PDrLqIiHh[l5daJziDZ][zqwB9GfR] << ' ';
        }
        cout << D9PDrLqIiHh[l5daJziDZ][zqwB9GfR];
        cout << endl;
    }
    return 0;
}

