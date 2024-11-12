int zydBJi5w7 (int *mr71kxwa, int pAxRJIkB, int DA1LCwd0) {
    int N4hYEO8IUpB, vxOUnFiIVzu = -1, qZNpzUxHhFSd;
    if (pAxRJIkB == 0)
        return 0;
    {
        N4hYEO8IUpB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N4hYEO8IUpB < pAxRJIkB) {
            qZNpzUxHhFSd = DA1LCwd0;
            if (mr71kxwa[N4hYEO8IUpB] <= DA1LCwd0 || DA1LCwd0 == -1)
                qZNpzUxHhFSd = mr71kxwa[N4hYEO8IUpB];
            else
                continue;
            if (zydBJi5w7 (mr71kxwa + N4hYEO8IUpB +1, pAxRJIkB - 1 - N4hYEO8IUpB, qZNpzUxHhFSd) > vxOUnFiIVzu)
                vxOUnFiIVzu = zydBJi5w7 (mr71kxwa + N4hYEO8IUpB +1, pAxRJIkB - N4hYEO8IUpB -1, qZNpzUxHhFSd);
            N4hYEO8IUpB = N4hYEO8IUpB +1;
        };
    }
    return vxOUnFiIVzu + 1;
}

int main () {
    int N4hYEO8IUpB, pAxRJIkB, mr71kxwa [25];
    cin >> pAxRJIkB;
    {
        N4hYEO8IUpB = 0;
        while (N4hYEO8IUpB < pAxRJIkB) {
            cin >> mr71kxwa[N4hYEO8IUpB];
            N4hYEO8IUpB = N4hYEO8IUpB +1;
        };
    }
    cout << zydBJi5w7 (mr71kxwa, pAxRJIkB, -1);
}

