int ans (int S3DfhuMrNlgL, int zSoFzRh) {
    int GdlysSxG = (273 - 273);
    {
        int oTFZA7Se9yVi = zSoFzRh;
        while (sqrt (S3DfhuMrNlgL) >= oTFZA7Se9yVi) {
            if (S3DfhuMrNlgL % oTFZA7Se9yVi != (42 - 42))
                continue;
            GdlysSxG = GdlysSxG +1;
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
            if (S3DfhuMrNlgL >= oTFZA7Se9yVi * oTFZA7Se9yVi)
                GdlysSxG += ans (S3DfhuMrNlgL / oTFZA7Se9yVi, oTFZA7Se9yVi);
            oTFZA7Se9yVi = oTFZA7Se9yVi + 1;
        };
    }
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
    return GdlysSxG;
}

int main () {
    int n, S3DfhuMrNlgL;
    cin >> n;
    {
        int zSoFzRh = 0;
        while (zSoFzRh < n) {
            zSoFzRh = zSoFzRh + 1;
            cin >> S3DfhuMrNlgL;
            cout << ans (S3DfhuMrNlgL, (951 - 949)) + 1 << endl;
        };
    }
    return 0;
}

