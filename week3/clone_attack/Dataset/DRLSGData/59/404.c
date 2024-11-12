int main () {
    int TX0q6LAoR1;
    int a31i79MIXPG;
    int A5oxGlcqirnA;
    int b5HJfapvY;
    int fpI8YusXVUTd;
    int y8MLiIG;
    TX0q6LAoR1 = 0;
    char vgVwjo9Mv [100] [100];
    cin >> A5oxGlcqirnA;
    {
        b5HJfapvY = 0;
        while (A5oxGlcqirnA > b5HJfapvY) {
            {
                fpI8YusXVUTd = 0;
                while (A5oxGlcqirnA > fpI8YusXVUTd) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    cin >> vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd];
                    fpI8YusXVUTd = fpI8YusXVUTd + 1;
                }
            }
            b5HJfapvY = b5HJfapvY + 1;
        }
    }
    cin >> a31i79MIXPG;
    for (y8MLiIG = 0; a31i79MIXPG - 1 > y8MLiIG; y8MLiIG = y8MLiIG + 1) {
        for (b5HJfapvY = 0; b5HJfapvY < A5oxGlcqirnA; b5HJfapvY = b5HJfapvY + 1) {
            fpI8YusXVUTd = 0;
            while (fpI8YusXVUTd < A5oxGlcqirnA) {
                if (!('@' != vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd])) {
                    if (A5oxGlcqirnA > fpI8YusXVUTd + 1 && !('.' != vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd + 1])) {
                        vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd + 1] = '$';
                    }
                    if (A5oxGlcqirnA > b5HJfapvY + 1 && !('.' != vgVwjo9Mv[b5HJfapvY + 1][fpI8YusXVUTd])) {
                        vgVwjo9Mv[b5HJfapvY + 1][fpI8YusXVUTd] = '$';
                    }
                    if (fpI8YusXVUTd - 1 >= 0 && !('.' != vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd - 1])) {
                        vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd - 1] = '$';
                    }
                    if (b5HJfapvY - 1 >= 0 && vgVwjo9Mv[b5HJfapvY - 1][fpI8YusXVUTd] == '.') {
                        vgVwjo9Mv[b5HJfapvY - 1][fpI8YusXVUTd] = '$';
                    }
                }
                fpI8YusXVUTd = fpI8YusXVUTd + 1;
            }
        }
        {
            b5HJfapvY = 0;
            while (b5HJfapvY < A5oxGlcqirnA) {
                for (fpI8YusXVUTd = 0; fpI8YusXVUTd < A5oxGlcqirnA; fpI8YusXVUTd = fpI8YusXVUTd + 1) {
                    if (vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd] == '$') {
                        vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd] = '@';
                    }
                }
                b5HJfapvY = b5HJfapvY + 1;
            }
        }
    }
    {
        b5HJfapvY = 0;
        while (b5HJfapvY < A5oxGlcqirnA) {
            for (fpI8YusXVUTd = 0; fpI8YusXVUTd < A5oxGlcqirnA; fpI8YusXVUTd = fpI8YusXVUTd + 1) {
                if (vgVwjo9Mv[b5HJfapvY][fpI8YusXVUTd] == '@') {
                    TX0q6LAoR1 = TX0q6LAoR1 +1;
                }
            }
            b5HJfapvY++;
        }
    }
    cout << TX0q6LAoR1;
    return 0;
}

