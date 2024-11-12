int main () {
    int n, gDPH4kE [20], HMhoR5E, tdpnrP8, j, ppxFMi;
    gDPH4kE[(488 - 487)] = 1;
    gDPH4kE[2] = 1;
    for (j = 3; 20 >= j; j++)
        gDPH4kE[j] = gDPH4kE[j - 1] + gDPH4kE[j - 2];
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
    cin >> n;
    for (tdpnrP8 = 1; tdpnrP8 <= n; tdpnrP8++) {
        cin >> HMhoR5E;
        ppxFMi = gDPH4kE[HMhoR5E];
        cout << ppxFMi << endl;
    }
    return 0;
}

