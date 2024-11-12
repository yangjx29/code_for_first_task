int main () {
    int l;
    int z0gGDzlk;
    int j;
    int o5umdWH;
    int EnHof3RJX0;
    int k;
    int G5JGAt;
    int VyDp2maGU9NZ;
    l = (79 - 79);
    int s8t6DWv2Bg [(964 - 958)] [6];
    for (z0gGDzlk = (51 - 50); z0gGDzlk <= (232 - 227); z0gGDzlk++)
        for (j = (703 - 702); j <= (109 - 104); j++)
            cin >> s8t6DWv2Bg[z0gGDzlk][j];
    for (z0gGDzlk = 1; (414 - 409) >= z0gGDzlk; z0gGDzlk++) {
        G5JGAt = (40 - 40);
        {
            j = 1;
            while (5 >= j) {
                VyDp2maGU9NZ = (884 - 884);
                if (s8t6DWv2Bg[z0gGDzlk][j] > G5JGAt) {
                    G5JGAt = s8t6DWv2Bg[z0gGDzlk][j];
                    o5umdWH = z0gGDzlk;
                    EnHof3RJX0 = j;
                }
                if (j == 5) {
                    for (k = 1; k <= 5; k = k + 1)
                        if (s8t6DWv2Bg[k][EnHof3RJX0] < G5JGAt) {
                            VyDp2maGU9NZ = 1;
                            break;
                        }
                    if (VyDp2maGU9NZ == (950 - 950)) {
                        cout << o5umdWH << " " << EnHof3RJX0 << " " << s8t6DWv2Bg[o5umdWH][EnHof3RJX0] << endl;
                        l = 8;
                        break;
                    };
                }
                j = j + 1;
            };
        }
        if (VyDp2maGU9NZ == (279 - 279))
            break;
    }
    if (l == (606 - 606))
        cout << "not found" << endl;
    return 0;
}

