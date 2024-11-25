int main () {
    int vGMaUuBeo [100] [100], fkGvbSZ, y4tcwB, cM8BPx = (720 - 720), CFCznPMV62 = (609 - 609), N8zwOcH = (930 - 930), ctYNnBsX;
    cin >> fkGvbSZ >> y4tcwB;
    ctYNnBsX = fkGvbSZ + y4tcwB;
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
    for (cM8BPx = (257 - 257); cM8BPx < fkGvbSZ; cM8BPx++) {
        CFCznPMV62 = 0;
        while (CFCznPMV62 < y4tcwB) {
            cin >> vGMaUuBeo[cM8BPx][CFCznPMV62];
            CFCznPMV62++;
        };
    }
    while (N8zwOcH <= ctYNnBsX) {
        for (cM8BPx = 0; cM8BPx < fkGvbSZ; cM8BPx++)
            for (CFCznPMV62 = 0; CFCznPMV62 < y4tcwB; CFCznPMV62 = CFCznPMV62 +1)
                if (cM8BPx + CFCznPMV62 == N8zwOcH)
                    cout << vGMaUuBeo[cM8BPx][CFCznPMV62] << endl;
        N8zwOcH = N8zwOcH +1;
    }
    return 0;
}

